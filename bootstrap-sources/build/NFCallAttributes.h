#ifndef NFCallAttributes__H
#define NFCallAttributes__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_CallAttributes_CALL__ATTR__desc;


DLLDirection
modelica_metatype omc_NFCallAttributes_toDAE(threadData_t *threadData, modelica_metatype _attr, modelica_metatype _returnType);
#define boxptr_NFCallAttributes_toDAE omc_NFCallAttributes_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCallAttributes_toDAE,2,0) {(void*) boxptr_NFCallAttributes_toDAE,0}};
#define boxvar_NFCallAttributes_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFCallAttributes_toDAE)

#ifdef __cplusplus
}
#endif
#endif
