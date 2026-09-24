#include "omc_simulation_settings.h"
#include "OMSimulatorExt.h"
#define _OMC_LIT0_data "unknown_status"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,14,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "pending"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "fatal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,5,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,5,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "discard"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,7,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "warning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,7,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "ok"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#include "util/modelica.h"

#include "OMSimulatorExt_includes.h"



modelica_integer omc_OMSimulatorExt_oms__terminate(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_terminate(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__terminate(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__terminate(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__stepUntil(threadData_t *threadData, modelica_string _cref, modelica_real _stopTime)
{
  double _stopTime_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _stopTime_ext = (double) _stopTime;
  _status_ext = OMSimulator_oms_stepUntil(omc_string_data(_cref), _stopTime_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__stepUntil(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _stopTime)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_stopTime);
  _status = omc_OMSimulatorExt_oms__stepUntil(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__simulate(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_simulate(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__simulate(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__simulate(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setWorkingDirectory(threadData_t *threadData, modelica_string _newWorkingDir)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_setWorkingDirectory(omc_string_data(_newWorkingDir));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setWorkingDirectory(threadData_t *threadData, modelica_metatype _newWorkingDir)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__setWorkingDirectory(threadData, _newWorkingDir);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setVariableStepSize(threadData_t *threadData, modelica_string _cref, modelica_real _initialStepSize, modelica_real _minimumStepSize, modelica_real _maximumStepSize)
{
  double _initialStepSize_ext;
  double _minimumStepSize_ext;
  double _maximumStepSize_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _initialStepSize_ext = (double) _initialStepSize;
  _minimumStepSize_ext = (double) _minimumStepSize;
  _maximumStepSize_ext = (double) _maximumStepSize;
  _status_ext = OMSimulator_oms_setVariableStepSize(omc_string_data(_cref), _initialStepSize_ext, _minimumStepSize_ext, _maximumStepSize_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setVariableStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _initialStepSize, modelica_metatype _minimumStepSize, modelica_metatype _maximumStepSize)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_initialStepSize);
  tmp2 = omc_unbox_real(_minimumStepSize);
  tmp3 = omc_unbox_real(_maximumStepSize);
  _status = omc_OMSimulatorExt_oms__setVariableStepSize(threadData, _cref, tmp1, tmp2, tmp3);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setTolerance(threadData_t *threadData, modelica_string _cref, modelica_real _absoluteTolerance, modelica_real _relativeTolerance)
{
  double _absoluteTolerance_ext;
  double _relativeTolerance_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _absoluteTolerance_ext = (double) _absoluteTolerance;
  _relativeTolerance_ext = (double) _relativeTolerance;
  _status_ext = OMSimulator_oms_setTolerance(omc_string_data(_cref), _absoluteTolerance_ext, _relativeTolerance_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setTolerance(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _absoluteTolerance, modelica_metatype _relativeTolerance)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_absoluteTolerance);
  tmp2 = omc_unbox_real(_relativeTolerance);
  _status = omc_OMSimulatorExt_oms__setTolerance(threadData, _cref, tmp1, tmp2);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setTLMSocketData(threadData_t *threadData, modelica_string _cref, modelica_string _address, modelica_integer _managerPort, modelica_integer _monitorPort)
{
  int _managerPort_ext;
  int _monitorPort_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _managerPort_ext = (int) _managerPort;
  _monitorPort_ext = (int) _monitorPort;
  _status_ext = OMSimulator_oms_setTLMSocketData(omc_string_data(_cref), omc_string_data(_address), _managerPort_ext, _monitorPort_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setTLMSocketData(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _address, modelica_metatype _managerPort, modelica_metatype _monitorPort)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_managerPort);
  tmp2 = omc_unbox_integer(_monitorPort);
  _status = omc_OMSimulatorExt_oms__setTLMSocketData(threadData, _cref, _address, tmp1, tmp2);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setTLMPositionAndOrientation(threadData_t *threadData, modelica_string _cref, modelica_real _x1, modelica_real _x2, modelica_real _x3, modelica_real _A11, modelica_real _A12, modelica_real _A13, modelica_real _A21, modelica_real _A22, modelica_real _A23, modelica_real _A31, modelica_real _A32, modelica_real _A33)
{
  double _x1_ext;
  double _x2_ext;
  double _x3_ext;
  double _A11_ext;
  double _A12_ext;
  double _A13_ext;
  double _A21_ext;
  double _A22_ext;
  double _A23_ext;
  double _A31_ext;
  double _A32_ext;
  double _A33_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _x1_ext = (double) _x1;
  _x2_ext = (double) _x2;
  _x3_ext = (double) _x3;
  _A11_ext = (double) _A11;
  _A12_ext = (double) _A12;
  _A13_ext = (double) _A13;
  _A21_ext = (double) _A21;
  _A22_ext = (double) _A22;
  _A23_ext = (double) _A23;
  _A31_ext = (double) _A31;
  _A32_ext = (double) _A32;
  _A33_ext = (double) _A33;
  _status_ext = OMSimulator_oms_setTLMPositionAndOrientation(omc_string_data(_cref), _x1_ext, _x2_ext, _x3_ext, _A11_ext, _A12_ext, _A13_ext, _A21_ext, _A22_ext, _A23_ext, _A31_ext, _A32_ext, _A33_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setTLMPositionAndOrientation(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _x3, modelica_metatype _A11, modelica_metatype _A12, modelica_metatype _A13, modelica_metatype _A21, modelica_metatype _A22, modelica_metatype _A23, modelica_metatype _A31, modelica_metatype _A32, modelica_metatype _A33)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_x1);
  tmp2 = omc_unbox_real(_x2);
  tmp3 = omc_unbox_real(_x3);
  tmp4 = omc_unbox_real(_A11);
  tmp5 = omc_unbox_real(_A12);
  tmp6 = omc_unbox_real(_A13);
  tmp7 = omc_unbox_real(_A21);
  tmp8 = omc_unbox_real(_A22);
  tmp9 = omc_unbox_real(_A23);
  tmp10 = omc_unbox_real(_A31);
  tmp11 = omc_unbox_real(_A32);
  tmp12 = omc_unbox_real(_A33);
  _status = omc_OMSimulatorExt_oms__setTLMPositionAndOrientation(threadData, _cref, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setTempDirectory(threadData_t *threadData, modelica_string _newTempDir)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_setTempDirectory(omc_string_data(_newTempDir));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setTempDirectory(threadData_t *threadData, modelica_metatype _newTempDir)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__setTempDirectory(threadData, _newTempDir);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setStopTime(threadData_t *threadData, modelica_string _cref, modelica_real _stopTime)
{
  double _stopTime_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _stopTime_ext = (double) _stopTime;
  _status_ext = OMSimulator_oms_setStopTime(omc_string_data(_cref), _stopTime_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setStopTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _stopTime)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_stopTime);
  _status = omc_OMSimulatorExt_oms__setStopTime(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setStartTime(threadData_t *threadData, modelica_string _cref, modelica_real _startTime)
{
  double _startTime_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _startTime_ext = (double) _startTime;
  _status_ext = OMSimulator_oms_setStartTime(omc_string_data(_cref), _startTime_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setStartTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _startTime)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_startTime);
  _status = omc_OMSimulatorExt_oms__setStartTime(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setSolver(threadData_t *threadData, modelica_string _cref, modelica_integer _solver)
{
  int _solver_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _solver_ext = (int) _solver;
  _status_ext = OMSimulator_oms_setSolver(omc_string_data(_cref), _solver_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setSolver(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _solver)
{
  modelica_integer tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_solver);
  _status = omc_OMSimulatorExt_oms__setSolver(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setSignalFilter(threadData_t *threadData, modelica_string _cref, modelica_string _regex)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_setSignalFilter(omc_string_data(_cref), omc_string_data(_regex));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setSignalFilter(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _regex)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__setSignalFilter(threadData, _cref, _regex);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setResultFile(threadData_t *threadData, modelica_string _cref, modelica_string _filename, modelica_integer _bufferSize)
{
  int _bufferSize_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _bufferSize_ext = (int) _bufferSize;
  _status_ext = OMSimulator_oms_setResultFile(omc_string_data(_cref), omc_string_data(_filename), _bufferSize_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setResultFile(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _filename, modelica_metatype _bufferSize)
{
  modelica_integer tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_bufferSize);
  _status = omc_OMSimulatorExt_oms__setResultFile(threadData, _cref, _filename, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setRealInputDerivative(threadData_t *threadData, modelica_string _cref, modelica_real _value)
{
  double _value_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _value_ext = (double) _value;
  _status_ext = OMSimulator_oms_setRealInputDerivative(omc_string_data(_cref), _value_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setRealInputDerivative(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_value);
  _status = omc_OMSimulatorExt_oms__setRealInputDerivative(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setReal(threadData_t *threadData, modelica_string _cref, modelica_real _value)
{
  double _value_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _value_ext = (double) _value;
  _status_ext = OMSimulator_oms_setReal(omc_string_data(_cref), _value_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setReal(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_value);
  _status = omc_OMSimulatorExt_oms__setReal(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setLoggingLevel(threadData_t *threadData, modelica_integer _logLevel)
{
  int _logLevel_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _logLevel_ext = (int) _logLevel;
  _status_ext = OMSimulator_oms_setLoggingLevel(_logLevel_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setLoggingLevel(threadData_t *threadData, modelica_metatype _logLevel)
{
  modelica_integer tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_logLevel);
  _status = omc_OMSimulatorExt_oms__setLoggingLevel(threadData, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setLoggingInterval(threadData_t *threadData, modelica_string _cref, modelica_real _loggingInterval)
{
  double _loggingInterval_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _loggingInterval_ext = (double) _loggingInterval;
  _status_ext = OMSimulator_oms_setLoggingInterval(omc_string_data(_cref), _loggingInterval_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setLoggingInterval(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _loggingInterval)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_loggingInterval);
  _status = omc_OMSimulatorExt_oms__setLoggingInterval(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setLogFile(threadData_t *threadData, modelica_string _filename)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_setLogFile(omc_string_data(_filename));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setLogFile(threadData_t *threadData, modelica_metatype _filename)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__setLogFile(threadData, _filename);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setInteger(threadData_t *threadData, modelica_string _cref, modelica_integer _value)
{
  int _value_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _value_ext = (int) _value;
  _status_ext = OMSimulator_oms_setInteger(omc_string_data(_cref), _value_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setInteger(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_value);
  _status = omc_OMSimulatorExt_oms__setInteger(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setFixedStepSize(threadData_t *threadData, modelica_string _cref, modelica_real _stepSize)
{
  double _stepSize_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _stepSize_ext = (double) _stepSize;
  _status_ext = OMSimulator_oms_setFixedStepSize(omc_string_data(_cref), _stepSize_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setFixedStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _stepSize)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_stepSize);
  _status = omc_OMSimulatorExt_oms__setFixedStepSize(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setCommandLineOption(threadData_t *threadData, modelica_string _cmd)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_setCommandLineOption(omc_string_data(_cmd));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setCommandLineOption(threadData_t *threadData, modelica_metatype _cmd)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__setCommandLineOption(threadData, _cmd);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__setBoolean(threadData_t *threadData, modelica_string _cref, modelica_boolean _value)
{
  int _value_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _value_ext = (int) _value;
  _status_ext = OMSimulator_oms_setBoolean(omc_string_data(_cref), _value_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__setBoolean(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _value)
{
  modelica_integer tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_value);
  _status = omc_OMSimulatorExt_oms__setBoolean(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__RunFile(threadData_t *threadData, modelica_string _filename)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_RunFile(omc_string_data(_filename));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__RunFile(threadData_t *threadData, modelica_metatype _filename)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__RunFile(threadData, _filename);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__reset(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_reset(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__reset(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__reset(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__rename(threadData_t *threadData, modelica_string _cref, modelica_string _newCref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_rename(omc_string_data(_cref), omc_string_data(_newCref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__rename(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _newCref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__rename(threadData, _cref, _newCref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__removeSignalsFromResults(threadData_t *threadData, modelica_string _cref, modelica_string _regex)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_removeSignalsFromResults(omc_string_data(_cref), omc_string_data(_regex));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__removeSignalsFromResults(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _regex)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__removeSignalsFromResults(threadData, _cref, _regex);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__newModel(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_newModel(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__newModel(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__newModel(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_string omc_OMSimulatorExt_oms__loadSnapshot(threadData_t *threadData, modelica_string _cref, modelica_string _snapshot, modelica_integer *out_status)
{
  const char* _newCref_ext;
  int _status_ext;
  modelica_string _newCref = NULL;
  modelica_integer _status;
  // _newCref has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_loadSnapshot(omc_string_data(_cref), omc_string_data(_snapshot), &_newCref_ext);
  _newCref = (modelica_string)omc_string_new(_newCref_ext);
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _newCref;
}
modelica_metatype boxptr_OMSimulatorExt_oms__loadSnapshot(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _snapshot, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_string _newCref = NULL;
  _newCref = omc_OMSimulatorExt_oms__loadSnapshot(threadData, _cref, _snapshot, &_status);
  /* skip box _newCref; String */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return _newCref;
}

modelica_string omc_OMSimulatorExt_oms__listUnconnectedConnectors(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  const char* _contents_ext;
  int _status_ext;
  modelica_string _contents = NULL;
  modelica_integer _status;
  // _contents has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_listUnconnectedConnectors(omc_string_data(_cref), &_contents_ext);
  _contents = (modelica_string)omc_string_new(_contents_ext);
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _contents;
}
modelica_metatype boxptr_OMSimulatorExt_oms__listUnconnectedConnectors(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_string _contents = NULL;
  _contents = omc_OMSimulatorExt_oms__listUnconnectedConnectors(threadData, _cref, &_status);
  /* skip box _contents; String */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return _contents;
}

modelica_string omc_OMSimulatorExt_oms__list(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  const char* _contents_ext;
  int _status_ext;
  modelica_string _contents = NULL;
  modelica_integer _status;
  // _contents has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_list(omc_string_data(_cref), &_contents_ext);
  _contents = (modelica_string)omc_string_new(_contents_ext);
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _contents;
}
modelica_metatype boxptr_OMSimulatorExt_oms__list(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_string _contents = NULL;
  _contents = omc_OMSimulatorExt_oms__list(threadData, _cref, &_status);
  /* skip box _contents; String */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return _contents;
}

modelica_integer omc_OMSimulatorExt_oms__instantiate(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_instantiate(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__instantiate(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__instantiate(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__initialize(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_initialize(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__initialize(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__initialize(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__importSnapshot(threadData_t *threadData, modelica_string _cref, modelica_string _snapshot)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_importSnapshot(omc_string_data(_cref), omc_string_data(_snapshot));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__importSnapshot(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _snapshot)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__importSnapshot(threadData, _cref, _snapshot);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_string omc_OMSimulatorExt_oms__importFile(threadData_t *threadData, modelica_string _filename, modelica_integer *out_status)
{
  const char* _cref_ext;
  int _status_ext;
  modelica_string _cref = NULL;
  modelica_integer _status;
  // _cref has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_importFile(omc_string_data(_filename), &_cref_ext);
  _cref = (modelica_string)omc_string_new(_cref_ext);
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _cref;
}
modelica_metatype boxptr_OMSimulatorExt_oms__importFile(threadData_t *threadData, modelica_metatype _filename, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_string _cref = NULL;
  _cref = omc_OMSimulatorExt_oms__importFile(threadData, _filename, &_status);
  /* skip box _cref; String */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return _cref;
}

modelica_integer omc_OMSimulatorExt_oms__faultInjection(threadData_t *threadData, modelica_string _signal, modelica_integer _faultType, modelica_real _faultValue)
{
  int _faultType_ext;
  double _faultValue_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _faultType_ext = (int) _faultType;
  _faultValue_ext = (double) _faultValue;
  _status_ext = OMSimulator_oms_faultInjection(omc_string_data(_signal), _faultType_ext, _faultValue_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__faultInjection(threadData_t *threadData, modelica_metatype _signal, modelica_metatype _faultType, modelica_metatype _faultValue)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_faultType);
  tmp2 = omc_unbox_real(_faultValue);
  _status = omc_OMSimulatorExt_oms__faultInjection(threadData, _signal, tmp1, tmp2);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_real omc_OMSimulatorExt_oms__getVariableStepSize(threadData_t *threadData, modelica_string _cref, modelica_real *out_minimumStepSize, modelica_real *out_maximumStepSize, modelica_integer *out_status)
{
  double _initialStepSize_ext;
  double _minimumStepSize_ext;
  double _maximumStepSize_ext;
  int _status_ext;
  modelica_real _initialStepSize;
  modelica_real _minimumStepSize;
  modelica_real _maximumStepSize;
  modelica_integer _status;
  // _initialStepSize has no default value.
  // _minimumStepSize has no default value.
  // _maximumStepSize has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getVariableStepSize(omc_string_data(_cref), &_initialStepSize_ext, &_minimumStepSize_ext, &_maximumStepSize_ext);
  _initialStepSize = (modelica_real)_initialStepSize_ext;
  _minimumStepSize = (modelica_real)_minimumStepSize_ext;
  _maximumStepSize = (modelica_real)_maximumStepSize_ext;
  _status = (modelica_integer)_status_ext;
  if (out_minimumStepSize) { *out_minimumStepSize = _minimumStepSize; }
  if (out_maximumStepSize) { *out_maximumStepSize = _maximumStepSize; }
  if (out_status) { *out_status = _status; }
  return _initialStepSize;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getVariableStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_minimumStepSize, modelica_metatype *out_maximumStepSize, modelica_metatype *out_status)
{
  modelica_real _minimumStepSize;
  modelica_real _maximumStepSize;
  modelica_integer _status;
  modelica_real _initialStepSize;
  modelica_metatype out_initialStepSize;
  _initialStepSize = omc_OMSimulatorExt_oms__getVariableStepSize(threadData, _cref, &_minimumStepSize, &_maximumStepSize, &_status);
  out_initialStepSize = omc_mk_rcon(_initialStepSize);
  if (out_minimumStepSize) { *out_minimumStepSize = omc_mk_rcon(_minimumStepSize); }
  if (out_maximumStepSize) { *out_maximumStepSize = omc_mk_rcon(_maximumStepSize); }
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_initialStepSize;
}

modelica_real omc_OMSimulatorExt_oms__getTolerance(threadData_t *threadData, modelica_string _cref, modelica_real *out_relativeTolerance, modelica_integer *out_status)
{
  double _absoluteTolerance_ext;
  double _relativeTolerance_ext;
  int _status_ext;
  modelica_real _absoluteTolerance;
  modelica_real _relativeTolerance;
  modelica_integer _status;
  // _absoluteTolerance has no default value.
  // _relativeTolerance has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getTolerance(omc_string_data(_cref), &_absoluteTolerance_ext, &_relativeTolerance_ext);
  _absoluteTolerance = (modelica_real)_absoluteTolerance_ext;
  _relativeTolerance = (modelica_real)_relativeTolerance_ext;
  _status = (modelica_integer)_status_ext;
  if (out_relativeTolerance) { *out_relativeTolerance = _relativeTolerance; }
  if (out_status) { *out_status = _status; }
  return _absoluteTolerance;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getTolerance(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_relativeTolerance, modelica_metatype *out_status)
{
  modelica_real _relativeTolerance;
  modelica_integer _status;
  modelica_real _absoluteTolerance;
  modelica_metatype out_absoluteTolerance;
  _absoluteTolerance = omc_OMSimulatorExt_oms__getTolerance(threadData, _cref, &_relativeTolerance, &_status);
  out_absoluteTolerance = omc_mk_rcon(_absoluteTolerance);
  if (out_relativeTolerance) { *out_relativeTolerance = omc_mk_rcon(_relativeTolerance); }
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_absoluteTolerance;
}

modelica_integer omc_OMSimulatorExt_oms__getSystemType(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  int _type__ext;
  int _status_ext;
  modelica_integer _type_;
  modelica_integer _status;
  // _type_ has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getSystemType(omc_string_data(_cref), &_type__ext);
  _type_ = (modelica_integer)_type__ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _type_;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getSystemType(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_integer _type_;
  modelica_metatype out_type_;
  _type_ = omc_OMSimulatorExt_oms__getSystemType(threadData, _cref, &_status);
  out_type_ = omc_mk_icon(_type_);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_type_;
}

modelica_string omc_OMSimulatorExt_oms__getSubModelPath(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  const char* _path_ext;
  int _status_ext;
  modelica_string _path = NULL;
  modelica_integer _status;
  // _path has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getSubModelPath(omc_string_data(_cref), &_path_ext);
  _path = (modelica_string)omc_string_new(_path_ext);
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _path;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getSubModelPath(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_string _path = NULL;
  _path = omc_OMSimulatorExt_oms__getSubModelPath(threadData, _cref, &_status);
  /* skip box _path; String */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return _path;
}

modelica_real omc_OMSimulatorExt_oms__getStopTime(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  double _stopTime_ext;
  int _status_ext;
  modelica_real _stopTime;
  modelica_integer _status;
  // _stopTime has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getStopTime(omc_string_data(_cref), &_stopTime_ext);
  _stopTime = (modelica_real)_stopTime_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _stopTime;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getStopTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_real _stopTime;
  modelica_metatype out_stopTime;
  _stopTime = omc_OMSimulatorExt_oms__getStopTime(threadData, _cref, &_status);
  out_stopTime = omc_mk_rcon(_stopTime);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_stopTime;
}

modelica_real omc_OMSimulatorExt_oms__getStartTime(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  double _startTime_ext;
  int _status_ext;
  modelica_real _startTime;
  modelica_integer _status;
  // _startTime has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getStartTime(omc_string_data(_cref), &_startTime_ext);
  _startTime = (modelica_real)_startTime_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _startTime;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getStartTime(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_real _startTime;
  modelica_metatype out_startTime;
  _startTime = omc_OMSimulatorExt_oms__getStartTime(threadData, _cref, &_status);
  out_startTime = omc_mk_rcon(_startTime);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_startTime;
}

modelica_integer omc_OMSimulatorExt_oms__getSolver(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  int _solver_ext;
  int _status_ext;
  modelica_integer _solver;
  modelica_integer _status;
  // _solver has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getSolver(omc_string_data(_cref), &_solver_ext);
  _solver = (modelica_integer)_solver_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _solver;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getSolver(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_integer _solver;
  modelica_metatype out_solver;
  _solver = omc_OMSimulatorExt_oms__getSolver(threadData, _cref, &_status);
  out_solver = omc_mk_icon(_solver);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_solver;
}

modelica_real omc_OMSimulatorExt_oms__getReal(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  double _value_ext;
  int _status_ext;
  modelica_real _value;
  modelica_integer _status;
  // _value has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getReal(omc_string_data(_cref), &_value_ext);
  _value = (modelica_real)_value_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _value;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getReal(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_real _value;
  modelica_metatype out_value;
  _value = omc_OMSimulatorExt_oms__getReal(threadData, _cref, &_status);
  out_value = omc_mk_rcon(_value);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_value;
}

modelica_integer omc_OMSimulatorExt_oms__getModelState(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  int _modelState_ext;
  int _status_ext;
  modelica_integer _modelState;
  modelica_integer _status;
  // _modelState has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getModelState(omc_string_data(_cref), &_modelState_ext);
  _modelState = (modelica_integer)_modelState_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _modelState;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getModelState(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_integer _modelState;
  modelica_metatype out_modelState;
  _modelState = omc_OMSimulatorExt_oms__getModelState(threadData, _cref, &_status);
  out_modelState = omc_mk_icon(_modelState);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_modelState;
}

modelica_integer omc_OMSimulatorExt_oms__getInteger(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  int _value_ext;
  int _status_ext;
  modelica_integer _value;
  modelica_integer _status;
  // _value has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getInteger(omc_string_data(_cref), &_value_ext);
  _value = (modelica_integer)_value_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _value;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getInteger(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_integer _value;
  modelica_metatype out_value;
  _value = omc_OMSimulatorExt_oms__getInteger(threadData, _cref, &_status);
  out_value = omc_mk_icon(_value);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_value;
}

modelica_real omc_OMSimulatorExt_oms__getFixedStepSize(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  double _stepSize_ext;
  int _status_ext;
  modelica_real _stepSize;
  modelica_integer _status;
  // _stepSize has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getFixedStepSize(omc_string_data(_cref), &_stepSize_ext);
  _stepSize = (modelica_real)_stepSize_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _stepSize;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getFixedStepSize(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_real _stepSize;
  modelica_metatype out_stepSize;
  _stepSize = omc_OMSimulatorExt_oms__getFixedStepSize(threadData, _cref, &_status);
  out_stepSize = omc_mk_rcon(_stepSize);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_stepSize;
}

modelica_boolean omc_OMSimulatorExt_oms__getBoolean(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  int _value_ext;
  int _status_ext;
  modelica_boolean _value;
  modelica_integer _status;
  // _value has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_getBoolean(omc_string_data(_cref), &_value_ext);
  _value = (modelica_boolean)_value_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _value;
}
modelica_metatype boxptr_OMSimulatorExt_oms__getBoolean(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_boolean _value;
  modelica_metatype out_value;
  _value = omc_OMSimulatorExt_oms__getBoolean(threadData, _cref, &_status);
  out_value = omc_mk_icon(_value);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_value;
}

modelica_integer omc_OMSimulatorExt_oms__extractFMIKind(threadData_t *threadData, modelica_string _filename, modelica_integer *out_status)
{
  int _kind_ext;
  int _status_ext;
  modelica_integer _kind;
  modelica_integer _status;
  // _kind has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_extractFMIKind(omc_string_data(_filename), &_kind_ext);
  _kind = (modelica_integer)_kind_ext;
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _kind;
}
modelica_metatype boxptr_OMSimulatorExt_oms__extractFMIKind(threadData_t *threadData, modelica_metatype _filename, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_integer _kind;
  modelica_metatype out_kind;
  _kind = omc_OMSimulatorExt_oms__extractFMIKind(threadData, _filename, &_status);
  out_kind = omc_mk_icon(_kind);
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return out_kind;
}

modelica_string omc_OMSimulatorExt_oms__exportSnapshot(threadData_t *threadData, modelica_string _cref, modelica_integer *out_status)
{
  const char* _contents_ext;
  int _status_ext;
  modelica_string _contents = NULL;
  modelica_integer _status;
  // _contents has no default value.
  // _status has no default value.

  _status_ext = OMSimulator_oms_exportSnapshot(omc_string_data(_cref), &_contents_ext);
  _contents = (modelica_string)omc_string_new(_contents_ext);
  _status = (modelica_integer)_status_ext;
  if (out_status) { *out_status = _status; }
  return _contents;
}
modelica_metatype boxptr_OMSimulatorExt_oms__exportSnapshot(threadData_t *threadData, modelica_metatype _cref, modelica_metatype *out_status)
{
  modelica_integer _status;
  modelica_string _contents = NULL;
  _contents = omc_OMSimulatorExt_oms__exportSnapshot(threadData, _cref, &_status);
  /* skip box _contents; String */
  if (out_status) { *out_status = omc_mk_icon(_status); }
  return _contents;
}

modelica_integer omc_OMSimulatorExt_oms__exportDependencyGraphs(threadData_t *threadData, modelica_string _cref, modelica_string _initialization, modelica_string _event, modelica_string _simulation)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_exportDependencyGraphs(omc_string_data(_cref), omc_string_data(_initialization), omc_string_data(_event), omc_string_data(_simulation));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__exportDependencyGraphs(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _initialization, modelica_metatype _event, modelica_metatype _simulation)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__exportDependencyGraphs(threadData, _cref, _initialization, _event, _simulation);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__export(threadData_t *threadData, modelica_string _cref, modelica_string _filename)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_export(omc_string_data(_cref), omc_string_data(_filename));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__export(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _filename)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__export(threadData, _cref, _filename);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__deleteConnectorFromTLMBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_deleteConnectorFromTLMBus(omc_string_data(_busCref), omc_string_data(_connectorCref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__deleteConnectorFromTLMBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__deleteConnectorFromTLMBus(threadData, _busCref, _connectorCref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__deleteConnectorFromBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_deleteConnectorFromBus(omc_string_data(_busCref), omc_string_data(_connectorCref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__deleteConnectorFromBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__deleteConnectorFromBus(threadData, _busCref, _connectorCref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__deleteConnection(threadData_t *threadData, modelica_string _crefA, modelica_string _crefB)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_deleteConnection(omc_string_data(_crefA), omc_string_data(_crefB));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__deleteConnection(threadData_t *threadData, modelica_metatype _crefA, modelica_metatype _crefB)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__deleteConnection(threadData, _crefA, _crefB);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__delete(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_delete(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__delete(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__delete(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__copySystem(threadData_t *threadData, modelica_string _source, modelica_string _target)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_copySystem(omc_string_data(_source), omc_string_data(_target));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__copySystem(threadData_t *threadData, modelica_metatype _source, modelica_metatype _target)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__copySystem(threadData, _source, _target);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__compareSimulationResults(threadData_t *threadData, modelica_string _filenameA, modelica_string _filenameB, modelica_string _var, modelica_real _relTol, modelica_real _absTol)
{
  double _relTol_ext;
  double _absTol_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _relTol_ext = (double) _relTol;
  _absTol_ext = (double) _absTol;
  _status_ext = OMSimulator_oms_compareSimulationResults(omc_string_data(_filenameA), omc_string_data(_filenameB), omc_string_data(_var), _relTol_ext, _absTol_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__compareSimulationResults(threadData_t *threadData, modelica_metatype _filenameA, modelica_metatype _filenameB, modelica_metatype _var, modelica_metatype _relTol, modelica_metatype _absTol)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_relTol);
  tmp2 = omc_unbox_real(_absTol);
  _status = omc_OMSimulatorExt_oms__compareSimulationResults(threadData, _filenameA, _filenameB, _var, tmp1, tmp2);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addTLMConnection(threadData_t *threadData, modelica_string _crefA, modelica_string _crefB, modelica_real _delay, modelica_real _alpha, modelica_real _linearimpedance, modelica_real _angularimpedance)
{
  double _delay_ext;
  double _alpha_ext;
  double _linearimpedance_ext;
  double _angularimpedance_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _delay_ext = (double) _delay;
  _alpha_ext = (double) _alpha;
  _linearimpedance_ext = (double) _linearimpedance;
  _angularimpedance_ext = (double) _angularimpedance;
  _status_ext = OMSimulator_oms_addTLMConnection(omc_string_data(_crefA), omc_string_data(_crefB), _delay_ext, _alpha_ext, _linearimpedance_ext, _angularimpedance_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addTLMConnection(threadData_t *threadData, modelica_metatype _crefA, modelica_metatype _crefB, modelica_metatype _delay, modelica_metatype _alpha, modelica_metatype _linearimpedance, modelica_metatype _angularimpedance)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_delay);
  tmp2 = omc_unbox_real(_alpha);
  tmp3 = omc_unbox_real(_linearimpedance);
  tmp4 = omc_unbox_real(_angularimpedance);
  _status = omc_OMSimulatorExt_oms__addTLMConnection(threadData, _crefA, _crefB, tmp1, tmp2, tmp3, tmp4);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addTLMBus(threadData_t *threadData, modelica_string _cref, modelica_integer _domain, modelica_integer _dimensions, modelica_integer _interpolation)
{
  int _domain_ext;
  int _dimensions_ext;
  int _interpolation_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _domain_ext = (int) _domain;
  _dimensions_ext = (int) _dimensions;
  _interpolation_ext = (int) _interpolation;
  _status_ext = OMSimulator_oms_addTLMBus(omc_string_data(_cref), _domain_ext, _dimensions_ext, _interpolation_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addTLMBus(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _domain, modelica_metatype _dimensions, modelica_metatype _interpolation)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_domain);
  tmp2 = omc_unbox_integer(_dimensions);
  tmp3 = omc_unbox_integer(_interpolation);
  _status = omc_OMSimulatorExt_oms__addTLMBus(threadData, _cref, tmp1, tmp2, tmp3);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addTimeIndicator(threadData_t *threadData, modelica_string _signal)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addTimeIndicator(omc_string_data(_signal));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addTimeIndicator(threadData_t *threadData, modelica_metatype _signal)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addTimeIndicator(threadData, _signal);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addSystem(threadData_t *threadData, modelica_string _cref, modelica_integer _type_)
{
  int _type__ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _type__ext = (int) _type_;
  _status_ext = OMSimulator_oms_addSystem(omc_string_data(_cref), _type__ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addSystem(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _type_)
{
  modelica_integer tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_type_);
  _status = omc_OMSimulatorExt_oms__addSystem(threadData, _cref, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addSubModel(threadData_t *threadData, modelica_string _cref, modelica_string _fmuPath)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addSubModel(omc_string_data(_cref), omc_string_data(_fmuPath));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addSubModel(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _fmuPath)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addSubModel(threadData, _cref, _fmuPath);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addStaticValueIndicator(threadData_t *threadData, modelica_string _signal, modelica_real _lower, modelica_real _upper, modelica_real _stepSize)
{
  double _lower_ext;
  double _upper_ext;
  double _stepSize_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _lower_ext = (double) _lower;
  _upper_ext = (double) _upper;
  _stepSize_ext = (double) _stepSize;
  _status_ext = OMSimulator_oms_addStaticValueIndicator(omc_string_data(_signal), _lower_ext, _upper_ext, _stepSize_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addStaticValueIndicator(threadData_t *threadData, modelica_metatype _signal, modelica_metatype _lower, modelica_metatype _upper, modelica_metatype _stepSize)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_lower);
  tmp2 = omc_unbox_real(_upper);
  tmp3 = omc_unbox_real(_stepSize);
  _status = omc_OMSimulatorExt_oms__addStaticValueIndicator(threadData, _signal, tmp1, tmp2, tmp3);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addSignalsToResults(threadData_t *threadData, modelica_string _cref, modelica_string _regex)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addSignalsToResults(omc_string_data(_cref), omc_string_data(_regex));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addSignalsToResults(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _regex)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addSignalsToResults(threadData, _cref, _regex);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addExternalModel(threadData_t *threadData, modelica_string _cref, modelica_string _path, modelica_string _startscript)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addExternalModel(omc_string_data(_cref), omc_string_data(_path), omc_string_data(_startscript));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addExternalModel(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _path, modelica_metatype _startscript)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addExternalModel(threadData, _cref, _path, _startscript);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addEventIndicator(threadData_t *threadData, modelica_string _signal)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addEventIndicator(omc_string_data(_signal));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addEventIndicator(threadData_t *threadData, modelica_metatype _signal)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addEventIndicator(threadData, _signal);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addDynamicValueIndicator(threadData_t *threadData, modelica_string _signal, modelica_string _lower, modelica_string _upper, modelica_real _stepSize)
{
  double _stepSize_ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _stepSize_ext = (double) _stepSize;
  _status_ext = OMSimulator_oms_addDynamicValueIndicator(omc_string_data(_signal), omc_string_data(_lower), omc_string_data(_upper), _stepSize_ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addDynamicValueIndicator(threadData_t *threadData, modelica_metatype _signal, modelica_metatype _lower, modelica_metatype _upper, modelica_metatype _stepSize)
{
  modelica_real tmp1;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_real(_stepSize);
  _status = omc_OMSimulatorExt_oms__addDynamicValueIndicator(threadData, _signal, _lower, _upper, tmp1);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addConnectorToTLMBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref, modelica_string _type_)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addConnectorToTLMBus(omc_string_data(_busCref), omc_string_data(_connectorCref), omc_string_data(_type_));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addConnectorToTLMBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref, modelica_metatype _type_)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addConnectorToTLMBus(threadData, _busCref, _connectorCref, _type_);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addConnectorToBus(threadData_t *threadData, modelica_string _busCref, modelica_string _connectorCref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addConnectorToBus(omc_string_data(_busCref), omc_string_data(_connectorCref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addConnectorToBus(threadData_t *threadData, modelica_metatype _busCref, modelica_metatype _connectorCref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addConnectorToBus(threadData, _busCref, _connectorCref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addConnector(threadData_t *threadData, modelica_string _cref, modelica_integer _causality, modelica_integer _type_)
{
  int _causality_ext;
  int _type__ext;
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _causality_ext = (int) _causality;
  _type__ext = (int) _type_;
  _status_ext = OMSimulator_oms_addConnector(omc_string_data(_cref), _causality_ext, _type__ext);
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addConnector(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _causality, modelica_metatype _type_)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _status;
  modelica_metatype out_status;
  tmp1 = omc_unbox_integer(_causality);
  tmp2 = omc_unbox_integer(_type_);
  _status = omc_OMSimulatorExt_oms__addConnector(threadData, _cref, tmp1, tmp2);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addConnection(threadData_t *threadData, modelica_string _crefA, modelica_string _crefB)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addConnection(omc_string_data(_crefA), omc_string_data(_crefB));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addConnection(threadData_t *threadData, modelica_metatype _crefA, modelica_metatype _crefB)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addConnection(threadData, _crefA, _crefB);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_oms__addBus(threadData_t *threadData, modelica_string _cref)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_oms_addBus(omc_string_data(_cref));
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_oms__addBus(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_oms__addBus(threadData, _cref);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_string omc_OMSimulatorExt_oms__getVersion(threadData_t *threadData)
{
  const char* _outString_ext;
  modelica_string _outString = NULL;
  // _outString has no default value.

  _outString_ext = OMSimulator_oms_getVersion();
  _outString = (modelica_string)omc_string_new(_outString_ext);
  return _outString;
}

modelica_integer omc_OMSimulatorExt_unloadOMSimulator(threadData_t *threadData)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_unloadDLL();
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_unloadOMSimulator(threadData_t *threadData)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_unloadOMSimulator(threadData);
  out_status = omc_mk_icon(_status);
  return out_status;
}

modelica_integer omc_OMSimulatorExt_loadOMSimulator(threadData_t *threadData)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.

  _status_ext = OMSimulator_loadDLL();
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_OMSimulatorExt_loadOMSimulator(threadData_t *threadData)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_OMSimulatorExt_loadOMSimulator(threadData);
  out_status = omc_mk_icon(_status);
  return out_status;
}

DLLModelDirection
modelica_string omc_OMSimulatorExt_statusToString(threadData_t *threadData, modelica_integer _status)
{
  modelica_string _outstring = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outstring has no default value.
  if((_status == ((modelica_integer) 0)))
  {
    omc_string_store(&(_outstring), _OMC_LIT6);
  }
  else
  {
    if((_status == ((modelica_integer) 1)))
    {
      omc_string_store(&(_outstring), _OMC_LIT5);
    }
    else
    {
      if((_status == ((modelica_integer) 2)))
      {
        omc_string_store(&(_outstring), _OMC_LIT4);
      }
      else
      {
        if((_status == ((modelica_integer) 3)))
        {
          omc_string_store(&(_outstring), _OMC_LIT3);
        }
        else
        {
          if((_status == ((modelica_integer) 4)))
          {
            omc_string_store(&(_outstring), _OMC_LIT2);
          }
          else
          {
            if((_status == ((modelica_integer) 5)))
            {
              omc_string_store(&(_outstring), _OMC_LIT1);
            }
            else
            {
              omc_string_store(&(_outstring), _OMC_LIT0);
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outstring;
  return omc_ret_;
}
modelica_metatype boxptr_OMSimulatorExt_statusToString(threadData_t *threadData, modelica_metatype _status)
{
  modelica_integer tmp1;
  modelica_string _outstring = NULL;
  tmp1 = omc_unbox_integer(_status);
  _outstring = omc_OMSimulatorExt_statusToString(threadData, tmp1);
  /* skip box _outstring; String */
  return _outstring;
}

