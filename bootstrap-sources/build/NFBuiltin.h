#ifndef NFBuiltin__H
#define NFBuiltin__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFLookupTree_Entry_COMPONENT__desc;


DLLDirection
void omc_NFBuiltin_makeBuiltinLookupTree(threadData_t *threadData, modelica_string _name, modelica_metatype _components, modelica_metatype _classes);
#define boxptr_NFBuiltin_makeBuiltinLookupTree omc_NFBuiltin_makeBuiltinLookupTree
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBuiltin_makeBuiltinLookupTree,2,0) {(void*) boxptr_NFBuiltin_makeBuiltinLookupTree,0}};
#define boxvar_NFBuiltin_makeBuiltinLookupTree MMC_REFSTRUCTLIT(boxvar_lit_NFBuiltin_makeBuiltinLookupTree)

#ifdef __cplusplus
}
#endif
#endif
