#ifndef NBTearing__H
#define NBTearing__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Flags_ValidOptions_STRING__DESC__OPTION__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NBAdjacency_Matrix_EMPTY__desc;

extern struct record_description NBEquation_Iterator_EMPTY__desc;

extern struct record_description NBMatching_MATCHING__desc;

extern struct record_description NBSlice_SLICE__desc;

extern struct record_description NBStrongComponent_ALGEBRAIC__LOOP__desc;

extern struct record_description NBTearing_TEARING__SET__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NBTearing_setResidualEqns(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftearing, modelica_metatype _residuals);
#define boxptr_NBTearing_setResidualEqns omc_NBTearing_setResidualEqns
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_setResidualEqns,2,0) {(void*) boxptr_NBTearing_setResidualEqns,0}};
#define boxvar_NBTearing_setResidualEqns MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_setResidualEqns)


DLLDirection
modelica_metatype omc_NBTearing_getResidualVars(threadData_t *threadData, modelica_metatype _tearing);
#define boxptr_NBTearing_getResidualVars omc_NBTearing_getResidualVars
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_getResidualVars,2,0) {(void*) boxptr_NBTearing_getResidualVars,0}};
#define boxvar_NBTearing_getResidualVars MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_getResidualVars)


DLLDirection
modelica_metatype omc_NBTearing_getModule(threadData_t *threadData);
#define boxptr_NBTearing_getModule omc_NBTearing_getModule
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_getModule,2,0) {(void*) boxptr_NBTearing_getModule,0}};
#define boxvar_NBTearing_getModule MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_getModule)


DLLDirection
modelica_metatype omc_NBTearing_singleImplicit(threadData_t *threadData, modelica_metatype _var, modelica_metatype _eqn);
#define boxptr_NBTearing_singleImplicit omc_NBTearing_singleImplicit
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_singleImplicit,2,0) {(void*) boxptr_NBTearing_singleImplicit,0}};
#define boxvar_NBTearing_singleImplicit MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_singleImplicit)


DLLDirection
modelica_metatype omc_NBTearing_implicit(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Findex, modelica_integer _kind, modelica_metatype *out_funcTree, modelica_integer *out_index);
DLLDirection
modelica_metatype boxptr_NBTearing_implicit(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _kind, modelica_metatype *out_funcTree, modelica_metatype *out_index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_implicit,2,0) {(void*) boxptr_NBTearing_implicit,0}};
#define boxvar_NBTearing_implicit MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_implicit)


DLLDirection
modelica_metatype omc_NBTearing_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind);
DLLDirection
modelica_metatype boxptr_NBTearing_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_main,2,0) {(void*) boxptr_NBTearing_main,0}};
#define boxvar_NBTearing_main MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_main)


DLLDirection
modelica_string omc_NBTearing_toString(threadData_t *threadData, modelica_metatype _set, modelica_string __omcQ_24in_5Fstr);
#define boxptr_NBTearing_toString omc_NBTearing_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_toString,2,0) {(void*) boxptr_NBTearing_toString,0}};
#define boxvar_NBTearing_toString MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_toString)


DLLDirection
modelica_boolean omc_NBTearing_isEqual(threadData_t *threadData, modelica_metatype _tearing1, modelica_metatype _tearing2);
DLLDirection
modelica_metatype boxptr_NBTearing_isEqual(threadData_t *threadData, modelica_metatype _tearing1, modelica_metatype _tearing2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_isEqual,2,0) {(void*) boxptr_NBTearing_isEqual,0}};
#define boxvar_NBTearing_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_isEqual)


DLLDirection
modelica_integer omc_NBTearing_hash(threadData_t *threadData, modelica_metatype _tearing);
DLLDirection
modelica_metatype boxptr_NBTearing_hash(threadData_t *threadData, modelica_metatype _tearing);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBTearing_hash,2,0) {(void*) boxptr_NBTearing_hash,0}};
#define boxvar_NBTearing_hash MMC_REFSTRUCTLIT(boxvar_lit_NBTearing_hash)

#ifdef __cplusplus
}
#endif
#endif
