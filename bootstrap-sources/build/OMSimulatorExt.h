#ifndef OMSimulatorExt__H
#define OMSimulatorExt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_integer omc_OMSimulatorExt_oms__terminate(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__terminate(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__terminate,2,0) {(void*) boxptr_OMSimulatorExt_oms__terminate,0}};
#define boxvar_OMSimulatorExt_oms__terminate MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__terminate)

extern int OMSimulator_oms_terminate(const char* /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__stepUntil(threadData_t *threadData, modelica_string _cref, modelica_real _stopTime);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__stepUntil(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _stopTime);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__stepUntil,2,0) {(void*) boxptr_OMSimulatorExt_oms__stepUntil,0}};
#define boxvar_OMSimulatorExt_oms__stepUntil MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__stepUntil)

extern int OMSimulator_oms_stepUntil(const char* /*_cref*/, double /*_stopTime*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__simulate(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__simulate(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__simulate,2,0) {(void*) boxptr_OMSimulatorExt_oms__simulate,0}};
#define boxvar_OMSimulatorExt_oms__simulate MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__simulate)

extern int OMSimulator_oms_simulate(const char* /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setWorkingDirectory(threadData_t *threadData, modelica_string _newWorkingDir);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setWorkingDirectory(threadData_t *threadData, modelica_metatype _newWorkingDir);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setWorkingDirectory,2,0) {(void*) boxptr_OMSimulatorExt_oms__setWorkingDirectory,0}};
#define boxvar_OMSimulatorExt_oms__setWorkingDirectory MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setWorkingDirectory)

extern int OMSimulator_oms_setWorkingDirectory(const char* /*_newWorkingDir*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setVariableStepSize(threadData_t *threadData, modelica_string _cref, modelica_real _initialStepSize, modelica_real _minimumStepSize, modelica_real _maximumStepSize);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setVariableStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _initialStepSize, modelica_metatype _minimumStepSize, modelica_metatype _maximumStepSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setVariableStepSize,2,0) {(void*) boxptr_OMSimulatorExt_oms__setVariableStepSize,0}};
#define boxvar_OMSimulatorExt_oms__setVariableStepSize MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setVariableStepSize)

extern int OMSimulator_oms_setVariableStepSize(const char* /*_cref*/, double /*_initialStepSize*/, double /*_minimumStepSize*/, double /*_maximumStepSize*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setTolerance(threadData_t *threadData, modelica_string _cref, modelica_real _absoluteTolerance, modelica_real _relativeTolerance);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setTolerance(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _absoluteTolerance, modelica_metatype _relativeTolerance);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTolerance,2,0) {(void*) boxptr_OMSimulatorExt_oms__setTolerance,0}};
#define boxvar_OMSimulatorExt_oms__setTolerance MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTolerance)

extern int OMSimulator_oms_setTolerance(const char* /*_cref*/, double /*_absoluteTolerance*/, double /*_relativeTolerance*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setTLMSocketData(threadData_t *threadData, modelica_string _cref, modelica_string _address, modelica_integer _managerPort, modelica_integer _monitorPort);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setTLMSocketData(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _address, modelica_metatype _managerPort, modelica_metatype _monitorPort);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTLMSocketData,2,0) {(void*) boxptr_OMSimulatorExt_oms__setTLMSocketData,0}};
#define boxvar_OMSimulatorExt_oms__setTLMSocketData MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTLMSocketData)

extern int OMSimulator_oms_setTLMSocketData(const char* /*_cref*/, const char* /*_address*/, int /*_managerPort*/, int /*_monitorPort*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setTLMPositionAndOrientation(threadData_t *threadData, modelica_string _cref, modelica_real _x1, modelica_real _x2, modelica_real _x3, modelica_real _A11, modelica_real _A12, modelica_real _A13, modelica_real _A21, modelica_real _A22, modelica_real _A23, modelica_real _A31, modelica_real _A32, modelica_real _A33);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setTLMPositionAndOrientation(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _x3, modelica_metatype _A11, modelica_metatype _A12, modelica_metatype _A13, modelica_metatype _A21, modelica_metatype _A22, modelica_metatype _A23, modelica_metatype _A31, modelica_metatype _A32, modelica_metatype _A33);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTLMPositionAndOrientation,2,0) {(void*) boxptr_OMSimulatorExt_oms__setTLMPositionAndOrientation,0}};
#define boxvar_OMSimulatorExt_oms__setTLMPositionAndOrientation MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTLMPositionAndOrientation)

extern int OMSimulator_oms_setTLMPositionAndOrientation(const char* /*_cref*/, double /*_x1*/, double /*_x2*/, double /*_x3*/, double /*_A11*/, double /*_A12*/, double /*_A13*/, double /*_A21*/, double /*_A22*/, double /*_A23*/, double /*_A31*/, double /*_A32*/, double /*_A33*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setTempDirectory(threadData_t *threadData, modelica_string _newTempDir);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setTempDirectory(threadData_t *threadData, modelica_metatype _newTempDir);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTempDirectory,2,0) {(void*) boxptr_OMSimulatorExt_oms__setTempDirectory,0}};
#define boxvar_OMSimulatorExt_oms__setTempDirectory MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setTempDirectory)

extern int OMSimulator_oms_setTempDirectory(const char* /*_newTempDir*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setStopTime(threadData_t *threadData, modelica_string _cref, modelica_real _stopTime);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setStopTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _stopTime);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setStopTime,2,0) {(void*) boxptr_OMSimulatorExt_oms__setStopTime,0}};
#define boxvar_OMSimulatorExt_oms__setStopTime MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setStopTime)

extern int OMSimulator_oms_setStopTime(const char* /*_cref*/, double /*_stopTime*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setStartTime(threadData_t *threadData, modelica_string _cref, modelica_real _startTime);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setStartTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _startTime);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setStartTime,2,0) {(void*) boxptr_OMSimulatorExt_oms__setStartTime,0}};
#define boxvar_OMSimulatorExt_oms__setStartTime MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setStartTime)

extern int OMSimulator_oms_setStartTime(const char* /*_cref*/, double /*_startTime*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setSolver(threadData_t *threadData, modelica_string _cref, modelica_integer _solver);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setSolver(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _solver);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setSolver,2,0) {(void*) boxptr_OMSimulatorExt_oms__setSolver,0}};
#define boxvar_OMSimulatorExt_oms__setSolver MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setSolver)

extern int OMSimulator_oms_setSolver(const char* /*_cref*/, int /*_solver*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setSignalFilter(threadData_t *threadData, modelica_string _cref, modelica_string _regex);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setSignalFilter(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _regex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setSignalFilter,2,0) {(void*) boxptr_OMSimulatorExt_oms__setSignalFilter,0}};
#define boxvar_OMSimulatorExt_oms__setSignalFilter MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setSignalFilter)

extern int OMSimulator_oms_setSignalFilter(const char* /*_cref*/, const char* /*_regex*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setResultFile(threadData_t *threadData, modelica_string _cref, modelica_string _filename, modelica_integer _bufferSize);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setResultFile(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _filename, modelica_metatype _bufferSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setResultFile,2,0) {(void*) boxptr_OMSimulatorExt_oms__setResultFile,0}};
#define boxvar_OMSimulatorExt_oms__setResultFile MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setResultFile)

extern int OMSimulator_oms_setResultFile(const char* /*_cref*/, const char* /*_filename*/, int /*_bufferSize*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setRealInputDerivative(threadData_t *threadData, modelica_string _cref, modelica_real _value);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setRealInputDerivative(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setRealInputDerivative,2,0) {(void*) boxptr_OMSimulatorExt_oms__setRealInputDerivative,0}};
#define boxvar_OMSimulatorExt_oms__setRealInputDerivative MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setRealInputDerivative)

extern int OMSimulator_oms_setRealInputDerivative(const char* /*_cref*/, double /*_value*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setReal(threadData_t *threadData, modelica_string _cref, modelica_real _value);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setReal(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setReal,2,0) {(void*) boxptr_OMSimulatorExt_oms__setReal,0}};
#define boxvar_OMSimulatorExt_oms__setReal MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setReal)

extern int OMSimulator_oms_setReal(const char* /*_cref*/, double /*_value*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setLoggingLevel(threadData_t *threadData, modelica_integer _logLevel);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setLoggingLevel(threadData_t *threadData, modelica_metatype _logLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setLoggingLevel,2,0) {(void*) boxptr_OMSimulatorExt_oms__setLoggingLevel,0}};
#define boxvar_OMSimulatorExt_oms__setLoggingLevel MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setLoggingLevel)

extern int OMSimulator_oms_setLoggingLevel(int /*_logLevel*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setLoggingInterval(threadData_t *threadData, modelica_string _cref, modelica_real _loggingInterval);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setLoggingInterval(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _loggingInterval);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setLoggingInterval,2,0) {(void*) boxptr_OMSimulatorExt_oms__setLoggingInterval,0}};
#define boxvar_OMSimulatorExt_oms__setLoggingInterval MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setLoggingInterval)

extern int OMSimulator_oms_setLoggingInterval(const char* /*_cref*/, double /*_loggingInterval*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setLogFile(threadData_t *threadData, modelica_string _filename);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setLogFile(threadData_t *threadData, modelica_metatype _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setLogFile,2,0) {(void*) boxptr_OMSimulatorExt_oms__setLogFile,0}};
#define boxvar_OMSimulatorExt_oms__setLogFile MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setLogFile)

extern int OMSimulator_oms_setLogFile(const char* /*_filename*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setInteger(threadData_t *threadData, modelica_string _cref, modelica_integer _value);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setInteger(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setInteger,2,0) {(void*) boxptr_OMSimulatorExt_oms__setInteger,0}};
#define boxvar_OMSimulatorExt_oms__setInteger MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setInteger)

extern int OMSimulator_oms_setInteger(const char* /*_cref*/, int /*_value*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setFixedStepSize(threadData_t *threadData, modelica_string _cref, modelica_real _stepSize);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setFixedStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _stepSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setFixedStepSize,2,0) {(void*) boxptr_OMSimulatorExt_oms__setFixedStepSize,0}};
#define boxvar_OMSimulatorExt_oms__setFixedStepSize MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setFixedStepSize)

extern int OMSimulator_oms_setFixedStepSize(const char* /*_cref*/, double /*_stepSize*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setCommandLineOption(threadData_t *threadData, modelica_string _cmd);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setCommandLineOption(threadData_t *threadData, modelica_metatype _cmd);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setCommandLineOption,2,0) {(void*) boxptr_OMSimulatorExt_oms__setCommandLineOption,0}};
#define boxvar_OMSimulatorExt_oms__setCommandLineOption MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setCommandLineOption)

extern int OMSimulator_oms_setCommandLineOption(const char* /*_cmd*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__setBoolean(threadData_t *threadData, modelica_string _cref, modelica_boolean _value);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__setBoolean(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setBoolean,2,0) {(void*) boxptr_OMSimulatorExt_oms__setBoolean,0}};
#define boxvar_OMSimulatorExt_oms__setBoolean MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__setBoolean)

extern int OMSimulator_oms_setBoolean(const char* /*_cref*/, int /*_value*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__RunFile(threadData_t *threadData, modelica_string _filename);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__RunFile(threadData_t *threadData, modelica_metatype _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__RunFile,2,0) {(void*) boxptr_OMSimulatorExt_oms__RunFile,0}};
#define boxvar_OMSimulatorExt_oms__RunFile MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__RunFile)

extern int OMSimulator_oms_RunFile(const char* /*_filename*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__reset(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__reset(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__reset,2,0) {(void*) boxptr_OMSimulatorExt_oms__reset,0}};
#define boxvar_OMSimulatorExt_oms__reset MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__reset)

extern int OMSimulator_oms_reset(const char* /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__rename(threadData_t *threadData, modelica_string _cref, modelica_string _newCref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__rename(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _newCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__rename,2,0) {(void*) boxptr_OMSimulatorExt_oms__rename,0}};
#define boxvar_OMSimulatorExt_oms__rename MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__rename)

extern int OMSimulator_oms_rename(const char* /*_cref*/, const char* /*_newCref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__removeSignalsFromResults(threadData_t *threadData, modelica_string _cref, modelica_string _regex);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__removeSignalsFromResults(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _regex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__removeSignalsFromResults,2,0) {(void*) boxptr_OMSimulatorExt_oms__removeSignalsFromResults,0}};
#define boxvar_OMSimulatorExt_oms__removeSignalsFromResults MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__removeSignalsFromResults)

extern int OMSimulator_oms_removeSignalsFromResults(const char* /*_cref*/, const char* /*_regex*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__newModel(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__newModel(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__newModel,2,0) {(void*) boxptr_OMSimulatorExt_oms__newModel,0}};
#define boxvar_OMSimulatorExt_oms__newModel MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__newModel)

extern int OMSimulator_oms_newModel(const char* /*_cref*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__loadSnapshot(threadData_t *threadData, modelica_string _cref, modelica_string _snapshot, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__loadSnapshot(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _snapshot, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__loadSnapshot,2,0) {(void*) boxptr_OMSimulatorExt_oms__loadSnapshot,0}};
#define boxvar_OMSimulatorExt_oms__loadSnapshot MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__loadSnapshot)

extern int OMSimulator_oms_loadSnapshot(const char* /*_cref*/, const char* /*_snapshot*/, const char** /*_newCref*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__listUnconnectedConnectors(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__listUnconnectedConnectors(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__listUnconnectedConnectors,2,0) {(void*) boxptr_OMSimulatorExt_oms__listUnconnectedConnectors,0}};
#define boxvar_OMSimulatorExt_oms__listUnconnectedConnectors MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__listUnconnectedConnectors)

extern int OMSimulator_oms_listUnconnectedConnectors(const char* /*_cref*/, const char** /*_contents*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__list(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__list(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__list,2,0) {(void*) boxptr_OMSimulatorExt_oms__list,0}};
#define boxvar_OMSimulatorExt_oms__list MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__list)

extern int OMSimulator_oms_list(const char* /*_cref*/, const char** /*_contents*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__instantiate(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__instantiate(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__instantiate,2,0) {(void*) boxptr_OMSimulatorExt_oms__instantiate,0}};
#define boxvar_OMSimulatorExt_oms__instantiate MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__instantiate)

extern int OMSimulator_oms_instantiate(const char* /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__initialize(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__initialize(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__initialize,2,0) {(void*) boxptr_OMSimulatorExt_oms__initialize,0}};
#define boxvar_OMSimulatorExt_oms__initialize MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__initialize)

extern int OMSimulator_oms_initialize(const char* /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__importSnapshot(threadData_t *threadData, modelica_string _cref, modelica_string _snapshot);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__importSnapshot(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _snapshot);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__importSnapshot,2,0) {(void*) boxptr_OMSimulatorExt_oms__importSnapshot,0}};
#define boxvar_OMSimulatorExt_oms__importSnapshot MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__importSnapshot)

extern int OMSimulator_oms_importSnapshot(const char* /*_cref*/, const char* /*_snapshot*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__importFile(threadData_t *threadData, modelica_string _filename, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__importFile(threadData_t *threadData, modelica_metatype _filename, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__importFile,2,0) {(void*) boxptr_OMSimulatorExt_oms__importFile,0}};
#define boxvar_OMSimulatorExt_oms__importFile MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__importFile)

extern int OMSimulator_oms_importFile(const char* /*_filename*/, const char** /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__faultInjection(threadData_t *threadData, modelica_string _signal, modelica_integer _faultType, modelica_real _faultValue);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__faultInjection(threadData_t *threadData, modelica_metatype _signal, modelica_metatype _faultType, modelica_metatype _faultValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__faultInjection,2,0) {(void*) boxptr_OMSimulatorExt_oms__faultInjection,0}};
#define boxvar_OMSimulatorExt_oms__faultInjection MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__faultInjection)

