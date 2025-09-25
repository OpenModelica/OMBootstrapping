#ifndef FFI__H
#define FFI__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_FFI_callFunction(threadData_t *threadData, modelica_integer _fnHandle, modelica_metatype _args, modelica_metatype _specs, modelica_metatype _returnType, modelica_metatype *out_outputArgs);
DLLDirection
modelica_metatype boxptr_FFI_callFunction(threadData_t *threadData, modelica_metatype _fnHandle, modelica_metatype _args, modelica_metatype _specs, modelica_metatype _returnType, modelica_metatype *out_outputArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FFI_callFunction,2,0) {(void*) boxptr_FFI_callFunction,0}};
#define boxvar_FFI_callFunction MMC_REFSTRUCTLIT(boxvar_lit_FFI_callFunction)

extern modelica_metatype FFI_callFunction(int /*_fnHandle*/, modelica_metatype /*_args*/, modelica_metatype /*_specs*/, modelica_metatype /*_returnType*/, modelica_metatype* /*_outputArgs*/);

#ifdef __cplusplus
}
#endif
#endif
