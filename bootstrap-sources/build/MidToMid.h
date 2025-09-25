#ifndef MidToMid__H
#define MidToMid__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description MidCode_Block_BLOCK__desc;

extern struct record_description MidCode_Function_FUNCTION__desc;

extern struct record_description MidCode_Terminator_GOTO__desc;


#define boxptr_MidToMid_getSuccessors omc_MidToMid_getSuccessors


DLLDirection
modelica_metatype omc_MidToMid_lookupId(threadData_t *threadData, modelica_metatype _blocks, modelica_integer _id);
DLLDirection
modelica_metatype boxptr_MidToMid_lookupId(threadData_t *threadData, modelica_metatype _blocks, modelica_metatype _id);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_lookupId,2,0) {(void*) boxptr_MidToMid_lookupId,0}};
#define boxvar_MidToMid_lookupId MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_lookupId)


DLLDirection
modelica_metatype omc_MidToMid_longJmpGoto(threadData_t *threadData, modelica_metatype _oldFunction);
#define boxptr_MidToMid_longJmpGoto omc_MidToMid_longJmpGoto
static const MMC_DEFSTRUCTLIT(boxvar_lit_MidToMid_longJmpGoto,2,0) {(void*) boxptr_MidToMid_longJmpGoto,0}};
#define boxvar_MidToMid_longJmpGoto MMC_REFSTRUCTLIT(boxvar_lit_MidToMid_longJmpGoto)

#ifdef __cplusplus
}
#endif
#endif