extern int OMSimulator_oms_faultInjection(const char* /*_signal*/, int /*_faultType*/, double /*_faultValue*/);

DLLDirection
modelica_real omc_OMSimulatorExt_oms__getVariableStepSize(threadData_t *threadData, modelica_string _cref, modelica_real *out_minimumStepSize, modelica_real *out_maximumStepSize, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getVariableStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_minimumStepSize, modelica_metatype *out_maximumStepSize, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getVariableStepSize,2,0) {(void*) boxptr_OMSimulatorExt_oms__getVariableStepSize,0}};
#define boxvar_OMSimulatorExt_oms__getVariableStepSize MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getVariableStepSize)

extern int OMSimulator_oms_getVariableStepSize(const char* /*_cref*/, double* /*_initialStepSize*/, double* /*_minimumStepSize*/, double* /*_maximumStepSize*/);

DLLDirection
modelica_real omc_OMSimulatorExt_oms__getTolerance(threadData_t *threadData, modelica_string _cref, modelica_real *out_relativeTolerance, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getTolerance(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_relativeTolerance, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getTolerance,2,0) {(void*) boxptr_OMSimulatorExt_oms__getTolerance,0}};
#define boxvar_OMSimulatorExt_oms__getTolerance MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getTolerance)

extern int OMSimulator_oms_getTolerance(const char* /*_cref*/, double* /*_absoluteTolerance*/, double* /*_relativeTolerance*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__getSystemType(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getSystemType(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getSystemType,2,0) {(void*) boxptr_OMSimulatorExt_oms__getSystemType,0}};
#define boxvar_OMSimulatorExt_oms__getSystemType MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getSystemType)

extern int OMSimulator_oms_getSystemType(const char* /*_cref*/, int* /*_type_*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__getSubModelPath(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getSubModelPath(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getSubModelPath,2,0) {(void*) boxptr_OMSimulatorExt_oms__getSubModelPath,0}};
#define boxvar_OMSimulatorExt_oms__getSubModelPath MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getSubModelPath)

extern int OMSimulator_oms_getSubModelPath(const char* /*_cref*/, const char** /*_path*/);

