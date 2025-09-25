#ifndef BackendUtil__H
#define BackendUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendUtil_ReplacePattern_REPLACEPATTERN__desc;


#define boxptr_BackendUtil_modelicaStringToCStr2 omc_BackendUtil_modelicaStringToCStr2


#define boxptr_BackendUtil_modelicaStringToCStr1 omc_BackendUtil_modelicaStringToCStr1


DLLDirection
modelica_string omc_BackendUtil_modelicaStringToCStr(threadData_t *threadData, modelica_string _str, modelica_boolean _changeDerCall);
DLLDirection
modelica_metatype boxptr_BackendUtil_modelicaStringToCStr(threadData_t *threadData, modelica_metatype _str, modelica_metatype _changeDerCall);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendUtil_modelicaStringToCStr,2,0) {(void*) boxptr_BackendUtil_modelicaStringToCStr,0}};
#define boxvar_BackendUtil_modelicaStringToCStr MMC_REFSTRUCTLIT(boxvar_lit_BackendUtil_modelicaStringToCStr)

#ifdef __cplusplus
}
#endif
#endif
