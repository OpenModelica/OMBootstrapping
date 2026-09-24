#ifndef MutableWeak__H
#define MutableWeak__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description MutableWeak_Roots_ROOTS__desc;


DLLModelDirection
void omc_MutableWeak_clearRoots(threadData_t *threadData);
#define boxptr_MutableWeak_clearRoots omc_MutableWeak_clearRoots
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_clearRoots,2,0) {(void*) boxptr_MutableWeak_clearRoots,0}};
#define boxvar_MutableWeak_clearRoots MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_clearRoots)


DLLModelDirection
void omc_MutableWeak_root(threadData_t *threadData, modelica_metatype _mutable);
#define boxptr_MutableWeak_root omc_MutableWeak_root
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_root,2,0) {(void*) boxptr_MutableWeak_root,0}};
#define boxvar_MutableWeak_root MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_root)


DLLModelDirection
void omc_MutableWeak_useRoots(threadData_t *threadData, modelica_metatype _roots);
#define boxptr_MutableWeak_useRoots omc_MutableWeak_useRoots
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_useRoots,2,0) {(void*) boxptr_MutableWeak_useRoots,0}};
#define boxvar_MutableWeak_useRoots MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_useRoots)


DLLModelDirection
modelica_metatype omc_MutableWeak_newRoots(threadData_t *threadData);
#define boxptr_MutableWeak_newRoots omc_MutableWeak_newRoots
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_newRoots,2,0) {(void*) boxptr_MutableWeak_newRoots,0}};
#define boxvar_MutableWeak_newRoots MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_newRoots)


DLLModelDirection
modelica_metatype omc_MutableWeak_value(threadData_t *threadData, modelica_metatype _weak);
#define boxptr_MutableWeak_value omc_MutableWeak_value
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_value,2,0) {(void*) boxptr_MutableWeak_value,0}};
#define boxvar_MutableWeak_value MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_value)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype mutableWeakValue(modelica_metatype (*_weak*));
 */

DLLModelDirection
modelica_metatype omc_MutableWeak_ofValue(threadData_t *threadData, modelica_metatype _val);
#define boxptr_MutableWeak_ofValue omc_MutableWeak_ofValue
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_ofValue,2,0) {(void*) boxptr_MutableWeak_ofValue,0}};
#define boxvar_MutableWeak_ofValue MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_ofValue)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype mutableWeakOfValue(modelica_metatype (*_val*));
 */

DLLModelDirection
modelica_metatype omc_MutableWeak_upgradeOwning(threadData_t *threadData, modelica_metatype _weak);
#define boxptr_MutableWeak_upgradeOwning omc_MutableWeak_upgradeOwning
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_upgradeOwning,2,0) {(void*) boxptr_MutableWeak_upgradeOwning,0}};
#define boxvar_MutableWeak_upgradeOwning MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_upgradeOwning)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype mutableWeakUpgrade(modelica_metatype (*_weak*));
 */

DLLModelDirection
modelica_metatype omc_MutableWeak_upgrade(threadData_t *threadData, modelica_metatype _weak);
#define boxptr_MutableWeak_upgrade omc_MutableWeak_upgrade
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_upgrade,2,0) {(void*) boxptr_MutableWeak_upgrade,0}};
#define boxvar_MutableWeak_upgrade MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_upgrade)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype mutableWeakUpgrade(modelica_metatype (*_weak*));
 */

DLLModelDirection
modelica_metatype omc_MutableWeak_downgrade(threadData_t *threadData, modelica_metatype _mutable);
#define boxptr_MutableWeak_downgrade omc_MutableWeak_downgrade
static const MMC_DEFSTRUCTLIT(boxvar_lit_MutableWeak_downgrade,2,0) {(void*) boxptr_MutableWeak_downgrade,0}};
#define boxvar_MutableWeak_downgrade MMC_REFSTRUCTLIT(boxvar_lit_MutableWeak_downgrade)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype mutableWeakDowngrade(modelica_metatype (*_mutable*));
 */

#ifdef __cplusplus
}
#endif
#endif