DLLDirection
modelica_real omc_OMSimulatorExt_oms__getStopTime(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getStopTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getStopTime,2,0) {(void*) boxptr_OMSimulatorExt_oms__getStopTime,0}};
#define boxvar_OMSimulatorExt_oms__getStopTime MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getStopTime)

extern int OMSimulator_oms_getStopTime(const char* /*_cref*/, double* /*_stopTime*/);

DLLDirection
modelica_real omc_OMSimulatorExt_oms__getStartTime(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getStartTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getStartTime,2,0) {(void*) boxptr_OMSimulatorExt_oms__getStartTime,0}};
#define boxvar_OMSimulatorExt_oms__getStartTime MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getStartTime)

extern int OMSimulator_oms_getStartTime(const char* /*_cref*/, double* /*_startTime*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__getSolver(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getSolver(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getSolver,2,0) {(void*) boxptr_OMSimulatorExt_oms__getSolver,0}};
#define boxvar_OMSimulatorExt_oms__getSolver MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getSolver)

extern int OMSimulator_oms_getSolver(const char* /*_cref*/, int* /*_solver*/);

DLLDirection
modelica_real omc_OMSimulatorExt_oms__getReal(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getReal(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getReal,2,0) {(void*) boxptr_OMSimulatorExt_oms__getReal,0}};
#define boxvar_OMSimulatorExt_oms__getReal MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getReal)

