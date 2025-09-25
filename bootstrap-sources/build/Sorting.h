#ifndef Sorting__H
#define Sorting__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_Sorting_TarjanTransposed(threadData_t *threadData, modelica_metatype _mT, modelica_metatype _ass2);
#define boxptr_Sorting_TarjanTransposed omc_Sorting_TarjanTransposed
static const MMC_DEFSTRUCTLIT(boxvar_lit_Sorting_TarjanTransposed,2,0) {(void*) boxptr_Sorting_TarjanTransposed,0}};
#define boxvar_Sorting_TarjanTransposed MMC_REFSTRUCTLIT(boxvar_lit_Sorting_TarjanTransposed)


DLLDirection
modelica_metatype omc_Sorting_Tarjan(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_integer _N);
DLLDirection
modelica_metatype boxptr_Sorting_Tarjan(threadData_t *threadData, modelica_metatype _m, modelica_metatype _ass1, modelica_metatype _N);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Sorting_Tarjan,2,0) {(void*) boxptr_Sorting_Tarjan,0}};
#define boxvar_Sorting_Tarjan MMC_REFSTRUCTLIT(boxvar_lit_Sorting_Tarjan)

#ifdef __cplusplus
}
#endif
#endif
