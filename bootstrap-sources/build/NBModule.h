#ifndef NBModule__H
#define NBModule__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_string omc_NBModule_moduleClockString(threadData_t *threadData, modelica_metatype _name_clock);
#define boxptr_NBModule_moduleClockString omc_NBModule_moduleClockString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBModule_moduleClockString,2,0) {(void*) boxptr_NBModule_moduleClockString,0}};
#define boxvar_NBModule_moduleClockString MMC_REFSTRUCTLIT(boxvar_lit_NBModule_moduleClockString)

#ifdef __cplusplus
}
#endif
#endif