extern int OMSimulator_oms_getReal(const char* /*_cref*/, double* /*_value*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__getModelState(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getModelState(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getModelState,2,0) {(void*) boxptr_OMSimulatorExt_oms__getModelState,0}};
#define boxvar_OMSimulatorExt_oms__getModelState MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getModelState)

extern int OMSimulator_oms_getModelState(const char* /*_cref*/, int* /*_modelState*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__getInteger(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getInteger(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getInteger,2,0) {(void*) boxptr_OMSimulatorExt_oms__getInteger,0}};
#define boxvar_OMSimulatorExt_oms__getInteger MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getInteger)

extern int OMSimulator_oms_getInteger(const char* /*_cref*/, int* /*_value*/);

DLLDirection
modelica_real omc_OMSimulatorExt_oms__getFixedStepSize(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getFixedStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getFixedStepSize,2,0) {(void*) boxptr_OMSimulatorExt_oms__getFixedStepSize,0}};
#define boxvar_OMSimulatorExt_oms__getFixedStepSize MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getFixedStepSize)

extern int OMSimulator_oms_getFixedStepSize(const char* /*_cref*/, double* /*_stepSize*/);

DLLDirection
modelica_boolean omc_OMSimulatorExt_oms__getBoolean(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__getBoolean(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getBoolean,2,0) {(void*) boxptr_OMSimulatorExt_oms__getBoolean,0}};
#define boxvar_OMSimulatorExt_oms__getBoolean MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getBoolean)

