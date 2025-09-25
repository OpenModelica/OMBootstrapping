#ifndef NFConnection__H
#define NFConnection__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFConnection_CONNECTION__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFConnection_checkBalance omc_NFConnection_checkBalance


DLLDirection
modelica_string omc_NFConnection_toString(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnection_toString omc_NFConnection_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnection_toString,2,0) {(void*) boxptr_NFConnection_toString,0}};
#define boxvar_NFConnection_toString MMC_REFSTRUCTLIT(boxvar_lit_NFConnection_toString)


DLLDirection
modelica_metatype omc_NFConnection_scalarizePrefix(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnection_scalarizePrefix omc_NFConnection_scalarizePrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnection_scalarizePrefix,2,0) {(void*) boxptr_NFConnection_scalarizePrefix,0}};
#define boxvar_NFConnection_scalarizePrefix MMC_REFSTRUCTLIT(boxvar_lit_NFConnection_scalarizePrefix)


DLLDirection
modelica_metatype omc_NFConnection_scalarize(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnection_scalarize omc_NFConnection_scalarize
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnection_scalarize,2,0) {(void*) boxptr_NFConnection_scalarize,0}};
#define boxvar_NFConnection_scalarize MMC_REFSTRUCTLIT(boxvar_lit_NFConnection_scalarize)


DLLDirection
modelica_metatype omc_NFConnection_split(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnection_split omc_NFConnection_split
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnection_split,2,0) {(void*) boxptr_NFConnection_split,0}};
#define boxvar_NFConnection_split MMC_REFSTRUCTLIT(boxvar_lit_NFConnection_split)

#ifdef __cplusplus
}
#endif
#endif
