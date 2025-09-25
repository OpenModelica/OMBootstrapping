#ifndef CodegenFMU1__H
#define CodegenFMU1__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Tpl_BlockType_BT__INDENT__desc;

extern struct record_description Tpl_StringToken_ST__LINE__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_StringToken_ST__STRING__LIST__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_CodegenFMU1_fmiModelDescriptionAttributes(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_guid);
#define boxptr_CodegenFMU1_fmiModelDescriptionAttributes omc_CodegenFMU1_fmiModelDescriptionAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU1_fmiModelDescriptionAttributes,2,0) {(void*) boxptr_CodegenFMU1_fmiModelDescriptionAttributes,0}};
#define boxvar_CodegenFMU1_fmiModelDescriptionAttributes MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU1_fmiModelDescriptionAttributes)


DLLDirection
modelica_metatype omc_CodegenFMU1_fmiModelDescription(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_guid, modelica_string _in_a_FMUType);
#define boxptr_CodegenFMU1_fmiModelDescription omc_CodegenFMU1_fmiModelDescription
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU1_fmiModelDescription,2,0) {(void*) boxptr_CodegenFMU1_fmiModelDescription,0}};
#define boxvar_CodegenFMU1_fmiModelDescription MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU1_fmiModelDescription)

#ifdef __cplusplus
}
#endif
#endif