extern int OMSimulator_oms_getBoolean(const char* /*_cref*/, int* /*_value*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__extractFMIKind(threadData_t *threadData, modelica_string _filename, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__extractFMIKind(threadData_t *threadData, modelica_metatype _filename, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__extractFMIKind,2,0) {(void*) boxptr_OMSimulatorExt_oms__extractFMIKind,0}};
#define boxvar_OMSimulatorExt_oms__extractFMIKind MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__extractFMIKind)

extern int OMSimulator_oms_extractFMIKind(const char* /*_filename*/, int* /*_kind*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__exportSnapshot(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__exportSnapshot(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__exportSnapshot,2,0) {(void*) boxptr_OMSimulatorExt_oms__exportSnapshot,0}};
#define boxvar_OMSimulatorExt_oms__exportSnapshot MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__exportSnapshot)

extern int OMSimulator_oms_exportSnapshot(const char* /*_cref*/, const char** /*_contents*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__exportDependencyGraphs(threadData_t *threadData, modelica_string _cref, modelica_string _initialization, modelica_string _event, modelica_string _simulation);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__exportDependencyGraphs(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _initialization, modelica_metatype _event, modelica_metatype _simulation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__exportDependencyGraphs,2,0) {(void*) boxptr_OMSimulatorExt_oms__exportDependencyGraphs,0}};
#define boxvar_OMSimulatorExt_oms__exportDependencyGraphs MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__exportDependencyGraphs)

extern int OMSimulator_oms_exportDependencyGraphs(const char* /*_cref*/, const char* /*_initialization*/, const char* /*_event*/, const char* /*_simulation*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__export(threadData_t *threadData, modelica_string _cref, modelica_string _filename);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__export(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__export,2,0) {(void*) boxptr_OMSimulatorExt_oms__export,0}};
#define boxvar_OMSimulatorExt_oms__export MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__export)

extern int OMSimulator_oms_export(const char* /*_cref*/, const char* /*_filename*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__deleteConnectorFromTLMBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__deleteConnectorFromTLMBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__deleteConnectorFromTLMBus,2,0) {(void*) boxptr_OMSimulatorExt_oms__deleteConnectorFromTLMBus,0}};
#define boxvar_OMSimulatorExt_oms__deleteConnectorFromTLMBus MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__deleteConnectorFromTLMBus)

extern int OMSimulator_oms_deleteConnectorFromTLMBus(const char* /*_busCref*/, const char* /*_connectorCref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__deleteConnectorFromBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__deleteConnectorFromBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__deleteConnectorFromBus,2,0) {(void*) boxptr_OMSimulatorExt_oms__deleteConnectorFromBus,0}};
#define boxvar_OMSimulatorExt_oms__deleteConnectorFromBus MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__deleteConnectorFromBus)

extern int OMSimulator_oms_deleteConnectorFromBus(const char* /*_busCref*/, const char* /*_connectorCref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__deleteConnection(threadData_t *threadData, modelica_string _crefA, modelica_string _crefB);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__deleteConnection(threadData_t *threadData, modelica_metatype _crefA, modelica_metatype _crefB);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__deleteConnection,2,0) {(void*) boxptr_OMSimulatorExt_oms__deleteConnection,0}};
#define boxvar_OMSimulatorExt_oms__deleteConnection MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__deleteConnection)

extern int OMSimulator_oms_deleteConnection(const char* /*_crefA*/, const char* /*_crefB*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__delete(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__delete(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__delete,2,0) {(void*) boxptr_OMSimulatorExt_oms__delete,0}};
#define boxvar_OMSimulatorExt_oms__delete MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__delete)

extern int OMSimulator_oms_delete(const char* /*_cref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__copySystem(threadData_t *threadData, modelica_string _source, modelica_string _target);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__copySystem(threadData_t *threadData, modelica_metatype _source, modelica_metatype _target);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__copySystem,2,0) {(void*) boxptr_OMSimulatorExt_oms__copySystem,0}};
#define boxvar_OMSimulatorExt_oms__copySystem MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__copySystem)

extern int OMSimulator_oms_copySystem(const char* /*_source*/, const char* /*_target*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__compareSimulationResults(threadData_t *threadData, modelica_string _filenameA, modelica_string _filenameB, modelica_string _var, modelica_real _relTol, modelica_real _absTol);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__compareSimulationResults(threadData_t *threadData, modelica_metatype _filenameA, modelica_metatype _filenameB, modelica_metatype _var, modelica_metatype _relTol, modelica_metatype _absTol);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__compareSimulationResults,2,0) {(void*) boxptr_OMSimulatorExt_oms__compareSimulationResults,0}};
#define boxvar_OMSimulatorExt_oms__compareSimulationResults MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__compareSimulationResults)

extern int OMSimulator_oms_compareSimulationResults(const char* /*_filenameA*/, const char* /*_filenameB*/, const char* /*_var*/, double /*_relTol*/, double /*_absTol*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addTLMConnection(threadData_t *threadData, modelica_string _crefA, modelica_string _crefB, modelica_real _delay, modelica_real _alpha, modelica_real _linearimpedance, modelica_real _angularimpedance);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addTLMConnection(threadData_t *threadData, modelica_metatype _crefA, modelica_metatype _crefB, modelica_metatype _delay, modelica_metatype _alpha, modelica_metatype _linearimpedance, modelica_metatype _angularimpedance);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addTLMConnection,2,0) {(void*) boxptr_OMSimulatorExt_oms__addTLMConnection,0}};
#define boxvar_OMSimulatorExt_oms__addTLMConnection MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addTLMConnection)

extern int OMSimulator_oms_addTLMConnection(const char* /*_crefA*/, const char* /*_crefB*/, double /*_delay*/, double /*_alpha*/, double /*_linearimpedance*/, double /*_angularimpedance*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addTLMBus(threadData_t *threadData, modelica_string _cref, modelica_integer _domain, modelica_integer _dimensions, modelica_integer _interpolation);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addTLMBus(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _domain, modelica_metatype _dimensions, modelica_metatype _interpolation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addTLMBus,2,0) {(void*) boxptr_OMSimulatorExt_oms__addTLMBus,0}};
#define boxvar_OMSimulatorExt_oms__addTLMBus MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addTLMBus)

extern int OMSimulator_oms_addTLMBus(const char* /*_cref*/, int /*_domain*/, int /*_dimensions*/, int /*_interpolation*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addTimeIndicator(threadData_t *threadData, modelica_string _signal);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addTimeIndicator(threadData_t *threadData, modelica_metatype _signal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addTimeIndicator,2,0) {(void*) boxptr_OMSimulatorExt_oms__addTimeIndicator,0}};
#define boxvar_OMSimulatorExt_oms__addTimeIndicator MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addTimeIndicator)

extern int OMSimulator_oms_addTimeIndicator(const char* /*_signal*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addSystem(threadData_t *threadData, modelica_string _cref, modelica_integer _type_);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addSystem(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _type_);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addSystem,2,0) {(void*) boxptr_OMSimulatorExt_oms__addSystem,0}};
#define boxvar_OMSimulatorExt_oms__addSystem MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addSystem)

extern int OMSimulator_oms_addSystem(const char* /*_cref*/, int /*_type_*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addSubModel(threadData_t *threadData, modelica_string _cref, modelica_string _fmuPath);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addSubModel(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _fmuPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addSubModel,2,0) {(void*) boxptr_OMSimulatorExt_oms__addSubModel,0}};
#define boxvar_OMSimulatorExt_oms__addSubModel MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addSubModel)

extern int OMSimulator_oms_addSubModel(const char* /*_cref*/, const char* /*_fmuPath*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addStaticValueIndicator(threadData_t *threadData, modelica_string _signal, modelica_real _lower, modelica_real _upper, modelica_real _stepSize);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addStaticValueIndicator(threadData_t *threadData, modelica_metatype _signal, modelica_metatype _lower, modelica_metatype _upper, modelica_metatype _stepSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addStaticValueIndicator,2,0) {(void*) boxptr_OMSimulatorExt_oms__addStaticValueIndicator,0}};
#define boxvar_OMSimulatorExt_oms__addStaticValueIndicator MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addStaticValueIndicator)

extern int OMSimulator_oms_addStaticValueIndicator(const char* /*_signal*/, double /*_lower*/, double /*_upper*/, double /*_stepSize*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addSignalsToResults(threadData_t *threadData, modelica_string _cref, modelica_string _regex);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addSignalsToResults(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _regex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addSignalsToResults,2,0) {(void*) boxptr_OMSimulatorExt_oms__addSignalsToResults,0}};
#define boxvar_OMSimulatorExt_oms__addSignalsToResults MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addSignalsToResults)

extern int OMSimulator_oms_addSignalsToResults(const char* /*_cref*/, const char* /*_regex*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addExternalModel(threadData_t *threadData, modelica_string _cref, modelica_string _path, modelica_string _startscript);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addExternalModel(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _path, modelica_metatype _startscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addExternalModel,2,0) {(void*) boxptr_OMSimulatorExt_oms__addExternalModel,0}};
#define boxvar_OMSimulatorExt_oms__addExternalModel MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addExternalModel)

extern int OMSimulator_oms_addExternalModel(const char* /*_cref*/, const char* /*_path*/, const char* /*_startscript*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addEventIndicator(threadData_t *threadData, modelica_string _signal);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addEventIndicator(threadData_t *threadData, modelica_metatype _signal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addEventIndicator,2,0) {(void*) boxptr_OMSimulatorExt_oms__addEventIndicator,0}};
#define boxvar_OMSimulatorExt_oms__addEventIndicator MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addEventIndicator)

extern int OMSimulator_oms_addEventIndicator(const char* /*_signal*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addDynamicValueIndicator(threadData_t *threadData, modelica_string _signal, modelica_string _lower, modelica_string _upper, modelica_real _stepSize);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addDynamicValueIndicator(threadData_t *threadData, modelica_metatype _signal, modelica_metatype _lower, modelica_metatype _upper, modelica_metatype _stepSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addDynamicValueIndicator,2,0) {(void*) boxptr_OMSimulatorExt_oms__addDynamicValueIndicator,0}};
#define boxvar_OMSimulatorExt_oms__addDynamicValueIndicator MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addDynamicValueIndicator)

extern int OMSimulator_oms_addDynamicValueIndicator(const char* /*_signal*/, const char* /*_lower*/, const char* /*_upper*/, double /*_stepSize*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addConnectorToTLMBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref, modelica_string _type_);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addConnectorToTLMBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref, modelica_metatype _type_);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnectorToTLMBus,2,0) {(void*) boxptr_OMSimulatorExt_oms__addConnectorToTLMBus,0}};
#define boxvar_OMSimulatorExt_oms__addConnectorToTLMBus MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnectorToTLMBus)

extern int OMSimulator_oms_addConnectorToTLMBus(const char* /*_busCref*/, const char* /*_connectorCref*/, const char* /*_type_*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addConnectorToBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addConnectorToBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnectorToBus,2,0) {(void*) boxptr_OMSimulatorExt_oms__addConnectorToBus,0}};
#define boxvar_OMSimulatorExt_oms__addConnectorToBus MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnectorToBus)

extern int OMSimulator_oms_addConnectorToBus(const char* /*_busCref*/, const char* /*_connectorCref*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addConnector(threadData_t *threadData, modelica_string _cref, modelica_integer _causality, modelica_integer _type_);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addConnector(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _causality, modelica_metatype _type_);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnector,2,0) {(void*) boxptr_OMSimulatorExt_oms__addConnector,0}};
#define boxvar_OMSimulatorExt_oms__addConnector MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnector)

extern int OMSimulator_oms_addConnector(const char* /*_cref*/, int /*_causality*/, int /*_type_*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addConnection(threadData_t *threadData, modelica_string _crefA, modelica_string _crefB);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addConnection(threadData_t *threadData, modelica_metatype _crefA, modelica_metatype _crefB);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnection,2,0) {(void*) boxptr_OMSimulatorExt_oms__addConnection,0}};
#define boxvar_OMSimulatorExt_oms__addConnection MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addConnection)

extern int OMSimulator_oms_addConnection(const char* /*_crefA*/, const char* /*_crefB*/);

