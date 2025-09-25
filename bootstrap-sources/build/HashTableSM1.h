#ifndef HashTableSM1__H
#define HashTableSM1__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_string omc_HashTableSM1_modeStr(threadData_t *threadData, modelica_metatype _mode);
#define boxptr_HashTableSM1_modeStr omc_HashTableSM1_modeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableSM1_modeStr,2,0) {(void*) boxptr_HashTableSM1_modeStr,0}};
#define boxvar_HashTableSM1_modeStr MMC_REFSTRUCTLIT(boxvar_lit_HashTableSM1_modeStr)


DLLDirection
modelica_metatype omc_HashTableSM1_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_HashTableSM1_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableSM1_emptyHashTableSized,2,0) {(void*) boxptr_HashTableSM1_emptyHashTableSized,0}};
#define boxvar_HashTableSM1_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_HashTableSM1_emptyHashTableSized)


DLLDirection
modelica_metatype omc_HashTableSM1_emptyHashTable(threadData_t *threadData);
#define boxptr_HashTableSM1_emptyHashTable omc_HashTableSM1_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableSM1_emptyHashTable,2,0) {(void*) boxptr_HashTableSM1_emptyHashTable,0}};
#define boxvar_HashTableSM1_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_HashTableSM1_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
