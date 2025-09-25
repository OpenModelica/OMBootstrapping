#ifndef MidCode__H
#define MidCode__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_string omc_MidCode_varString(threadData_t *threadData, modelica_metatype _var);
#define boxptr_MidCode_varString omc_MidCode_varString
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidCode_varString,2,0) {(void*) boxptr_MidCode_varString,0}};
#define boxvar_MidCode_varString MMC_REFSTRUCTLIT(boxvar_lit_MidCode_varString)

#ifdef __cplusplus
}
#endif
#endif
