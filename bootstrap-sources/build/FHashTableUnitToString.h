#ifndef FHashTableUnitToString__H
#define FHashTableUnitToString__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_FHashTableUnitToString_emptyHashTableSized(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_FHashTableUnitToString_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableUnitToString_emptyHashTableSized,2,0) {(void*) boxptr_FHashTableUnitToString_emptyHashTableSized,0}};
#define boxvar_FHashTableUnitToString_emptyHashTableSized MMC_REFSTRUCTLIT(boxvar_lit_FHashTableUnitToString_emptyHashTableSized)


#define boxptr_FHashTableUnitToString_id omc_FHashTableUnitToString_id


DLLDirection
modelica_metatype omc_FHashTableUnitToString_emptyHashTable(threadData_t *threadData);
#define boxptr_FHashTableUnitToString_emptyHashTable omc_FHashTableUnitToString_emptyHashTable
static const MMC_DEFSTRUCTLIT(boxvar_lit_FHashTableUnitToString_emptyHashTable,2,0) {(void*) boxptr_FHashTableUnitToString_emptyHashTable,0}};
#define boxvar_FHashTableUnitToString_emptyHashTable MMC_REFSTRUCTLIT(boxvar_lit_FHashTableUnitToString_emptyHashTable)

#ifdef __cplusplus
}
#endif
#endif
