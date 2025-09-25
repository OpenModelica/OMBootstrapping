#ifndef NFCardinalityTable__H
#define NFCardinalityTable__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFExpression_INTEGER__desc;


DLLDirection
void omc_NFCardinalityTable_print(threadData_t *threadData, modelica_metatype _table);
#define boxptr_NFCardinalityTable_print omc_NFCardinalityTable_print
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCardinalityTable_print,2,0) {(void*) boxptr_NFCardinalityTable_print,0}};
#define boxvar_NFCardinalityTable_print MMC_REFSTRUCTLIT(boxvar_lit_NFCardinalityTable_print)


DLLDirection
modelica_metatype omc_NFCardinalityTable_evaluateCardinality(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _table);
#define boxptr_NFCardinalityTable_evaluateCardinality omc_NFCardinalityTable_evaluateCardinality
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCardinalityTable_evaluateCardinality,2,0) {(void*) boxptr_NFCardinalityTable_evaluateCardinality,0}};
#define boxvar_NFCardinalityTable_evaluateCardinality MMC_REFSTRUCTLIT(boxvar_lit_NFCardinalityTable_evaluateCardinality)


DLLDirection
void omc_NFCardinalityTable_addConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _table);
#define boxptr_NFCardinalityTable_addConnector omc_NFCardinalityTable_addConnector
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCardinalityTable_addConnector,2,0) {(void*) boxptr_NFCardinalityTable_addConnector,0}};
#define boxvar_NFCardinalityTable_addConnector MMC_REFSTRUCTLIT(boxvar_lit_NFCardinalityTable_addConnector)


DLLDirection
modelica_metatype omc_NFCardinalityTable_fromConnections(threadData_t *threadData, modelica_metatype _conns);
#define boxptr_NFCardinalityTable_fromConnections omc_NFCardinalityTable_fromConnections
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCardinalityTable_fromConnections,2,0) {(void*) boxptr_NFCardinalityTable_fromConnections,0}};
#define boxvar_NFCardinalityTable_fromConnections MMC_REFSTRUCTLIT(boxvar_lit_NFCardinalityTable_fromConnections)


DLLDirection
modelica_metatype omc_NFCardinalityTable_emptyCardinalityTable(threadData_t *threadData, modelica_integer _size);
DLLDirection
modelica_metatype boxptr_NFCardinalityTable_emptyCardinalityTable(threadData_t *threadData, modelica_metatype _size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCardinalityTable_emptyCardinalityTable,2,0) {(void*) boxptr_NFCardinalityTable_emptyCardinalityTable,0}};
#define boxvar_NFCardinalityTable_emptyCardinalityTable MMC_REFSTRUCTLIT(boxvar_lit_NFCardinalityTable_emptyCardinalityTable)

#ifdef __cplusplus
}
#endif
#endif
