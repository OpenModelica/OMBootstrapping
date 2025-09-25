#ifndef SimulationResults__H
#define SimulationResults__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_boolean omc_SimulationResults_filterSimulationResults(threadData_t *threadData, modelica_string _inFile, modelica_string _outFile, modelica_metatype _vars, modelica_integer _numberOfIntervals, modelica_boolean _removeDescription, modelica_boolean _hintReadAllVars);
DLLDirection
modelica_metatype boxptr_SimulationResults_filterSimulationResults(threadData_t *threadData, modelica_metatype _inFile, modelica_metatype _outFile, modelica_metatype _vars, modelica_metatype _numberOfIntervals, modelica_metatype _removeDescription, modelica_metatype _hintReadAllVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_filterSimulationResults,2,0) {(void*) boxptr_SimulationResults_filterSimulationResults,0}};
#define boxvar_SimulationResults_filterSimulationResults MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_filterSimulationResults)

extern int SimulationResults_filterSimulationResults(const char* /*_inFile*/, const char* /*_outFile*/, modelica_metatype /*_vars*/, int /*_numberOfIntervals*/, int /*_removeDescription*/, int /*_hintReadAllVars*/);

DLLDirection
modelica_string omc_SimulationResults_diffSimulationResultsHtml(threadData_t *threadData, modelica_boolean _runningTestsuite, modelica_string _filename, modelica_string _reffilename, modelica_real _refTol, modelica_real _relTolDiffMaxMin, modelica_real _rangeDelta, modelica_string _var);
DLLDirection
modelica_metatype boxptr_SimulationResults_diffSimulationResultsHtml(threadData_t *threadData, modelica_metatype _runningTestsuite, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _refTol, modelica_metatype _relTolDiffMaxMin, modelica_metatype _rangeDelta, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_diffSimulationResultsHtml,2,0) {(void*) boxptr_SimulationResults_diffSimulationResultsHtml,0}};
#define boxvar_SimulationResults_diffSimulationResultsHtml MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_diffSimulationResultsHtml)

extern const char* SimulationResults_diffSimulationResultsHtml(int /*_runningTestsuite*/, const char* /*_var*/, const char* /*_filename*/, const char* /*_reffilename*/, double /*_refTol*/, double /*_relTolDiffMaxMin*/, double /*_rangeDelta*/);

DLLDirection
modelica_boolean omc_SimulationResults_diffSimulationResults(threadData_t *threadData, modelica_boolean _runningTestsuite, modelica_string _filename, modelica_string _reffilename, modelica_string _prefix, modelica_real _refTol, modelica_real _relTolDiffMaxMin, modelica_real _rangeDelta, modelica_metatype _vars, modelica_boolean _keepEqualResults, modelica_metatype *out_res);
DLLDirection
modelica_metatype boxptr_SimulationResults_diffSimulationResults(threadData_t *threadData, modelica_metatype _runningTestsuite, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _prefix, modelica_metatype _refTol, modelica_metatype _relTolDiffMaxMin, modelica_metatype _rangeDelta, modelica_metatype _vars, modelica_metatype _keepEqualResults, modelica_metatype *out_res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_diffSimulationResults,2,0) {(void*) boxptr_SimulationResults_diffSimulationResults,0}};
#define boxvar_SimulationResults_diffSimulationResults MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_diffSimulationResults)

extern modelica_metatype SimulationResults_diffSimulationResults(int /*_runningTestsuite*/, const char* /*_filename*/, const char* /*_reffilename*/, const char* /*_prefix*/, double /*_refTol*/, double /*_relTolDiffMaxMin*/, double /*_rangeDelta*/, modelica_metatype /*_vars*/, int /*_keepEqualResults*/, int* /*_success*/);

DLLDirection
modelica_real omc_SimulationResults_deltaSimulationResults(threadData_t *threadData, modelica_string _filename, modelica_string _reffilename, modelica_string _method, modelica_metatype _vars);
DLLDirection
modelica_metatype boxptr_SimulationResults_deltaSimulationResults(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _method, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_deltaSimulationResults,2,0) {(void*) boxptr_SimulationResults_deltaSimulationResults,0}};
#define boxvar_SimulationResults_deltaSimulationResults MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_deltaSimulationResults)

