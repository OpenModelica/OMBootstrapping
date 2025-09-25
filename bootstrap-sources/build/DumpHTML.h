#ifndef DumpHTML__H
#define DumpHTML__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DumpHTML_Document_DOCUMENT__desc;

extern struct record_description DumpHTML_Style_STYLE__desc;

extern struct record_description DumpHTML_Tag_ANKER__desc;

extern struct record_description DumpHTML_Tag_CANVAS__desc;

extern struct record_description DumpHTML_Tag_DIVISION__desc;

extern struct record_description DumpHTML_Tag_HEADING__desc;

extern struct record_description DumpHTML_Tag_HYPERLINK__desc;

extern struct record_description DumpHTML_Tag_LINE__desc;

extern struct record_description DumpHTML_Tag_SCRIPT__desc;

extern struct record_description DumpHTML_Tag_SCRIPT__BODY__desc;


DLLDirection
void omc_DumpHTML_dumpMatrixHTML(threadData_t *threadData, modelica_metatype _m, modelica_metatype _rowNames, modelica_metatype _columNames, modelica_string _fileName);
#define boxptr_DumpHTML_dumpMatrixHTML omc_DumpHTML_dumpMatrixHTML
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpMatrixHTML,2,0) {(void*) boxptr_DumpHTML_dumpMatrixHTML,0}};
#define boxvar_DumpHTML_dumpMatrixHTML MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpMatrixHTML)


#define boxptr_DumpHTML_dumpMatching omc_DumpHTML_dumpMatching


#define boxptr_DumpHTML_dumpFullMatching omc_DumpHTML_dumpFullMatching


#define boxptr_DumpHTML_dumpEqn omc_DumpHTML_dumpEqn


#define boxptr_DumpHTML_dumpEqns omc_DumpHTML_dumpEqns


#define boxptr_DumpHTML_dumpVar omc_DumpHTML_dumpVar


#define boxptr_DumpHTML_printVarList omc_DumpHTML_printVarList


#define boxptr_DumpHTML_dumpEqSystem omc_DumpHTML_dumpEqSystem


DLLDirection
void omc_DumpHTML_dumpDAE(threadData_t *threadData, modelica_metatype _inDAE, modelica_string _inHeader, modelica_string _inFilename);
#define boxptr_DumpHTML_dumpDAE omc_DumpHTML_dumpDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpHTML_dumpDAE,2,0) {(void*) boxptr_DumpHTML_dumpDAE,0}};
#define boxvar_DumpHTML_dumpDAE MMC_REFSTRUCTLIT(boxvar_lit_DumpHTML_dumpDAE)


#define boxptr_DumpHTML_dumpStyle omc_DumpHTML_dumpStyle


#define boxptr_DumpHTML_dumpTag omc_DumpHTML_dumpTag


#define boxptr_DumpHTML_addBodyTag omc_DumpHTML_addBodyTag


#define boxptr_DumpHTML_addHeadTag omc_DumpHTML_addHeadTag


#define boxptr_DumpHTML_dumpDocument omc_DumpHTML_dumpDocument


#define boxptr_DumpHTML_addBodyTags omc_DumpHTML_addBodyTags


#define boxptr_DumpHTML_addDivisionTag omc_DumpHTML_addDivisionTag


#define boxptr_DumpHTML_addDivision omc_DumpHTML_addDivision


#define boxptr_DumpHTML_addLineTag omc_DumpHTML_addLineTag


#define boxptr_DumpHTML_addLine omc_DumpHTML_addLine


#define boxptr_DumpHTML_addAnkerTag omc_DumpHTML_addAnkerTag


#define boxptr_DumpHTML_addHyperLinkTag omc_DumpHTML_addHyperLinkTag


#define boxptr_DumpHTML_addHyperLink omc_DumpHTML_addHyperLink


#define boxptr_DumpHTML_addScriptBody omc_DumpHTML_addScriptBody


#define boxptr_DumpHTML_addScript omc_DumpHTML_addScript


#define boxptr_DumpHTML_emptyDocumentWithToggleFunktion omc_DumpHTML_emptyDocumentWithToggleFunktion

#ifdef __cplusplus
}
#endif
#endif
