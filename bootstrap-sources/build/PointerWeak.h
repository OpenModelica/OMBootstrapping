#ifndef PointerWeak__H
#define PointerWeak__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLModelDirection
modelica_metatype omc_PointerWeak_upgrade(threadData_t *threadData, modelica_metatype _weak);
#define boxptr_PointerWeak_upgrade omc_PointerWeak_upgrade
static const MMC_DEFSTRUCTLIT(boxvar_lit_PointerWeak_upgrade,2,0) {(void*) boxptr_PointerWeak_upgrade,0}};
#define boxvar_PointerWeak_upgrade MMC_REFSTRUCTLIT(boxvar_lit_PointerWeak_upgrade)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype pointerWeakUpgrade(modelica_metatype (*_weak*));
 */

DLLModelDirection
modelica_metatype omc_PointerWeak_downgrade(threadData_t *threadData, modelica_metatype _pointer);
#define boxptr_PointerWeak_downgrade omc_PointerWeak_downgrade
static const MMC_DEFSTRUCTLIT(boxvar_lit_PointerWeak_downgrade,2,0) {(void*) boxptr_PointerWeak_downgrade,0}};
#define boxvar_PointerWeak_downgrade MMC_REFSTRUCTLIT(boxvar_lit_PointerWeak_downgrade)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype pointerWeakDowngrade(modelica_metatype (*_pointer*));
 */

#ifdef __cplusplus
}
#endif
#endif
