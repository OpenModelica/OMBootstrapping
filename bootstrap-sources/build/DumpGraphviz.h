#ifndef DumpGraphviz__H
#define DumpGraphviz__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Graphviz_Attribute_ATTR__desc;

extern struct record_description Graphviz_Node_LNODE__desc;

extern struct record_description Graphviz_Node_NODE__desc;


#define boxptr_DumpGraphviz_directionSymbol omc_DumpGraphviz_directionSymbol


#define boxptr_DumpGraphviz_variabilitySymbol omc_DumpGraphviz_variabilitySymbol


#define boxptr_DumpGraphviz_printAlgorithm omc_DumpGraphviz_printAlgorithm


#define boxptr_DumpGraphviz_printAlgorithmitem omc_DumpGraphviz_printAlgorithmitem


#define boxptr_DumpGraphviz_printAlgorithms omc_DumpGraphviz_printAlgorithms


#define boxptr_DumpGraphviz_printEquation omc_DumpGraphviz_printEquation


#define boxptr_DumpGraphviz_printEquations omc_DumpGraphviz_printEquations


#define boxptr_DumpGraphviz_printComponentitem omc_DumpGraphviz_printComponentitem


#define boxptr_DumpGraphviz_printComponents omc_DumpGraphviz_printComponents


#define boxptr_DumpGraphviz_printElementspec omc_DumpGraphviz_printElementspec


#define boxptr_DumpGraphviz_printPath omc_DumpGraphviz_printPath


#define boxptr_DumpGraphviz_printElement omc_DumpGraphviz_printElement


#define boxptr_DumpGraphviz_makeLeaf omc_DumpGraphviz_makeLeaf


#define boxptr_DumpGraphviz_printElementitems omc_DumpGraphviz_printElementitems


#define boxptr_DumpGraphviz_printClassPart omc_DumpGraphviz_printClassPart


#define boxptr_DumpGraphviz_printParts omc_DumpGraphviz_printParts


#define boxptr_DumpGraphviz_printClass omc_DumpGraphviz_printClass


#define boxptr_DumpGraphviz_printClasses omc_DumpGraphviz_printClasses


#define boxptr_DumpGraphviz_buildGraphviz omc_DumpGraphviz_buildGraphviz


DLLDirection
void omc_DumpGraphviz_dump(threadData_t *threadData, modelica_metatype _p);
#define boxptr_DumpGraphviz_dump omc_DumpGraphviz_dump
static const MMC_DEFSTRUCTLIT(boxvar_lit_DumpGraphviz_dump,2,0) {(void*) boxptr_DumpGraphviz_dump,0}};
#define boxvar_DumpGraphviz_dump MMC_REFSTRUCTLIT(boxvar_lit_DumpGraphviz_dump)

#ifdef __cplusplus
}
#endif
#endif
