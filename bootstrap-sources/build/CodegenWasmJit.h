#ifndef CodegenWasmJit__H
#define CodegenWasmJit__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_CodegenWasmJit_fmuCsSolvers(threadData_t *threadData);
#define boxptr_CodegenWasmJit_fmuCsSolvers omc_CodegenWasmJit_fmuCsSolvers
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_fmuCsSolvers,2,0) {(void*) boxptr_CodegenWasmJit_fmuCsSolvers,0}};
#define boxvar_CodegenWasmJit_fmuCsSolvers MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_fmuCsSolvers)


DLLDirection
modelica_integer omc_CodegenWasmJit_runSimulationWasmtime(threadData_t *threadData, modelica_string _fileNamePrefix, modelica_string _resultFile, modelica_string _simflags);
DLLDirection
modelica_metatype boxptr_CodegenWasmJit_runSimulationWasmtime(threadData_t *threadData, modelica_metatype _fileNamePrefix, modelica_metatype _resultFile, modelica_metatype _simflags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_runSimulationWasmtime,2,0) {(void*) boxptr_CodegenWasmJit_runSimulationWasmtime,0}};
#define boxvar_CodegenWasmJit_runSimulationWasmtime MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_runSimulationWasmtime)


DLLDirection
void omc_CodegenWasmJit_emitMeCsFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuPath, modelica_string _guid, modelica_string _modelDescription, modelica_metatype _extraFiles, modelica_string _terminalsDir, modelica_string _simulationFlagsJson);
#define boxptr_CodegenWasmJit_emitMeCsFmu omc_CodegenWasmJit_emitMeCsFmu
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitMeCsFmu,2,0) {(void*) boxptr_CodegenWasmJit_emitMeCsFmu,0}};
#define boxvar_CodegenWasmJit_emitMeCsFmu MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitMeCsFmu)


DLLDirection
void omc_CodegenWasmJit_emitCsFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuPath, modelica_string _guid, modelica_string _modelDescription, modelica_metatype _extraFiles, modelica_string _terminalsDir, modelica_string _simulationFlagsJson);
#define boxptr_CodegenWasmJit_emitCsFmu omc_CodegenWasmJit_emitCsFmu
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitCsFmu,2,0) {(void*) boxptr_CodegenWasmJit_emitCsFmu,0}};
#define boxvar_CodegenWasmJit_emitCsFmu MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitCsFmu)


DLLDirection
void omc_CodegenWasmJit_emitMeFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuPath, modelica_string _guid, modelica_string _modelDescription, modelica_metatype _extraFiles, modelica_string _terminalsDir, modelica_string _simulationFlagsJson);
#define boxptr_CodegenWasmJit_emitMeFmu omc_CodegenWasmJit_emitMeFmu
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitMeFmu,2,0) {(void*) boxptr_CodegenWasmJit_emitMeFmu,0}};
#define boxvar_CodegenWasmJit_emitMeFmu MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitMeFmu)


DLLDirection
void omc_CodegenWasmJit_translateFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuType, modelica_string _simulationFlagsJson);
#define boxptr_CodegenWasmJit_translateFmu omc_CodegenWasmJit_translateFmu
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_translateFmu,2,0) {(void*) boxptr_CodegenWasmJit_translateFmu,0}};
#define boxvar_CodegenWasmJit_translateFmu MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_translateFmu)


DLLDirection
void omc_CodegenWasmJit_emitStandalone(threadData_t *threadData, modelica_metatype _simCode);
#define boxptr_CodegenWasmJit_emitStandalone omc_CodegenWasmJit_emitStandalone
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitStandalone,2,0) {(void*) boxptr_CodegenWasmJit_emitStandalone,0}};
#define boxvar_CodegenWasmJit_emitStandalone MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_emitStandalone)


DLLDirection
void omc_CodegenWasmJit_finishCompile(threadData_t *threadData, modelica_string _fileNamePrefix);
#define boxptr_CodegenWasmJit_finishCompile omc_CodegenWasmJit_finishCompile
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_finishCompile,2,0) {(void*) boxptr_CodegenWasmJit_finishCompile,0}};
#define boxvar_CodegenWasmJit_finishCompile MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_finishCompile)


DLLDirection
modelica_integer omc_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_string _fileNamePrefix, modelica_string _resultFile, modelica_string _simflags);
DLLDirection
modelica_metatype boxptr_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_metatype _fileNamePrefix, modelica_metatype _resultFile, modelica_metatype _simflags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_runSimulation,2,0) {(void*) boxptr_CodegenWasmJit_runSimulation,0}};
#define boxvar_CodegenWasmJit_runSimulation MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_runSimulation)


DLLDirection
void omc_CodegenWasmJit_translateModel(threadData_t *threadData, modelica_metatype _simCode);
#define boxptr_CodegenWasmJit_translateModel omc_CodegenWasmJit_translateModel
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_translateModel,2,0) {(void*) boxptr_CodegenWasmJit_translateModel,0}};
#define boxvar_CodegenWasmJit_translateModel MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_translateModel)

#ifdef __cplusplus
}
#endif
#endif
