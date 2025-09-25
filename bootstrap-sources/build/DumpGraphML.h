#ifndef DumpGraphML__H
#define DumpGraphML__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendDAE_IndexType_NORMAL__desc;

extern struct record_description GraphML_ArrowType_ARROWNONE__desc;

extern struct record_description GraphML_ArrowType_ARROWSTANDART__desc;

extern struct record_description GraphML_EdgeLabel_EDGELABEL__desc;

extern struct record_description GraphML_FontStyle_FONTPLAIN__desc;

extern struct record_description GraphML_LineType_DASHED__desc;

extern struct record_description GraphML_LineType_LINE__desc;

extern struct record_description GraphML_NodeLabel_NODELABEL__INTERNAL__desc;

extern struct record_description GraphML_ShapeType_ELLIPSE__desc;

extern struct record_description GraphML_ShapeType_RECTANGLE__desc;


#define boxptr_DumpGraphML_addVarGraphMatch omc_DumpGraphML_addVarGraphMatch


#define boxptr_DumpGraphML_addVarGraph omc_DumpGraphML_addVarGraph


DLLDirection
void omc_DumpGraphML_dumpSystem(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inids, modelica_string _filename, modelica_boolean _numberMode);
DLLDirection
void boxptr_DumpGraphML_dumpSystem(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inids, modelica_metatype _filename, modelica_metatype _numberMode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphML_dumpSystem,2,0) {(void*) boxptr_DumpGraphML_dumpSystem,0}};
#define boxvar_DumpGraphML_dumpSystem MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphML_dumpSystem)

#ifdef __cplusplus
}
#endif
#endif