DLLDirection
modelica_integer omc_OMSimulatorExt_oms__addBus(threadData_t *threadData, modelica_string _cref);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_oms__addBus(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addBus,2,0) {(void*) boxptr_OMSimulatorExt_oms__addBus,0}};
#define boxvar_OMSimulatorExt_oms__addBus MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__addBus)

extern int OMSimulator_oms_addBus(const char* /*_cref*/);

DLLDirection
modelica_string omc_OMSimulatorExt_oms__getVersion(threadData_t *threadData);
#define boxptr_OMSimulatorExt_oms__getVersion omc_OMSimulatorExt_oms__getVersion
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getVersion,2,0) {(void*) boxptr_OMSimulatorExt_oms__getVersion,0}};
#define boxvar_OMSimulatorExt_oms__getVersion MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_oms__getVersion)

extern const char* OMSimulator_oms_getVersion();

DLLDirection
modelica_integer omc_OMSimulatorExt_unloadOMSimulator(threadData_t *threadData);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_unloadOMSimulator(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_unloadOMSimulator,2,0) {(void*) boxptr_OMSimulatorExt_unloadOMSimulator,0}};
#define boxvar_OMSimulatorExt_unloadOMSimulator MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_unloadOMSimulator)

extern int OMSimulator_unloadDLL();

DLLDirection
modelica_integer omc_OMSimulatorExt_loadOMSimulator(threadData_t *threadData);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_loadOMSimulator(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_loadOMSimulator,2,0) {(void*) boxptr_OMSimulatorExt_loadOMSimulator,0}};
#define boxvar_OMSimulatorExt_loadOMSimulator MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_loadOMSimulator)

extern int OMSimulator_loadDLL();

DLLDirection
modelica_string omc_OMSimulatorExt_statusToString(threadData_t *threadData, modelica_integer _status);
DLLDirection
modelica_metatype boxptr_OMSimulatorExt_statusToString(threadData_t *threadData, modelica_metatype _status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMSimulatorExt_statusToString,2,0) {(void*) boxptr_OMSimulatorExt_statusToString,0}};
#define boxvar_OMSimulatorExt_statusToString MMC_REFSTRUCTLIT(boxvar_lit_OMSimulatorExt_statusToString)

#ifdef __cplusplus
}
#endif
#endif