extern double SimulationResults_deltaSimulationResults(const char* /*_filename*/, const char* /*_reffilename*/, const char* /*_method*/, modelica_metatype /*_vars*/);

DLLDirection
modelica_metatype omc_SimulationResults_cmpSimulationResults(threadData_t *threadData, modelica_boolean _runningTestsuite, modelica_string _filename, modelica_string _reffilename, modelica_string _logfilename, modelica_real _refTol, modelica_real _absTol, modelica_metatype _vars);
DLLDirection
modelica_metatype boxptr_SimulationResults_cmpSimulationResults(threadData_t *threadData, modelica_metatype _runningTestsuite, modelica_metatype _filename, modelica_metatype _reffilename, modelica_metatype _logfilename, modelica_metatype _refTol, modelica_metatype _absTol, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_cmpSimulationResults,2,0) {(void*) boxptr_SimulationResults_cmpSimulationResults,0}};
#define boxvar_SimulationResults_cmpSimulationResults MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_cmpSimulationResults)

extern modelica_metatype SimulationResults_cmpSimulationResults(int /*_runningTestsuite*/, const char* /*_filename*/, const char* /*_reffilename*/, const char* /*_logfilename*/, double /*_refTol*/, double /*_absTol*/, modelica_metatype /*_vars*/);

DLLDirection
void omc_SimulationResults_close(threadData_t *threadData);
#define boxptr_SimulationResults_close omc_SimulationResults_close
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_close,2,0) {(void*) boxptr_SimulationResults_close,0}};
#define boxvar_SimulationResults_close MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_close)

extern void SimulationResults_close();

DLLDirection
modelica_integer omc_SimulationResults_readSimulationResultSize(threadData_t *threadData, modelica_string _filename);
DLLDirection
modelica_metatype boxptr_SimulationResults_readSimulationResultSize(threadData_t *threadData, modelica_metatype _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_readSimulationResultSize,2,0) {(void*) boxptr_SimulationResults_readSimulationResultSize,0}};
#define boxvar_SimulationResults_readSimulationResultSize MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_readSimulationResultSize)

extern int SimulationResults_readSimulationResultSize(const char* /*_filename*/);


extern modelica_metatype SimulationResults_readDataset(const char* /*_filename*/, modelica_metatype /*_vars*/, int /*_dimsize*/);

DLLDirection
modelica_metatype omc_SimulationResults_readDataset(threadData_t *threadData, modelica_string _filename, modelica_metatype _vars, modelica_integer _dimsize);
DLLDirection
modelica_metatype boxptr_SimulationResults_readDataset(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _vars, modelica_metatype _dimsize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_readDataset,2,0) {(void*) boxptr_SimulationResults_readDataset,0}};
#define boxvar_SimulationResults_readDataset MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_readDataset)


DLLDirection
modelica_metatype omc_SimulationResults_readVariables(threadData_t *threadData, modelica_string _filename, modelica_boolean _readParameters, modelica_boolean _openmodelicaStyle);
DLLDirection
modelica_metatype boxptr_SimulationResults_readVariables(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _readParameters, modelica_metatype _openmodelicaStyle);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_readVariables,2,0) {(void*) boxptr_SimulationResults_readVariables,0}};
#define boxvar_SimulationResults_readVariables MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_readVariables)

extern modelica_metatype SimulationResults_readVariables(const char* /*_filename*/, int /*_readParameters*/, int /*_openmodelicaStyle*/);

DLLDirection
modelica_real omc_SimulationResults_val(threadData_t *threadData, modelica_string _filename, modelica_string _varname, modelica_real _timeStamp);
DLLDirection
modelica_metatype boxptr_SimulationResults_val(threadData_t *threadData, modelica_metatype _filename, modelica_metatype _varname, modelica_metatype _timeStamp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimulationResults_val,2,0) {(void*) boxptr_SimulationResults_val,0}};
#define boxvar_SimulationResults_val MMC_REFSTRUCTLIT(boxvar_lit_SimulationResults_val)

extern double SimulationResults_val(const char* /*_filename*/, const char* /*_varname*/, double /*_timeStamp*/);

#ifdef __cplusplus
}
#endif
#endif
