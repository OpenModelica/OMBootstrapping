#ifndef CodegenJS__H
#define CodegenJS__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Tpl_BlockType_BT__INDENT__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_StringToken_ST__STRING__LIST__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_CodegenJS_markdownContents(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode);
#define boxptr_CodegenJS_markdownContents omc_CodegenJS_markdownContents
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenJS_markdownContents,2,0) {(void*) boxptr_CodegenJS_markdownContents,0}};
#define boxvar_CodegenJS_markdownContents MMC_REFSTRUCTLIT(boxvar_lit_CodegenJS_markdownContents)


DLLDirection
modelica_metatype omc_CodegenJS_nodeJSDriver(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode);
#define boxptr_CodegenJS_nodeJSDriver omc_CodegenJS_nodeJSDriver
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenJS_nodeJSDriver,2,0) {(void*) boxptr_CodegenJS_nodeJSDriver,0}};
#define boxvar_CodegenJS_nodeJSDriver MMC_REFSTRUCTLIT(boxvar_lit_CodegenJS_nodeJSDriver)


DLLDirection
modelica_metatype omc_CodegenJS_markdownFile(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode);
#define boxptr_CodegenJS_markdownFile omc_CodegenJS_markdownFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenJS_markdownFile,2,0) {(void*) boxptr_CodegenJS_markdownFile,0}};
#define boxvar_CodegenJS_markdownFile MMC_REFSTRUCTLIT(boxvar_lit_CodegenJS_markdownFile)

#ifdef __cplusplus
}
#endif
#endif
