#include "omc_simulation_settings.h"
#include "CevalScriptOMSimulator.h"
#define _OMC_LIT0_data "loadOMSimulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,15,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "unloadOMSimulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,17,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "oms_addBus"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,10,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "oms_addConnection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "oms_addConnector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,16,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "oms_addConnectorToBus"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,21,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "oms_addConnectorToTLMBus"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,24,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "oms_addDynamicValueIndicator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,28,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "oms_addEventIndicator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,21,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "oms_addExternalModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,20,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "oms_addSignalsToResults"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,23,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "oms_addStaticValueIndicator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,27,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "oms_addSubModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,15,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "oms_addSystem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,13,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "oms_addTimeIndicator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,20,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "oms_addTLMBus"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,13,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "oms_addTLMConnection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,20,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "oms_compareSimulationResults"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,28,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "oms_copySystem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,14,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "oms_delete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,10,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "oms_deleteConnection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,20,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "oms_deleteConnectorFromBus"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,26,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "oms_deleteConnectorFromTLMBus"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,29,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "oms_export"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,10,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "oms_exportDependencyGraphs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,26,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "oms_exportSnapshot"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,18,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "oms_extractFMIKind"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,18,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "oms_getBoolean"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,14,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "oms_getFixedStepSize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,20,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "oms_getInteger"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,14,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "oms_getModelState"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,17,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "oms_getReal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,11,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "oms_getSolver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,13,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "oms_getStartTime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,16,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "oms_getStopTime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,15,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "oms_getSubModelPath"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,19,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "oms_getSystemType"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,17,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "oms_getTolerance"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,16,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "oms_getVariableStepSize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,23,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "oms_faultInjection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,18,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "oms_importFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,14,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "oms_importSnapshot"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,18,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "oms_initialize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,14,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "oms_instantiate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,15,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "oms_list"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,8,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "oms_listUnconnectedConnectors"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,29,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "oms_loadSnapshot"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,16,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "oms_newModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,12,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "oms_removeSignalsFromResults"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,28,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "oms_rename"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,10,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "oms_reset"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,9,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "oms_RunFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,11,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "oms_setBoolean"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,14,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "oms_setCommandLineOption"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,24,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "oms_setFixedStepSize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,20,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "oms_setInteger"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,14,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "oms_setLogFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,14,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "oms_setLoggingInterval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,22,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "oms_setLoggingLevel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,19,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "oms_setReal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,11,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "oms_setRealInputDerivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,26,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "oms_setResultFile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,17,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "oms_setSignalFilter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,19,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "oms_setSolver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,13,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "oms_setStartTime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,16,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "oms_setStopTime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,15,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "oms_setTempDirectory"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,20,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "oms_setTLMPositionAndOrientation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,32,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "oms_setTLMSocketData"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,20,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "oms_setTolerance"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,16,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "oms_setVariableStepSize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,23,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "oms_setWorkingDirectory"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,23,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "oms_simulate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,12,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "oms_stepUntil"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,13,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "oms_terminate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,13,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "oms_getVersion"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,14,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#include "util/modelica.h"

#include "CevalScriptOMSimulator_includes.h"



DLLDirection
modelica_metatype omc_CevalScriptOMSimulator_ceval(threadData_t *threadData, modelica_string _inFunctionName, modelica_metatype _inVals)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_string tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inFunctionName;
    tmp4_2 = _inVals;
    {
      modelica_string _cref = NULL;
      modelica_string _crefA = NULL;
      modelica_string _crefB = NULL;
      modelica_string _busCref = NULL;
      modelica_string _connectorCref = NULL;
      modelica_string _stype_ = NULL;
      modelica_string _signal = NULL;
      modelica_string _s_lower = NULL;
      modelica_string _s_upper = NULL;
      modelica_string _path = NULL;
      modelica_string _startscript = NULL;
      modelica_string _regex = NULL;
      modelica_string _fmuPath = NULL;
      modelica_string _filenameA = NULL;
      modelica_string _filenameB = NULL;
      modelica_string _var = NULL;
      modelica_string _source = NULL;
      modelica_string _target = NULL;
      modelica_string _filename = NULL;
      modelica_string _initialization = NULL;
      modelica_string _event = NULL;
      modelica_string _simulation = NULL;
      modelica_string _contents = NULL;
      modelica_string _snapshot = NULL;
      modelica_string _newCref = NULL;
      modelica_string _cmd = NULL;
      modelica_string _newTempDir = NULL;
      modelica_string _address = NULL;
      modelica_string _newWorkingDir = NULL;
      modelica_string _version = NULL;
      modelica_real _stepSize;
      modelica_real _lower;
      modelica_real _upper;
      modelica_real _delay;
      modelica_real _alpha;
      modelica_real _linearimpedance;
      modelica_real _angularimpedance;
      modelica_real _relTol;
      modelica_real _absTol;
      modelica_real _faultValue;
      modelica_real _loggingInterval;
      modelica_real _rvalue;
      modelica_real _startTime;
      modelica_real _stopTime;
      modelica_real _x1;
      modelica_real _x2;
      modelica_real _x3;
      modelica_real _A11;
      modelica_real _A12;
      modelica_real _A13;
      modelica_real _A21;
      modelica_real _A22;
      modelica_real _A23;
      modelica_real _A31;
      modelica_real _A32;
      modelica_real _A33;
      modelica_real _absoluteTolerance;
      modelica_real _relativeTolerance;
      modelica_real _initialStepSize;
      modelica_real _minimumStepSize;
      modelica_real _maximumStepSize;
      modelica_integer _status;
      modelica_integer _causality;
      modelica_integer _type_;
      modelica_integer _domain;
      modelica_integer _kind;
      modelica_integer _faultType;
      modelica_integer _ivalue;
      modelica_integer _logLevel;
      modelica_integer _bufferSize;
      modelica_integer _solver;
      modelica_integer _dimensions;
      modelica_integer _interpolation;
      modelica_integer _managerPort;
      modelica_integer _monitorPort;
      modelica_boolean _b;
      int tmp4;
      // _cref has no default value.
      // _crefA has no default value.
      // _crefB has no default value.
      // _busCref has no default value.
      // _connectorCref has no default value.
      // _stype_ has no default value.
      // _signal has no default value.
      // _s_lower has no default value.
      // _s_upper has no default value.
      // _path has no default value.
      // _startscript has no default value.
      // _regex has no default value.
      // _fmuPath has no default value.
      // _filenameA has no default value.
      // _filenameB has no default value.
      // _var has no default value.
      // _source has no default value.
      // _target has no default value.
      // _filename has no default value.
      // _initialization has no default value.
      // _event has no default value.
      // _simulation has no default value.
      // _contents has no default value.
      // _snapshot has no default value.
      // _newCref has no default value.
      // _cmd has no default value.
      // _newTempDir has no default value.
      // _address has no default value.
      // _newWorkingDir has no default value.
      // _version has no default value.
      // _stepSize has no default value.
      // _lower has no default value.
      // _upper has no default value.
      // _delay has no default value.
      // _alpha has no default value.
      // _linearimpedance has no default value.
      // _angularimpedance has no default value.
      // _relTol has no default value.
      // _absTol has no default value.
      // _faultValue has no default value.
      // _loggingInterval has no default value.
      // _rvalue has no default value.
      // _startTime has no default value.
      // _stopTime has no default value.
      // _x1 has no default value.
      // _x2 has no default value.
      // _x3 has no default value.
      // _A11 has no default value.
      // _A12 has no default value.
      // _A13 has no default value.
      // _A21 has no default value.
      // _A22 has no default value.
      // _A23 has no default value.
      // _A31 has no default value.
      // _A32 has no default value.
      // _A33 has no default value.
      // _absoluteTolerance has no default value.
      // _relativeTolerance has no default value.
      // _initialStepSize has no default value.
      // _minimumStepSize has no default value.
      // _maximumStepSize has no default value.
      // _status has no default value.
      // _causality has no default value.
      // _type_ has no default value.
      // _domain has no default value.
      // _kind has no default value.
      // _faultType has no default value.
      // _ivalue has no default value.
      // _logLevel has no default value.
      // _bufferSize has no default value.
      // _solver has no default value.
      // _dimensions has no default value.
      // _interpolation has no default value.
      // _managerPort has no default value.
      // _monitorPort has no default value.
      // _b has no default value.
      {
        switch (MMC_SWITCH_CAST(stringHashDjb2Mod(tmp4_1,4096))) {
        case 3361 /* loadOMSimulator */: {
          modelica_metatype tmpMeta5;
          if (15 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT0), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_loadOMSimulator(threadData);
          tmpMeta5 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 2948 /* unloadOMSimulator */: {
          modelica_metatype tmpMeta6;
          if (17 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT1), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_unloadOMSimulator(threadData);
          tmpMeta6 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 3142 /* oms_addBus */: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT2), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_2);
          tmpMeta8 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          _cref = tmpMeta9;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addBus(threadData, _cref);
          tmpMeta10 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 2540 /* oms_addConnection */: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (17 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT3), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_2);
          tmpMeta12 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmpMeta12);
          tmpMeta15 = MMC_CDR(tmpMeta12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (!listEmpty(tmpMeta15)) goto tmp3_end;
          _crefA = tmpMeta13;
          _crefB = tmpMeta16;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addConnection(threadData, _crefA, _crefB);
          tmpMeta17 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 647 /* oms_addConnector */: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT4), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_2);
          tmpMeta19 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,2,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (listEmpty(tmpMeta19)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmpMeta19);
          tmpMeta22 = MMC_CDR(tmpMeta19);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,4,2) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          if (listEmpty(tmpMeta22)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmpMeta22);
          tmpMeta26 = MMC_CDR(tmpMeta22);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,4,2) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 3));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          if (!listEmpty(tmpMeta26)) goto tmp3_end;
          _cref = tmpMeta20;
          _causality = tmp24  /* pattern as ty=Integer */;
          _type_ = tmp28  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addConnector(threadData, _cref, ((modelica_integer) -1) + _causality, ((modelica_integer) -1) + _type_);
          tmpMeta29 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta29;
          goto tmp3_done;
        }
        case 3988 /* oms_addConnectorToBus */: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (21 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT5), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmp4_2);
          tmpMeta31 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,2,1) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          if (listEmpty(tmpMeta31)) goto tmp3_end;
          tmpMeta33 = MMC_CAR(tmpMeta31);
          tmpMeta34 = MMC_CDR(tmpMeta31);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,2,1) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 2));
          if (!listEmpty(tmpMeta34)) goto tmp3_end;
          _busCref = tmpMeta32;
          _connectorCref = tmpMeta35;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addConnectorToBus(threadData, _busCref, _connectorCref);
          tmpMeta36 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 1953 /* oms_addConnectorToTLMBus */: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          if (24 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta37 = MMC_CAR(tmp4_2);
          tmpMeta38 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,2,1) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          if (listEmpty(tmpMeta38)) goto tmp3_end;
          tmpMeta40 = MMC_CAR(tmpMeta38);
          tmpMeta41 = MMC_CDR(tmpMeta38);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,2,1) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
          if (listEmpty(tmpMeta41)) goto tmp3_end;
          tmpMeta43 = MMC_CAR(tmpMeta41);
          tmpMeta44 = MMC_CDR(tmpMeta41);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,2,1) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
          if (!listEmpty(tmpMeta44)) goto tmp3_end;
          _busCref = tmpMeta39;
          _connectorCref = tmpMeta42;
          _stype_ = tmpMeta45;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addConnectorToTLMBus(threadData, _busCref, _connectorCref, _stype_);
          tmpMeta46 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta46;
          goto tmp3_done;
        }
        case 1723 /* oms_addDynamicValueIndicator */: {
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_real tmp59;
          modelica_metatype tmpMeta60;
          if (28 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta47 = MMC_CAR(tmp4_2);
          tmpMeta48 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,2,1) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
          if (listEmpty(tmpMeta48)) goto tmp3_end;
          tmpMeta50 = MMC_CAR(tmpMeta48);
          tmpMeta51 = MMC_CDR(tmpMeta48);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,2,1) == 0) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 2));
          if (listEmpty(tmpMeta51)) goto tmp3_end;
          tmpMeta53 = MMC_CAR(tmpMeta51);
          tmpMeta54 = MMC_CDR(tmpMeta51);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,2,1) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
          if (listEmpty(tmpMeta54)) goto tmp3_end;
          tmpMeta56 = MMC_CAR(tmpMeta54);
          tmpMeta57 = MMC_CDR(tmpMeta54);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta56,1,1) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 2));
          tmp59 = mmc_unbox_real(tmpMeta58);
          if (!listEmpty(tmpMeta57)) goto tmp3_end;
          _signal = tmpMeta49;
          _s_lower = tmpMeta52;
          _s_upper = tmpMeta55;
          _stepSize = tmp59  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addDynamicValueIndicator(threadData, _signal, _s_lower, _s_upper, _stepSize);
          tmpMeta60 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta60;
          goto tmp3_done;
        }
        case 699 /* oms_addEventIndicator */: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          if (21 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta61 = MMC_CAR(tmp4_2);
          tmpMeta62 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,2,1) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          if (!listEmpty(tmpMeta62)) goto tmp3_end;
          _signal = tmpMeta63;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addEventIndicator(threadData, _signal);
          tmpMeta64 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta64;
          goto tmp3_done;
        }
        case 3984 /* oms_addExternalModel */: {
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta65 = MMC_CAR(tmp4_2);
          tmpMeta66 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta65,2,1) == 0) goto tmp3_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 2));
          if (listEmpty(tmpMeta66)) goto tmp3_end;
          tmpMeta68 = MMC_CAR(tmpMeta66);
          tmpMeta69 = MMC_CDR(tmpMeta66);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta68,2,1) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 2));
          if (listEmpty(tmpMeta69)) goto tmp3_end;
          tmpMeta71 = MMC_CAR(tmpMeta69);
          tmpMeta72 = MMC_CDR(tmpMeta69);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta71,2,1) == 0) goto tmp3_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 2));
          if (!listEmpty(tmpMeta72)) goto tmp3_end;
          _cref = tmpMeta67;
          _path = tmpMeta70;
          _startscript = tmpMeta73;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addExternalModel(threadData, _cref, _path, _startscript);
          tmpMeta74 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta74;
          goto tmp3_done;
        }
        case 3618 /* oms_addSignalsToResults */: {
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          if (23 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT10), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta75 = MMC_CAR(tmp4_2);
          tmpMeta76 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta75,2,1) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 2));
          if (listEmpty(tmpMeta76)) goto tmp3_end;
          tmpMeta78 = MMC_CAR(tmpMeta76);
          tmpMeta79 = MMC_CDR(tmpMeta76);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta78,2,1) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta78), 2));
          if (!listEmpty(tmpMeta79)) goto tmp3_end;
          _cref = tmpMeta77;
          _regex = tmpMeta80;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addSignalsToResults(threadData, _cref, _regex);
          tmpMeta81 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta81;
          goto tmp3_done;
        }
        case 3614 /* oms_addStaticValueIndicator */: {
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_real tmp88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_real tmp92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_real tmp96;
          modelica_metatype tmpMeta97;
          if (27 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT11), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta82 = MMC_CAR(tmp4_2);
          tmpMeta83 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta82,2,1) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 2));
          if (listEmpty(tmpMeta83)) goto tmp3_end;
          tmpMeta85 = MMC_CAR(tmpMeta83);
          tmpMeta86 = MMC_CDR(tmpMeta83);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta85,1,1) == 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta85), 2));
          tmp88 = mmc_unbox_real(tmpMeta87);
          if (listEmpty(tmpMeta86)) goto tmp3_end;
          tmpMeta89 = MMC_CAR(tmpMeta86);
          tmpMeta90 = MMC_CDR(tmpMeta86);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta89,1,1) == 0) goto tmp3_end;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 2));
          tmp92 = mmc_unbox_real(tmpMeta91);
          if (listEmpty(tmpMeta90)) goto tmp3_end;
          tmpMeta93 = MMC_CAR(tmpMeta90);
          tmpMeta94 = MMC_CDR(tmpMeta90);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta93,1,1) == 0) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta93), 2));
          tmp96 = mmc_unbox_real(tmpMeta95);
          if (!listEmpty(tmpMeta94)) goto tmp3_end;
          _signal = tmpMeta84;
          _lower = tmp88  /* pattern as ty=Real */;
          _upper = tmp92  /* pattern as ty=Real */;
          _stepSize = tmp96  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addStaticValueIndicator(threadData, _signal, _lower, _upper, _stepSize);
          tmpMeta97 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta97;
          goto tmp3_done;
        }
        case 3063 /* oms_addSubModel */: {
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          if (15 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT12), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta98 = MMC_CAR(tmp4_2);
          tmpMeta99 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta98,2,1) == 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta98), 2));
          if (listEmpty(tmpMeta99)) goto tmp3_end;
          tmpMeta101 = MMC_CAR(tmpMeta99);
          tmpMeta102 = MMC_CDR(tmpMeta99);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta101,2,1) == 0) goto tmp3_end;
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 2));
          if (!listEmpty(tmpMeta102)) goto tmp3_end;
          _cref = tmpMeta100;
          _fmuPath = tmpMeta103;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addSubModel(threadData, _cref, _fmuPath);
          tmpMeta104 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta104;
          goto tmp3_done;
        }
        case 3617 /* oms_addSystem */: {
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_integer tmp111;
          modelica_metatype tmpMeta112;
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT13), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta105 = MMC_CAR(tmp4_2);
          tmpMeta106 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta105,2,1) == 0) goto tmp3_end;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta105), 2));
          if (listEmpty(tmpMeta106)) goto tmp3_end;
          tmpMeta108 = MMC_CAR(tmpMeta106);
          tmpMeta109 = MMC_CDR(tmpMeta106);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta108,4,2) == 0) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta108), 3));
          tmp111 = mmc_unbox_integer(tmpMeta110);
          if (!listEmpty(tmpMeta109)) goto tmp3_end;
          _cref = tmpMeta107;
          _type_ = tmp111  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addSystem(threadData, _cref, ((modelica_integer) -1) + _type_);
          tmpMeta112 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta112;
          goto tmp3_done;
        }
        case 1800 /* oms_addTimeIndicator */: {
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT14), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta113 = MMC_CAR(tmp4_2);
          tmpMeta114 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta113,2,1) == 0) goto tmp3_end;
          tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta113), 2));
          if (!listEmpty(tmpMeta114)) goto tmp3_end;
          _signal = tmpMeta115;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addTimeIndicator(threadData, _signal);
          tmpMeta116 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta116;
          goto tmp3_done;
        }
        case 3859 /* oms_addTLMBus */: {
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_integer tmp123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_integer tmp127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_integer tmp131;
          modelica_metatype tmpMeta132;
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT15), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta117 = MMC_CAR(tmp4_2);
          tmpMeta118 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta117,2,1) == 0) goto tmp3_end;
          tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta117), 2));
          if (listEmpty(tmpMeta118)) goto tmp3_end;
          tmpMeta120 = MMC_CAR(tmpMeta118);
          tmpMeta121 = MMC_CDR(tmpMeta118);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta120,4,2) == 0) goto tmp3_end;
          tmpMeta122 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta120), 3));
          tmp123 = mmc_unbox_integer(tmpMeta122);
          if (listEmpty(tmpMeta121)) goto tmp3_end;
          tmpMeta124 = MMC_CAR(tmpMeta121);
          tmpMeta125 = MMC_CDR(tmpMeta121);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta124,0,1) == 0) goto tmp3_end;
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta124), 2));
          tmp127 = mmc_unbox_integer(tmpMeta126);
          if (listEmpty(tmpMeta125)) goto tmp3_end;
          tmpMeta128 = MMC_CAR(tmpMeta125);
          tmpMeta129 = MMC_CDR(tmpMeta125);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta128,4,2) == 0) goto tmp3_end;
          tmpMeta130 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta128), 3));
          tmp131 = mmc_unbox_integer(tmpMeta130);
          if (!listEmpty(tmpMeta129)) goto tmp3_end;
          _cref = tmpMeta119;
          _domain = tmp123  /* pattern as ty=Integer */;
          _dimensions = tmp127  /* pattern as ty=Integer */;
          _interpolation = tmp131  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addTLMBus(threadData, _cref, ((modelica_integer) -1) + _domain, _dimensions, ((modelica_integer) -1) + _interpolation);
          tmpMeta132 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta132;
          goto tmp3_done;
        }
        case 1049 /* oms_addTLMConnection */: {
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          modelica_real tmp142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_real tmp146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_real tmp150;
          modelica_metatype tmpMeta151;
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          modelica_real tmp154;
          modelica_metatype tmpMeta155;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT16), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta133 = MMC_CAR(tmp4_2);
          tmpMeta134 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta133,2,1) == 0) goto tmp3_end;
          tmpMeta135 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta133), 2));
          if (listEmpty(tmpMeta134)) goto tmp3_end;
          tmpMeta136 = MMC_CAR(tmpMeta134);
          tmpMeta137 = MMC_CDR(tmpMeta134);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta136,2,1) == 0) goto tmp3_end;
          tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta136), 2));
          if (listEmpty(tmpMeta137)) goto tmp3_end;
          tmpMeta139 = MMC_CAR(tmpMeta137);
          tmpMeta140 = MMC_CDR(tmpMeta137);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta139,1,1) == 0) goto tmp3_end;
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 2));
          tmp142 = mmc_unbox_real(tmpMeta141);
          if (listEmpty(tmpMeta140)) goto tmp3_end;
          tmpMeta143 = MMC_CAR(tmpMeta140);
          tmpMeta144 = MMC_CDR(tmpMeta140);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta143,1,1) == 0) goto tmp3_end;
          tmpMeta145 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta143), 2));
          tmp146 = mmc_unbox_real(tmpMeta145);
          if (listEmpty(tmpMeta144)) goto tmp3_end;
          tmpMeta147 = MMC_CAR(tmpMeta144);
          tmpMeta148 = MMC_CDR(tmpMeta144);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta147,1,1) == 0) goto tmp3_end;
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta147), 2));
          tmp150 = mmc_unbox_real(tmpMeta149);
          if (listEmpty(tmpMeta148)) goto tmp3_end;
          tmpMeta151 = MMC_CAR(tmpMeta148);
          tmpMeta152 = MMC_CDR(tmpMeta148);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta151,1,1) == 0) goto tmp3_end;
          tmpMeta153 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 2));
          tmp154 = mmc_unbox_real(tmpMeta153);
          if (!listEmpty(tmpMeta152)) goto tmp3_end;
          _crefA = tmpMeta135;
          _crefB = tmpMeta138;
          _delay = tmp142  /* pattern as ty=Real */;
          _alpha = tmp146  /* pattern as ty=Real */;
          _linearimpedance = tmp150  /* pattern as ty=Real */;
          _angularimpedance = tmp154  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__addTLMConnection(threadData, _crefA, _crefB, _delay, _alpha, _linearimpedance, _angularimpedance);
          tmpMeta155 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta155;
          goto tmp3_done;
        }
        case 3569 /* oms_compareSimulationResults */: {
          modelica_metatype tmpMeta156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_metatype tmpMeta159;
          modelica_metatype tmpMeta160;
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          modelica_real tmp168;
          modelica_metatype tmpMeta169;
          modelica_metatype tmpMeta170;
          modelica_metatype tmpMeta171;
          modelica_real tmp172;
          modelica_metatype tmpMeta173;
          if (28 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT17), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta156 = MMC_CAR(tmp4_2);
          tmpMeta157 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta156,2,1) == 0) goto tmp3_end;
          tmpMeta158 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta156), 2));
          if (listEmpty(tmpMeta157)) goto tmp3_end;
          tmpMeta159 = MMC_CAR(tmpMeta157);
          tmpMeta160 = MMC_CDR(tmpMeta157);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta159,2,1) == 0) goto tmp3_end;
          tmpMeta161 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta159), 2));
          if (listEmpty(tmpMeta160)) goto tmp3_end;
          tmpMeta162 = MMC_CAR(tmpMeta160);
          tmpMeta163 = MMC_CDR(tmpMeta160);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta162,2,1) == 0) goto tmp3_end;
          tmpMeta164 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta162), 2));
          if (listEmpty(tmpMeta163)) goto tmp3_end;
          tmpMeta165 = MMC_CAR(tmpMeta163);
          tmpMeta166 = MMC_CDR(tmpMeta163);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta165,1,1) == 0) goto tmp3_end;
          tmpMeta167 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta165), 2));
          tmp168 = mmc_unbox_real(tmpMeta167);
          if (listEmpty(tmpMeta166)) goto tmp3_end;
          tmpMeta169 = MMC_CAR(tmpMeta166);
          tmpMeta170 = MMC_CDR(tmpMeta166);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta169,1,1) == 0) goto tmp3_end;
          tmpMeta171 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta169), 2));
          tmp172 = mmc_unbox_real(tmpMeta171);
          if (!listEmpty(tmpMeta170)) goto tmp3_end;
          _filenameA = tmpMeta158;
          _filenameB = tmpMeta161;
          _var = tmpMeta164;
          _relTol = tmp168  /* pattern as ty=Real */;
          _absTol = tmp172  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__compareSimulationResults(threadData, _filenameA, _filenameB, _var, _relTol, _absTol);
          tmpMeta173 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta173;
          goto tmp3_done;
        }
        case 3251 /* oms_copySystem */: {
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta176;
          modelica_metatype tmpMeta177;
          modelica_metatype tmpMeta178;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT18), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta174 = MMC_CAR(tmp4_2);
          tmpMeta175 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta174,2,1) == 0) goto tmp3_end;
          tmpMeta176 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta174), 2));
          if (listEmpty(tmpMeta175)) goto tmp3_end;
          tmpMeta177 = MMC_CAR(tmpMeta175);
          tmpMeta178 = MMC_CDR(tmpMeta175);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta177,2,1) == 0) goto tmp3_end;
          tmpMeta179 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta177), 2));
          if (!listEmpty(tmpMeta178)) goto tmp3_end;
          _source = tmpMeta176;
          _target = tmpMeta179;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__copySystem(threadData, _source, _target);
          tmpMeta180 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta180;
          goto tmp3_done;
        }
        case 1638 /* oms_delete */: {
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta184;
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT19), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta181 = MMC_CAR(tmp4_2);
          tmpMeta182 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta181,2,1) == 0) goto tmp3_end;
          tmpMeta183 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta181), 2));
          if (!listEmpty(tmpMeta182)) goto tmp3_end;
          _cref = tmpMeta183;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__delete(threadData, _cref);
          tmpMeta184 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta184;
          goto tmp3_done;
        }
        case 1878 /* oms_deleteConnection */: {
          modelica_metatype tmpMeta185;
          modelica_metatype tmpMeta186;
          modelica_metatype tmpMeta187;
          modelica_metatype tmpMeta188;
          modelica_metatype tmpMeta189;
          modelica_metatype tmpMeta190;
          modelica_metatype tmpMeta191;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT20), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta185 = MMC_CAR(tmp4_2);
          tmpMeta186 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta185,2,1) == 0) goto tmp3_end;
          tmpMeta187 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta185), 2));
          if (listEmpty(tmpMeta186)) goto tmp3_end;
          tmpMeta188 = MMC_CAR(tmpMeta186);
          tmpMeta189 = MMC_CDR(tmpMeta186);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta188,2,1) == 0) goto tmp3_end;
          tmpMeta190 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta188), 2));
          if (!listEmpty(tmpMeta189)) goto tmp3_end;
          _crefA = tmpMeta187;
          _crefB = tmpMeta190;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__deleteConnection(threadData, _crefA, _crefB);
          tmpMeta191 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta191;
          goto tmp3_done;
        }
        case 2959 /* oms_deleteConnectorFromBus */: {
          modelica_metatype tmpMeta192;
          modelica_metatype tmpMeta193;
          modelica_metatype tmpMeta194;
          modelica_metatype tmpMeta195;
          modelica_metatype tmpMeta196;
          modelica_metatype tmpMeta197;
          modelica_metatype tmpMeta198;
          if (26 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT21), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta192 = MMC_CAR(tmp4_2);
          tmpMeta193 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta192,2,1) == 0) goto tmp3_end;
          tmpMeta194 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta192), 2));
          if (listEmpty(tmpMeta193)) goto tmp3_end;
          tmpMeta195 = MMC_CAR(tmpMeta193);
          tmpMeta196 = MMC_CDR(tmpMeta193);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta195,2,1) == 0) goto tmp3_end;
          tmpMeta197 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta195), 2));
          if (!listEmpty(tmpMeta196)) goto tmp3_end;
          _busCref = tmpMeta194;
          _connectorCref = tmpMeta197;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__deleteConnectorFromBus(threadData, _busCref, _connectorCref);
          tmpMeta198 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta198;
          goto tmp3_done;
        }
        case 1468 /* oms_deleteConnectorFromTLMBus */: {
          modelica_metatype tmpMeta199;
          modelica_metatype tmpMeta200;
          modelica_metatype tmpMeta201;
          modelica_metatype tmpMeta202;
          modelica_metatype tmpMeta203;
          modelica_metatype tmpMeta204;
          modelica_metatype tmpMeta205;
          if (29 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta199 = MMC_CAR(tmp4_2);
          tmpMeta200 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta199,2,1) == 0) goto tmp3_end;
          tmpMeta201 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta199), 2));
          if (listEmpty(tmpMeta200)) goto tmp3_end;
          tmpMeta202 = MMC_CAR(tmpMeta200);
          tmpMeta203 = MMC_CDR(tmpMeta200);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta202,2,1) == 0) goto tmp3_end;
          tmpMeta204 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta202), 2));
          if (!listEmpty(tmpMeta203)) goto tmp3_end;
          _busCref = tmpMeta201;
          _connectorCref = tmpMeta204;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__deleteConnectorFromTLMBus(threadData, _busCref, _connectorCref);
          tmpMeta205 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta205;
          goto tmp3_done;
        }
        case 3189 /* oms_export */: {
          modelica_metatype tmpMeta206;
          modelica_metatype tmpMeta207;
          modelica_metatype tmpMeta208;
          modelica_metatype tmpMeta209;
          modelica_metatype tmpMeta210;
          modelica_metatype tmpMeta211;
          modelica_metatype tmpMeta212;
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta206 = MMC_CAR(tmp4_2);
          tmpMeta207 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta206,2,1) == 0) goto tmp3_end;
          tmpMeta208 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta206), 2));
          if (listEmpty(tmpMeta207)) goto tmp3_end;
          tmpMeta209 = MMC_CAR(tmpMeta207);
          tmpMeta210 = MMC_CDR(tmpMeta207);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta209,2,1) == 0) goto tmp3_end;
          tmpMeta211 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta209), 2));
          if (!listEmpty(tmpMeta210)) goto tmp3_end;
          _cref = tmpMeta208;
          _filename = tmpMeta211;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__export(threadData, _cref, _filename);
          tmpMeta212 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta212;
          goto tmp3_done;
        }
        case 2713 /* oms_exportDependencyGraphs */: {
          modelica_metatype tmpMeta213;
          modelica_metatype tmpMeta214;
          modelica_metatype tmpMeta215;
          modelica_metatype tmpMeta216;
          modelica_metatype tmpMeta217;
          modelica_metatype tmpMeta218;
          modelica_metatype tmpMeta219;
          modelica_metatype tmpMeta220;
          modelica_metatype tmpMeta221;
          modelica_metatype tmpMeta222;
          modelica_metatype tmpMeta223;
          modelica_metatype tmpMeta224;
          modelica_metatype tmpMeta225;
          if (26 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta213 = MMC_CAR(tmp4_2);
          tmpMeta214 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta213,2,1) == 0) goto tmp3_end;
          tmpMeta215 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta213), 2));
          if (listEmpty(tmpMeta214)) goto tmp3_end;
          tmpMeta216 = MMC_CAR(tmpMeta214);
          tmpMeta217 = MMC_CDR(tmpMeta214);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta216,2,1) == 0) goto tmp3_end;
          tmpMeta218 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta216), 2));
          if (listEmpty(tmpMeta217)) goto tmp3_end;
          tmpMeta219 = MMC_CAR(tmpMeta217);
          tmpMeta220 = MMC_CDR(tmpMeta217);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta219,2,1) == 0) goto tmp3_end;
          tmpMeta221 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta219), 2));
          if (listEmpty(tmpMeta220)) goto tmp3_end;
          tmpMeta222 = MMC_CAR(tmpMeta220);
          tmpMeta223 = MMC_CDR(tmpMeta220);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta222,2,1) == 0) goto tmp3_end;
          tmpMeta224 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta222), 2));
          if (!listEmpty(tmpMeta223)) goto tmp3_end;
          _cref = tmpMeta215;
          _initialization = tmpMeta218;
          _event = tmpMeta221;
          _simulation = tmpMeta224;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__exportDependencyGraphs(threadData, _cref, _initialization, _event, _simulation);
          tmpMeta225 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta225;
          goto tmp3_done;
        }
        case 1925 /* oms_exportSnapshot */: {
          modelica_metatype tmpMeta226;
          modelica_metatype tmpMeta227;
          modelica_metatype tmpMeta228;
          modelica_metatype tmpMeta229;
          modelica_metatype tmpMeta230;
          modelica_metatype tmpMeta231;
          modelica_metatype tmpMeta232;
          if (18 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta226 = MMC_CAR(tmp4_2);
          tmpMeta227 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta226,2,1) == 0) goto tmp3_end;
          tmpMeta228 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta226), 2));
          if (!listEmpty(tmpMeta227)) goto tmp3_end;
          _cref = tmpMeta228;
          /* Pattern matching succeeded */
          _contents = omc_OMSimulatorExt_oms__exportSnapshot(threadData, _cref ,&_status);
          tmpMeta230 = mmc_mk_box2(5, &Values_Value_STRING__desc, _contents);
          tmpMeta231 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta229 = mmc_mk_cons(tmpMeta230, mmc_mk_cons(tmpMeta231, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta232 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta229);
          tmpMeta1 = tmpMeta232;
          goto tmp3_done;
        }
        case 2064 /* oms_extractFMIKind */: {
          modelica_metatype tmpMeta233;
          modelica_metatype tmpMeta234;
          modelica_metatype tmpMeta235;
          modelica_metatype tmpMeta236;
          modelica_metatype tmpMeta237;
          modelica_metatype tmpMeta238;
          modelica_metatype tmpMeta239;
          if (18 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta233 = MMC_CAR(tmp4_2);
          tmpMeta234 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta233,2,1) == 0) goto tmp3_end;
          tmpMeta235 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta233), 2));
          if (!listEmpty(tmpMeta234)) goto tmp3_end;
          _filename = tmpMeta235;
          /* Pattern matching succeeded */
          _kind = omc_OMSimulatorExt_oms__extractFMIKind(threadData, _filename ,&_status);
          tmpMeta237 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_kind));
          tmpMeta238 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta236 = mmc_mk_cons(tmpMeta237, mmc_mk_cons(tmpMeta238, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta239 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta236);
          tmpMeta1 = tmpMeta239;
          goto tmp3_done;
        }
        case 723 /* oms_getBoolean */: {
          modelica_metatype tmpMeta240;
          modelica_metatype tmpMeta241;
          modelica_metatype tmpMeta242;
          modelica_metatype tmpMeta243;
          modelica_metatype tmpMeta244;
          modelica_metatype tmpMeta245;
          modelica_metatype tmpMeta246;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta240 = MMC_CAR(tmp4_2);
          tmpMeta241 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta240,2,1) == 0) goto tmp3_end;
          tmpMeta242 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta240), 2));
          if (!listEmpty(tmpMeta241)) goto tmp3_end;
          _cref = tmpMeta242;
          /* Pattern matching succeeded */
          _b = omc_OMSimulatorExt_oms__getBoolean(threadData, _cref ,&_status);
          tmpMeta244 = mmc_mk_box2(6, &Values_Value_BOOL__desc, mmc_mk_boolean(_b));
          tmpMeta245 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta243 = mmc_mk_cons(tmpMeta244, mmc_mk_cons(tmpMeta245, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta246 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta243);
          tmpMeta1 = tmpMeta246;
          goto tmp3_done;
        }
        case 2970 /* oms_getFixedStepSize */: {
          modelica_metatype tmpMeta247;
          modelica_metatype tmpMeta248;
          modelica_metatype tmpMeta249;
          modelica_metatype tmpMeta250;
          modelica_metatype tmpMeta251;
          modelica_metatype tmpMeta252;
          modelica_metatype tmpMeta253;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta247 = MMC_CAR(tmp4_2);
          tmpMeta248 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta247,2,1) == 0) goto tmp3_end;
          tmpMeta249 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta247), 2));
          if (!listEmpty(tmpMeta248)) goto tmp3_end;
          _cref = tmpMeta249;
          /* Pattern matching succeeded */
          _rvalue = omc_OMSimulatorExt_oms__getFixedStepSize(threadData, _cref ,&_status);
          tmpMeta251 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_rvalue));
          tmpMeta252 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta250 = mmc_mk_cons(tmpMeta251, mmc_mk_cons(tmpMeta252, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta253 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta250);
          tmpMeta1 = tmpMeta253;
          goto tmp3_done;
        }
        case 97 /* oms_getInteger */: {
          modelica_metatype tmpMeta254;
          modelica_metatype tmpMeta255;
          modelica_metatype tmpMeta256;
          modelica_metatype tmpMeta257;
          modelica_metatype tmpMeta258;
          modelica_metatype tmpMeta259;
          modelica_metatype tmpMeta260;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta254 = MMC_CAR(tmp4_2);
          tmpMeta255 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta254,2,1) == 0) goto tmp3_end;
          tmpMeta256 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta254), 2));
          if (!listEmpty(tmpMeta255)) goto tmp3_end;
          _cref = tmpMeta256;
          /* Pattern matching succeeded */
          _ivalue = omc_OMSimulatorExt_oms__getInteger(threadData, _cref ,&_status);
          tmpMeta258 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_ivalue));
          tmpMeta259 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta257 = mmc_mk_cons(tmpMeta258, mmc_mk_cons(tmpMeta259, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta260 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta257);
          tmpMeta1 = tmpMeta260;
          goto tmp3_done;
        }
        case 3845 /* oms_getModelState */: {
          modelica_metatype tmpMeta261;
          modelica_metatype tmpMeta262;
          modelica_metatype tmpMeta263;
          modelica_metatype tmpMeta264;
          modelica_metatype tmpMeta265;
          modelica_metatype tmpMeta266;
          modelica_metatype tmpMeta267;
          if (17 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta261 = MMC_CAR(tmp4_2);
          tmpMeta262 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta261,2,1) == 0) goto tmp3_end;
          tmpMeta263 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta261), 2));
          if (!listEmpty(tmpMeta262)) goto tmp3_end;
          _cref = tmpMeta263;
          /* Pattern matching succeeded */
          _ivalue = omc_OMSimulatorExt_oms__getModelState(threadData, _cref ,&_status);
          tmpMeta265 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_ivalue));
          tmpMeta266 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta264 = mmc_mk_cons(tmpMeta265, mmc_mk_cons(tmpMeta266, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta267 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta264);
          tmpMeta1 = tmpMeta267;
          goto tmp3_done;
        }
        case 599 /* oms_getReal */: {
          modelica_metatype tmpMeta268;
          modelica_metatype tmpMeta269;
          modelica_metatype tmpMeta270;
          modelica_metatype tmpMeta271;
          modelica_metatype tmpMeta272;
          modelica_metatype tmpMeta273;
          modelica_metatype tmpMeta274;
          if (11 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta268 = MMC_CAR(tmp4_2);
          tmpMeta269 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta268,2,1) == 0) goto tmp3_end;
          tmpMeta270 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta268), 2));
          if (!listEmpty(tmpMeta269)) goto tmp3_end;
          _cref = tmpMeta270;
          /* Pattern matching succeeded */
          _rvalue = omc_OMSimulatorExt_oms__getReal(threadData, _cref ,&_status);
          tmpMeta272 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_rvalue));
          tmpMeta273 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta271 = mmc_mk_cons(tmpMeta272, mmc_mk_cons(tmpMeta273, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta274 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta271);
          tmpMeta1 = tmpMeta274;
          goto tmp3_done;
        }
        case 494 /* oms_getSolver */: {
          modelica_metatype tmpMeta275;
          modelica_metatype tmpMeta276;
          modelica_metatype tmpMeta277;
          modelica_metatype tmpMeta278;
          modelica_metatype tmpMeta279;
          modelica_metatype tmpMeta280;
          modelica_metatype tmpMeta281;
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT32), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta275 = MMC_CAR(tmp4_2);
          tmpMeta276 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta275,2,1) == 0) goto tmp3_end;
          tmpMeta277 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta275), 2));
          if (!listEmpty(tmpMeta276)) goto tmp3_end;
          _cref = tmpMeta277;
          /* Pattern matching succeeded */
          _ivalue = omc_OMSimulatorExt_oms__getSolver(threadData, _cref ,&_status);
          tmpMeta279 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_ivalue));
          tmpMeta280 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta278 = mmc_mk_cons(tmpMeta279, mmc_mk_cons(tmpMeta280, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta281 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta278);
          tmpMeta1 = tmpMeta281;
          goto tmp3_done;
        }
        case 1552 /* oms_getStartTime */: {
          modelica_metatype tmpMeta282;
          modelica_metatype tmpMeta283;
          modelica_metatype tmpMeta284;
          modelica_metatype tmpMeta285;
          modelica_metatype tmpMeta286;
          modelica_metatype tmpMeta287;
          modelica_metatype tmpMeta288;
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT33), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta282 = MMC_CAR(tmp4_2);
          tmpMeta283 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta282,2,1) == 0) goto tmp3_end;
          tmpMeta284 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta282), 2));
          if (!listEmpty(tmpMeta283)) goto tmp3_end;
          _cref = tmpMeta284;
          /* Pattern matching succeeded */
          _rvalue = omc_OMSimulatorExt_oms__getStartTime(threadData, _cref ,&_status);
          tmpMeta286 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_rvalue));
          tmpMeta287 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta285 = mmc_mk_cons(tmpMeta286, mmc_mk_cons(tmpMeta287, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta288 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta285);
          tmpMeta1 = tmpMeta288;
          goto tmp3_done;
        }
        case 456 /* oms_getStopTime */: {
          modelica_metatype tmpMeta289;
          modelica_metatype tmpMeta290;
          modelica_metatype tmpMeta291;
          modelica_metatype tmpMeta292;
          modelica_metatype tmpMeta293;
          modelica_metatype tmpMeta294;
          modelica_metatype tmpMeta295;
          if (15 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT34), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta289 = MMC_CAR(tmp4_2);
          tmpMeta290 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta289,2,1) == 0) goto tmp3_end;
          tmpMeta291 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta289), 2));
          if (!listEmpty(tmpMeta290)) goto tmp3_end;
          _cref = tmpMeta291;
          /* Pattern matching succeeded */
          _rvalue = omc_OMSimulatorExt_oms__getStopTime(threadData, _cref ,&_status);
          tmpMeta293 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_rvalue));
          tmpMeta294 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta292 = mmc_mk_cons(tmpMeta293, mmc_mk_cons(tmpMeta294, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta295 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta292);
          tmpMeta1 = tmpMeta295;
          goto tmp3_done;
        }
        case 3579 /* oms_getSubModelPath */: {
          modelica_metatype tmpMeta296;
          modelica_metatype tmpMeta297;
          modelica_metatype tmpMeta298;
          modelica_metatype tmpMeta299;
          modelica_metatype tmpMeta300;
          modelica_metatype tmpMeta301;
          modelica_metatype tmpMeta302;
          if (19 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT35), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta296 = MMC_CAR(tmp4_2);
          tmpMeta297 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta296,2,1) == 0) goto tmp3_end;
          tmpMeta298 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta296), 2));
          if (!listEmpty(tmpMeta297)) goto tmp3_end;
          _cref = tmpMeta298;
          /* Pattern matching succeeded */
          _path = omc_OMSimulatorExt_oms__getSubModelPath(threadData, _cref ,&_status);
          tmpMeta300 = mmc_mk_box2(5, &Values_Value_STRING__desc, _path);
          tmpMeta301 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta299 = mmc_mk_cons(tmpMeta300, mmc_mk_cons(tmpMeta301, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta302 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta299);
          tmpMeta1 = tmpMeta302;
          goto tmp3_done;
        }
        case 634 /* oms_getSystemType */: {
          modelica_metatype tmpMeta303;
          modelica_metatype tmpMeta304;
          modelica_metatype tmpMeta305;
          modelica_metatype tmpMeta306;
          modelica_metatype tmpMeta307;
          modelica_metatype tmpMeta308;
          modelica_metatype tmpMeta309;
          if (17 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT36), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta303 = MMC_CAR(tmp4_2);
          tmpMeta304 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta303,2,1) == 0) goto tmp3_end;
          tmpMeta305 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta303), 2));
          if (!listEmpty(tmpMeta304)) goto tmp3_end;
          _cref = tmpMeta305;
          /* Pattern matching succeeded */
          _ivalue = omc_OMSimulatorExt_oms__getSystemType(threadData, _cref ,&_status);
          tmpMeta307 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_ivalue));
          tmpMeta308 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta306 = mmc_mk_cons(tmpMeta307, mmc_mk_cons(tmpMeta308, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta309 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta306);
          tmpMeta1 = tmpMeta309;
          goto tmp3_done;
        }
        case 3760 /* oms_getTolerance */: {
          modelica_metatype tmpMeta310;
          modelica_metatype tmpMeta311;
          modelica_metatype tmpMeta312;
          modelica_metatype tmpMeta313;
          modelica_metatype tmpMeta314;
          modelica_metatype tmpMeta315;
          modelica_metatype tmpMeta316;
          modelica_metatype tmpMeta317;
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT37), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta310 = MMC_CAR(tmp4_2);
          tmpMeta311 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta310,2,1) == 0) goto tmp3_end;
          tmpMeta312 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta310), 2));
          if (!listEmpty(tmpMeta311)) goto tmp3_end;
          _cref = tmpMeta312;
          /* Pattern matching succeeded */
          _absoluteTolerance = omc_OMSimulatorExt_oms__getTolerance(threadData, _cref ,&_relativeTolerance ,&_status);
          tmpMeta314 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_absoluteTolerance));
          tmpMeta315 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_relativeTolerance));
          tmpMeta316 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta313 = mmc_mk_cons(tmpMeta314, mmc_mk_cons(tmpMeta315, mmc_mk_cons(tmpMeta316, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta317 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta313);
          tmpMeta1 = tmpMeta317;
          goto tmp3_done;
        }
        case 1808 /* oms_getVariableStepSize */: {
          modelica_metatype tmpMeta318;
          modelica_metatype tmpMeta319;
          modelica_metatype tmpMeta320;
          modelica_metatype tmpMeta321;
          modelica_metatype tmpMeta322;
          modelica_metatype tmpMeta323;
          modelica_metatype tmpMeta324;
          modelica_metatype tmpMeta325;
          modelica_metatype tmpMeta326;
          if (23 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT38), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta318 = MMC_CAR(tmp4_2);
          tmpMeta319 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta318,2,1) == 0) goto tmp3_end;
          tmpMeta320 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta318), 2));
          if (!listEmpty(tmpMeta319)) goto tmp3_end;
          _cref = tmpMeta320;
          /* Pattern matching succeeded */
          _initialStepSize = omc_OMSimulatorExt_oms__getVariableStepSize(threadData, _cref ,&_minimumStepSize ,&_maximumStepSize ,&_status);
          tmpMeta322 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_initialStepSize));
          tmpMeta323 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_minimumStepSize));
          tmpMeta324 = mmc_mk_box2(4, &Values_Value_REAL__desc, mmc_mk_real(_maximumStepSize));
          tmpMeta325 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta321 = mmc_mk_cons(tmpMeta322, mmc_mk_cons(tmpMeta323, mmc_mk_cons(tmpMeta324, mmc_mk_cons(tmpMeta325, MMC_REFSTRUCTLIT(mmc_nil)))));
          tmpMeta326 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta321);
          tmpMeta1 = tmpMeta326;
          goto tmp3_done;
        }
        case 1554 /* oms_faultInjection */: {
          modelica_metatype tmpMeta327;
          modelica_metatype tmpMeta328;
          modelica_metatype tmpMeta329;
          modelica_metatype tmpMeta330;
          modelica_metatype tmpMeta331;
          modelica_metatype tmpMeta332;
          modelica_integer tmp333;
          modelica_metatype tmpMeta334;
          modelica_metatype tmpMeta335;
          modelica_metatype tmpMeta336;
          modelica_real tmp337;
          modelica_metatype tmpMeta338;
          if (18 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT39), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta327 = MMC_CAR(tmp4_2);
          tmpMeta328 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta327,2,1) == 0) goto tmp3_end;
          tmpMeta329 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta327), 2));
          if (listEmpty(tmpMeta328)) goto tmp3_end;
          tmpMeta330 = MMC_CAR(tmpMeta328);
          tmpMeta331 = MMC_CDR(tmpMeta328);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta330,4,2) == 0) goto tmp3_end;
          tmpMeta332 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta330), 3));
          tmp333 = mmc_unbox_integer(tmpMeta332);
          if (listEmpty(tmpMeta331)) goto tmp3_end;
          tmpMeta334 = MMC_CAR(tmpMeta331);
          tmpMeta335 = MMC_CDR(tmpMeta331);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta334,1,1) == 0) goto tmp3_end;
          tmpMeta336 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta334), 2));
          tmp337 = mmc_unbox_real(tmpMeta336);
          if (!listEmpty(tmpMeta335)) goto tmp3_end;
          _signal = tmpMeta329;
          _faultType = tmp333  /* pattern as ty=Integer */;
          _faultValue = tmp337  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__faultInjection(threadData, _signal, ((modelica_integer) -1) + _faultType, _faultValue);
          tmpMeta338 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta338;
          goto tmp3_done;
        }
        case 2030 /* oms_importFile */: {
          modelica_metatype tmpMeta339;
          modelica_metatype tmpMeta340;
          modelica_metatype tmpMeta341;
          modelica_metatype tmpMeta342;
          modelica_metatype tmpMeta343;
          modelica_metatype tmpMeta344;
          modelica_metatype tmpMeta345;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT40), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta339 = MMC_CAR(tmp4_2);
          tmpMeta340 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta339,2,1) == 0) goto tmp3_end;
          tmpMeta341 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta339), 2));
          if (!listEmpty(tmpMeta340)) goto tmp3_end;
          _filename = tmpMeta341;
          /* Pattern matching succeeded */
          _cref = omc_OMSimulatorExt_oms__importFile(threadData, _filename ,&_status);
          tmpMeta343 = mmc_mk_box2(5, &Values_Value_STRING__desc, _cref);
          tmpMeta344 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta342 = mmc_mk_cons(tmpMeta343, mmc_mk_cons(tmpMeta344, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta345 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta342);
          tmpMeta1 = tmpMeta345;
          goto tmp3_done;
        }
        case 1406 /* oms_importSnapshot */: {
          modelica_metatype tmpMeta346;
          modelica_metatype tmpMeta347;
          modelica_metatype tmpMeta348;
          modelica_metatype tmpMeta349;
          modelica_metatype tmpMeta350;
          modelica_metatype tmpMeta351;
          modelica_metatype tmpMeta352;
          if (18 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT41), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta346 = MMC_CAR(tmp4_2);
          tmpMeta347 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta346,2,1) == 0) goto tmp3_end;
          tmpMeta348 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta346), 2));
          if (listEmpty(tmpMeta347)) goto tmp3_end;
          tmpMeta349 = MMC_CAR(tmpMeta347);
          tmpMeta350 = MMC_CDR(tmpMeta347);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta349,2,1) == 0) goto tmp3_end;
          tmpMeta351 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta349), 2));
          if (!listEmpty(tmpMeta350)) goto tmp3_end;
          _cref = tmpMeta348;
          _snapshot = tmpMeta351;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__importSnapshot(threadData, _cref, _snapshot);
          tmpMeta352 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta352;
          goto tmp3_done;
        }
        case 3973 /* oms_initialize */: {
          modelica_metatype tmpMeta353;
          modelica_metatype tmpMeta354;
          modelica_metatype tmpMeta355;
          modelica_metatype tmpMeta356;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT42), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta353 = MMC_CAR(tmp4_2);
          tmpMeta354 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta353,2,1) == 0) goto tmp3_end;
          tmpMeta355 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta353), 2));
          if (!listEmpty(tmpMeta354)) goto tmp3_end;
          _cref = tmpMeta355;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__initialize(threadData, _cref);
          tmpMeta356 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta356;
          goto tmp3_done;
        }
        case 87 /* oms_instantiate */: {
          modelica_metatype tmpMeta357;
          modelica_metatype tmpMeta358;
          modelica_metatype tmpMeta359;
          modelica_metatype tmpMeta360;
          if (15 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT43), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta357 = MMC_CAR(tmp4_2);
          tmpMeta358 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta357,2,1) == 0) goto tmp3_end;
          tmpMeta359 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta357), 2));
          if (!listEmpty(tmpMeta358)) goto tmp3_end;
          _cref = tmpMeta359;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__instantiate(threadData, _cref);
          tmpMeta360 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta360;
          goto tmp3_done;
        }
        case 1231 /* oms_list */: {
          modelica_metatype tmpMeta361;
          modelica_metatype tmpMeta362;
          modelica_metatype tmpMeta363;
          modelica_metatype tmpMeta364;
          modelica_metatype tmpMeta365;
          modelica_metatype tmpMeta366;
          modelica_metatype tmpMeta367;
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT44), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta361 = MMC_CAR(tmp4_2);
          tmpMeta362 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta361,2,1) == 0) goto tmp3_end;
          tmpMeta363 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta361), 2));
          if (!listEmpty(tmpMeta362)) goto tmp3_end;
          _cref = tmpMeta363;
          /* Pattern matching succeeded */
          _contents = omc_OMSimulatorExt_oms__list(threadData, _cref ,&_status);
          tmpMeta365 = mmc_mk_box2(5, &Values_Value_STRING__desc, _contents);
          tmpMeta366 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta364 = mmc_mk_cons(tmpMeta365, mmc_mk_cons(tmpMeta366, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta367 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta364);
          tmpMeta1 = tmpMeta367;
          goto tmp3_done;
        }
        case 3619 /* oms_listUnconnectedConnectors */: {
          modelica_metatype tmpMeta368;
          modelica_metatype tmpMeta369;
          modelica_metatype tmpMeta370;
          modelica_metatype tmpMeta371;
          modelica_metatype tmpMeta372;
          modelica_metatype tmpMeta373;
          modelica_metatype tmpMeta374;
          if (29 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta368 = MMC_CAR(tmp4_2);
          tmpMeta369 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta368,2,1) == 0) goto tmp3_end;
          tmpMeta370 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta368), 2));
          if (!listEmpty(tmpMeta369)) goto tmp3_end;
          _cref = tmpMeta370;
          /* Pattern matching succeeded */
          _contents = omc_OMSimulatorExt_oms__listUnconnectedConnectors(threadData, _cref ,&_status);
          tmpMeta372 = mmc_mk_box2(5, &Values_Value_STRING__desc, _contents);
          tmpMeta373 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta371 = mmc_mk_cons(tmpMeta372, mmc_mk_cons(tmpMeta373, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta374 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta371);
          tmpMeta1 = tmpMeta374;
          goto tmp3_done;
        }
        case 1283 /* oms_loadSnapshot */: {
          modelica_metatype tmpMeta375;
          modelica_metatype tmpMeta376;
          modelica_metatype tmpMeta377;
          modelica_metatype tmpMeta378;
          modelica_metatype tmpMeta379;
          modelica_metatype tmpMeta380;
          modelica_metatype tmpMeta381;
          modelica_metatype tmpMeta382;
          modelica_metatype tmpMeta383;
          modelica_metatype tmpMeta384;
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT46), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta375 = MMC_CAR(tmp4_2);
          tmpMeta376 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta375,2,1) == 0) goto tmp3_end;
          tmpMeta377 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta375), 2));
          if (listEmpty(tmpMeta376)) goto tmp3_end;
          tmpMeta378 = MMC_CAR(tmpMeta376);
          tmpMeta379 = MMC_CDR(tmpMeta376);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta378,2,1) == 0) goto tmp3_end;
          tmpMeta380 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta378), 2));
          if (!listEmpty(tmpMeta379)) goto tmp3_end;
          _cref = tmpMeta377;
          _snapshot = tmpMeta380;
          /* Pattern matching succeeded */
          _newCref = omc_OMSimulatorExt_oms__loadSnapshot(threadData, _cref, _snapshot ,&_status);
          tmpMeta382 = mmc_mk_box2(5, &Values_Value_STRING__desc, _newCref);
          tmpMeta383 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta381 = mmc_mk_cons(tmpMeta382, mmc_mk_cons(tmpMeta383, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta384 = mmc_mk_box2(11, &Values_Value_TUPLE__desc, tmpMeta381);
          tmpMeta1 = tmpMeta384;
          goto tmp3_done;
        }
        case 1742 /* oms_newModel */: {
          modelica_metatype tmpMeta385;
          modelica_metatype tmpMeta386;
          modelica_metatype tmpMeta387;
          modelica_metatype tmpMeta388;
          if (12 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT47), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta385 = MMC_CAR(tmp4_2);
          tmpMeta386 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta385,2,1) == 0) goto tmp3_end;
          tmpMeta387 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta385), 2));
          if (!listEmpty(tmpMeta386)) goto tmp3_end;
          _cref = tmpMeta387;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__newModel(threadData, _cref);
          tmpMeta388 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta388;
          goto tmp3_done;
        }
        case 3928 /* oms_removeSignalsFromResults */: {
          modelica_metatype tmpMeta389;
          modelica_metatype tmpMeta390;
          modelica_metatype tmpMeta391;
          modelica_metatype tmpMeta392;
          modelica_metatype tmpMeta393;
          modelica_metatype tmpMeta394;
          modelica_metatype tmpMeta395;
          if (28 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT48), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta389 = MMC_CAR(tmp4_2);
          tmpMeta390 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta389,2,1) == 0) goto tmp3_end;
          tmpMeta391 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta389), 2));
          if (listEmpty(tmpMeta390)) goto tmp3_end;
          tmpMeta392 = MMC_CAR(tmpMeta390);
          tmpMeta393 = MMC_CDR(tmpMeta390);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta392,2,1) == 0) goto tmp3_end;
          tmpMeta394 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta392), 2));
          if (!listEmpty(tmpMeta393)) goto tmp3_end;
          _cref = tmpMeta391;
          _regex = tmpMeta394;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__removeSignalsFromResults(threadData, _cref, _regex);
          tmpMeta395 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta395;
          goto tmp3_done;
        }
        case 1547 /* oms_rename */: {
          modelica_metatype tmpMeta396;
          modelica_metatype tmpMeta397;
          modelica_metatype tmpMeta398;
          modelica_metatype tmpMeta399;
          modelica_metatype tmpMeta400;
          modelica_metatype tmpMeta401;
          modelica_metatype tmpMeta402;
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT49), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta396 = MMC_CAR(tmp4_2);
          tmpMeta397 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta396,2,1) == 0) goto tmp3_end;
          tmpMeta398 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta396), 2));
          if (listEmpty(tmpMeta397)) goto tmp3_end;
          tmpMeta399 = MMC_CAR(tmpMeta397);
          tmpMeta400 = MMC_CDR(tmpMeta397);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta399,2,1) == 0) goto tmp3_end;
          tmpMeta401 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta399), 2));
          if (!listEmpty(tmpMeta400)) goto tmp3_end;
          _cref = tmpMeta398;
          _newCref = tmpMeta401;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__rename(threadData, _cref, _newCref);
          tmpMeta402 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta402;
          goto tmp3_done;
        }
        case 3766 /* oms_reset */: {
          modelica_metatype tmpMeta403;
          modelica_metatype tmpMeta404;
          modelica_metatype tmpMeta405;
          modelica_metatype tmpMeta406;
          if (9 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta403 = MMC_CAR(tmp4_2);
          tmpMeta404 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta403,2,1) == 0) goto tmp3_end;
          tmpMeta405 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta403), 2));
          if (!listEmpty(tmpMeta404)) goto tmp3_end;
          _cref = tmpMeta405;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__reset(threadData, _cref);
          tmpMeta406 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta406;
          goto tmp3_done;
        }
        case 2920 /* oms_RunFile */: {
          modelica_metatype tmpMeta407;
          modelica_metatype tmpMeta408;
          modelica_metatype tmpMeta409;
          modelica_metatype tmpMeta410;
          if (11 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT51), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta407 = MMC_CAR(tmp4_2);
          tmpMeta408 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta407,2,1) == 0) goto tmp3_end;
          tmpMeta409 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta407), 2));
          if (!listEmpty(tmpMeta408)) goto tmp3_end;
          _filename = tmpMeta409;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__RunFile(threadData, _filename);
          tmpMeta410 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta410;
          goto tmp3_done;
        }
        case 95 /* oms_setBoolean */: {
          modelica_metatype tmpMeta411;
          modelica_metatype tmpMeta412;
          modelica_metatype tmpMeta413;
          modelica_metatype tmpMeta414;
          modelica_metatype tmpMeta415;
          modelica_metatype tmpMeta416;
          modelica_integer tmp417;
          modelica_metatype tmpMeta418;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT52), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta411 = MMC_CAR(tmp4_2);
          tmpMeta412 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta411,2,1) == 0) goto tmp3_end;
          tmpMeta413 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta411), 2));
          if (listEmpty(tmpMeta412)) goto tmp3_end;
          tmpMeta414 = MMC_CAR(tmpMeta412);
          tmpMeta415 = MMC_CDR(tmpMeta412);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta414,3,1) == 0) goto tmp3_end;
          tmpMeta416 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta414), 2));
          tmp417 = mmc_unbox_integer(tmpMeta416);
          if (!listEmpty(tmpMeta415)) goto tmp3_end;
          _cref = tmpMeta413;
          _b = tmp417  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setBoolean(threadData, _cref, _b);
          tmpMeta418 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta418;
          goto tmp3_done;
        }
        case 543 /* oms_setCommandLineOption */: {
          modelica_metatype tmpMeta419;
          modelica_metatype tmpMeta420;
          modelica_metatype tmpMeta421;
          modelica_metatype tmpMeta422;
          if (24 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta419 = MMC_CAR(tmp4_2);
          tmpMeta420 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta419,2,1) == 0) goto tmp3_end;
          tmpMeta421 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta419), 2));
          if (!listEmpty(tmpMeta420)) goto tmp3_end;
          _cmd = tmpMeta421;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setCommandLineOption(threadData, _cmd);
          tmpMeta422 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta422;
          goto tmp3_done;
        }
        case 550 /* oms_setFixedStepSize */: {
          modelica_metatype tmpMeta423;
          modelica_metatype tmpMeta424;
          modelica_metatype tmpMeta425;
          modelica_metatype tmpMeta426;
          modelica_metatype tmpMeta427;
          modelica_metatype tmpMeta428;
          modelica_real tmp429;
          modelica_metatype tmpMeta430;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta423 = MMC_CAR(tmp4_2);
          tmpMeta424 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta423,2,1) == 0) goto tmp3_end;
          tmpMeta425 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta423), 2));
          if (listEmpty(tmpMeta424)) goto tmp3_end;
          tmpMeta426 = MMC_CAR(tmpMeta424);
          tmpMeta427 = MMC_CDR(tmpMeta424);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta426,1,1) == 0) goto tmp3_end;
          tmpMeta428 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta426), 2));
          tmp429 = mmc_unbox_real(tmpMeta428);
          if (!listEmpty(tmpMeta427)) goto tmp3_end;
          _cref = tmpMeta425;
          _stepSize = tmp429  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setFixedStepSize(threadData, _cref, _stepSize);
          tmpMeta430 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta430;
          goto tmp3_done;
        }
        case 3565 /* oms_setInteger */: {
          modelica_metatype tmpMeta431;
          modelica_metatype tmpMeta432;
          modelica_metatype tmpMeta433;
          modelica_metatype tmpMeta434;
          modelica_metatype tmpMeta435;
          modelica_metatype tmpMeta436;
          modelica_integer tmp437;
          modelica_metatype tmpMeta438;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta431 = MMC_CAR(tmp4_2);
          tmpMeta432 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta431,2,1) == 0) goto tmp3_end;
          tmpMeta433 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta431), 2));
          if (listEmpty(tmpMeta432)) goto tmp3_end;
          tmpMeta434 = MMC_CAR(tmpMeta432);
          tmpMeta435 = MMC_CDR(tmpMeta432);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta434,0,1) == 0) goto tmp3_end;
          tmpMeta436 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta434), 2));
          tmp437 = mmc_unbox_integer(tmpMeta436);
          if (!listEmpty(tmpMeta435)) goto tmp3_end;
          _cref = tmpMeta433;
          _ivalue = tmp437  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setInteger(threadData, _cref, _ivalue);
          tmpMeta438 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta438;
          goto tmp3_done;
        }
        case 2017 /* oms_setLogFile */: {
          modelica_metatype tmpMeta439;
          modelica_metatype tmpMeta440;
          modelica_metatype tmpMeta441;
          modelica_metatype tmpMeta442;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta439 = MMC_CAR(tmp4_2);
          tmpMeta440 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta439,2,1) == 0) goto tmp3_end;
          tmpMeta441 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta439), 2));
          if (!listEmpty(tmpMeta440)) goto tmp3_end;
          _filename = tmpMeta441;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setLogFile(threadData, _filename);
          tmpMeta442 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta442;
          goto tmp3_done;
        }
        case 4011 /* oms_setLoggingInterval */: {
          modelica_metatype tmpMeta443;
          modelica_metatype tmpMeta444;
          modelica_metatype tmpMeta445;
          modelica_metatype tmpMeta446;
          modelica_metatype tmpMeta447;
          modelica_metatype tmpMeta448;
          modelica_real tmp449;
          modelica_metatype tmpMeta450;
          if (22 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta443 = MMC_CAR(tmp4_2);
          tmpMeta444 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta443,2,1) == 0) goto tmp3_end;
          tmpMeta445 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta443), 2));
          if (listEmpty(tmpMeta444)) goto tmp3_end;
          tmpMeta446 = MMC_CAR(tmpMeta444);
          tmpMeta447 = MMC_CDR(tmpMeta444);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta446,1,1) == 0) goto tmp3_end;
          tmpMeta448 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta446), 2));
          tmp449 = mmc_unbox_real(tmpMeta448);
          if (!listEmpty(tmpMeta447)) goto tmp3_end;
          _cref = tmpMeta445;
          _loggingInterval = tmp449  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setLoggingInterval(threadData, _cref, _loggingInterval);
          tmpMeta450 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta450;
          goto tmp3_done;
        }
        case 1118 /* oms_setLoggingLevel */: {
          modelica_metatype tmpMeta451;
          modelica_metatype tmpMeta452;
          modelica_metatype tmpMeta453;
          modelica_integer tmp454;
          modelica_metatype tmpMeta455;
          if (19 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta451 = MMC_CAR(tmp4_2);
          tmpMeta452 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta451,0,1) == 0) goto tmp3_end;
          tmpMeta453 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta451), 2));
          tmp454 = mmc_unbox_integer(tmpMeta453);
          if (!listEmpty(tmpMeta452)) goto tmp3_end;
          _logLevel = tmp454  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setLoggingLevel(threadData, _logLevel);
          tmpMeta455 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta455;
          goto tmp3_done;
        }
        case 2915 /* oms_setReal */: {
          modelica_metatype tmpMeta456;
          modelica_metatype tmpMeta457;
          modelica_metatype tmpMeta458;
          modelica_metatype tmpMeta459;
          modelica_metatype tmpMeta460;
          modelica_metatype tmpMeta461;
          modelica_real tmp462;
          modelica_metatype tmpMeta463;
          if (11 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta456 = MMC_CAR(tmp4_2);
          tmpMeta457 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta456,2,1) == 0) goto tmp3_end;
          tmpMeta458 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta456), 2));
          if (listEmpty(tmpMeta457)) goto tmp3_end;
          tmpMeta459 = MMC_CAR(tmpMeta457);
          tmpMeta460 = MMC_CDR(tmpMeta457);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta459,1,1) == 0) goto tmp3_end;
          tmpMeta461 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta459), 2));
          tmp462 = mmc_unbox_real(tmpMeta461);
          if (!listEmpty(tmpMeta460)) goto tmp3_end;
          _cref = tmpMeta458;
          _rvalue = tmp462  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setReal(threadData, _cref, _rvalue);
          tmpMeta463 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta463;
          goto tmp3_done;
        }
        case 3654 /* oms_setRealInputDerivative */: {
          modelica_metatype tmpMeta464;
          modelica_metatype tmpMeta465;
          modelica_metatype tmpMeta466;
          modelica_metatype tmpMeta467;
          modelica_metatype tmpMeta468;
          modelica_metatype tmpMeta469;
          modelica_real tmp470;
          modelica_metatype tmpMeta471;
          if (26 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta464 = MMC_CAR(tmp4_2);
          tmpMeta465 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta464,2,1) == 0) goto tmp3_end;
          tmpMeta466 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta464), 2));
          if (listEmpty(tmpMeta465)) goto tmp3_end;
          tmpMeta467 = MMC_CAR(tmpMeta465);
          tmpMeta468 = MMC_CDR(tmpMeta465);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta467,1,1) == 0) goto tmp3_end;
          tmpMeta469 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta467), 2));
          tmp470 = mmc_unbox_real(tmpMeta469);
          if (!listEmpty(tmpMeta468)) goto tmp3_end;
          _cref = tmpMeta466;
          _rvalue = tmp470  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setRealInputDerivative(threadData, _cref, _rvalue);
          tmpMeta471 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta471;
          goto tmp3_done;
        }
        case 542 /* oms_setResultFile */: {
          modelica_metatype tmpMeta472;
          modelica_metatype tmpMeta473;
          modelica_metatype tmpMeta474;
          modelica_metatype tmpMeta475;
          modelica_metatype tmpMeta476;
          modelica_metatype tmpMeta477;
          modelica_metatype tmpMeta478;
          modelica_metatype tmpMeta479;
          modelica_metatype tmpMeta480;
          modelica_integer tmp481;
          modelica_metatype tmpMeta482;
          if (17 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT61), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta472 = MMC_CAR(tmp4_2);
          tmpMeta473 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta472,2,1) == 0) goto tmp3_end;
          tmpMeta474 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta472), 2));
          if (listEmpty(tmpMeta473)) goto tmp3_end;
          tmpMeta475 = MMC_CAR(tmpMeta473);
          tmpMeta476 = MMC_CDR(tmpMeta473);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta475,2,1) == 0) goto tmp3_end;
          tmpMeta477 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta475), 2));
          if (listEmpty(tmpMeta476)) goto tmp3_end;
          tmpMeta478 = MMC_CAR(tmpMeta476);
          tmpMeta479 = MMC_CDR(tmpMeta476);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta478,0,1) == 0) goto tmp3_end;
          tmpMeta480 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta478), 2));
          tmp481 = mmc_unbox_integer(tmpMeta480);
          if (!listEmpty(tmpMeta479)) goto tmp3_end;
          _cref = tmpMeta474;
          _filename = tmpMeta477;
          _bufferSize = tmp481  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setResultFile(threadData, _cref, _filename, _bufferSize);
          tmpMeta482 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta482;
          goto tmp3_done;
        }
        case 259 /* oms_setSignalFilter */: {
          modelica_metatype tmpMeta483;
          modelica_metatype tmpMeta484;
          modelica_metatype tmpMeta485;
          modelica_metatype tmpMeta486;
          modelica_metatype tmpMeta487;
          modelica_metatype tmpMeta488;
          modelica_metatype tmpMeta489;
          if (19 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT62), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta483 = MMC_CAR(tmp4_2);
          tmpMeta484 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta483,2,1) == 0) goto tmp3_end;
          tmpMeta485 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta483), 2));
          if (listEmpty(tmpMeta484)) goto tmp3_end;
          tmpMeta486 = MMC_CAR(tmpMeta484);
          tmpMeta487 = MMC_CDR(tmpMeta484);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta486,2,1) == 0) goto tmp3_end;
          tmpMeta488 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta486), 2));
          if (!listEmpty(tmpMeta487)) goto tmp3_end;
          _cref = tmpMeta485;
          _regex = tmpMeta488;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setSignalFilter(threadData, _cref, _regex);
          tmpMeta489 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta489;
          goto tmp3_done;
        }
        case 3578 /* oms_setSolver */: {
          modelica_metatype tmpMeta490;
          modelica_metatype tmpMeta491;
          modelica_metatype tmpMeta492;
          modelica_metatype tmpMeta493;
          modelica_metatype tmpMeta494;
          modelica_metatype tmpMeta495;
          modelica_integer tmp496;
          modelica_metatype tmpMeta497;
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT63), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta490 = MMC_CAR(tmp4_2);
          tmpMeta491 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta490,2,1) == 0) goto tmp3_end;
          tmpMeta492 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta490), 2));
          if (listEmpty(tmpMeta491)) goto tmp3_end;
          tmpMeta493 = MMC_CAR(tmpMeta491);
          tmpMeta494 = MMC_CDR(tmpMeta491);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta493,4,2) == 0) goto tmp3_end;
          tmpMeta495 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta493), 3));
          tmp496 = mmc_unbox_integer(tmpMeta495);
          if (!listEmpty(tmpMeta494)) goto tmp3_end;
          _cref = tmpMeta492;
          _solver = tmp496  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setSolver(threadData, _cref, ((modelica_integer) -1) + _solver);
          tmpMeta497 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta497;
          goto tmp3_done;
        }
        case 1692 /* oms_setStartTime */: {
          modelica_metatype tmpMeta498;
          modelica_metatype tmpMeta499;
          modelica_metatype tmpMeta500;
          modelica_metatype tmpMeta501;
          modelica_metatype tmpMeta502;
          modelica_metatype tmpMeta503;
          modelica_real tmp504;
          modelica_metatype tmpMeta505;
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT64), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta498 = MMC_CAR(tmp4_2);
          tmpMeta499 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta498,2,1) == 0) goto tmp3_end;
          tmpMeta500 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta498), 2));
          if (listEmpty(tmpMeta499)) goto tmp3_end;
          tmpMeta501 = MMC_CAR(tmpMeta499);
          tmpMeta502 = MMC_CDR(tmpMeta499);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta501,1,1) == 0) goto tmp3_end;
          tmpMeta503 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta501), 2));
          tmp504 = mmc_unbox_real(tmpMeta503);
          if (!listEmpty(tmpMeta502)) goto tmp3_end;
          _cref = tmpMeta500;
          _startTime = tmp504  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setStartTime(threadData, _cref, _startTime);
          tmpMeta505 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta505;
          goto tmp3_done;
        }
        case 212 /* oms_setStopTime */: {
          modelica_metatype tmpMeta506;
          modelica_metatype tmpMeta507;
          modelica_metatype tmpMeta508;
          modelica_metatype tmpMeta509;
          modelica_metatype tmpMeta510;
          modelica_metatype tmpMeta511;
          modelica_real tmp512;
          modelica_metatype tmpMeta513;
          if (15 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT65), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta506 = MMC_CAR(tmp4_2);
          tmpMeta507 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta506,2,1) == 0) goto tmp3_end;
          tmpMeta508 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta506), 2));
          if (listEmpty(tmpMeta507)) goto tmp3_end;
          tmpMeta509 = MMC_CAR(tmpMeta507);
          tmpMeta510 = MMC_CDR(tmpMeta507);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta509,1,1) == 0) goto tmp3_end;
          tmpMeta511 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta509), 2));
          tmp512 = mmc_unbox_real(tmpMeta511);
          if (!listEmpty(tmpMeta510)) goto tmp3_end;
          _cref = tmpMeta508;
          _stopTime = tmp512  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setStopTime(threadData, _cref, _stopTime);
          tmpMeta513 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta513;
          goto tmp3_done;
        }
        case 2186 /* oms_setTempDirectory */: {
          modelica_metatype tmpMeta514;
          modelica_metatype tmpMeta515;
          modelica_metatype tmpMeta516;
          modelica_metatype tmpMeta517;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT66), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta514 = MMC_CAR(tmp4_2);
          tmpMeta515 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta514,2,1) == 0) goto tmp3_end;
          tmpMeta516 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta514), 2));
          if (!listEmpty(tmpMeta515)) goto tmp3_end;
          _newTempDir = tmpMeta516;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setTempDirectory(threadData, _newTempDir);
          tmpMeta517 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta517;
          goto tmp3_done;
        }
        case 224 /* oms_setTLMPositionAndOrientation */: {
          modelica_metatype tmpMeta518;
          modelica_metatype tmpMeta519;
          modelica_metatype tmpMeta520;
          modelica_metatype tmpMeta521;
          modelica_metatype tmpMeta522;
          modelica_metatype tmpMeta523;
          modelica_real tmp524;
          modelica_metatype tmpMeta525;
          modelica_metatype tmpMeta526;
          modelica_metatype tmpMeta527;
          modelica_real tmp528;
          modelica_metatype tmpMeta529;
          modelica_metatype tmpMeta530;
          modelica_metatype tmpMeta531;
          modelica_real tmp532;
          modelica_metatype tmpMeta533;
          modelica_metatype tmpMeta534;
          modelica_metatype tmpMeta535;
          modelica_real tmp536;
          modelica_metatype tmpMeta537;
          modelica_metatype tmpMeta538;
          modelica_metatype tmpMeta539;
          modelica_real tmp540;
          modelica_metatype tmpMeta541;
          modelica_metatype tmpMeta542;
          modelica_metatype tmpMeta543;
          modelica_real tmp544;
          modelica_metatype tmpMeta545;
          modelica_metatype tmpMeta546;
          modelica_metatype tmpMeta547;
          modelica_real tmp548;
          modelica_metatype tmpMeta549;
          modelica_metatype tmpMeta550;
          modelica_metatype tmpMeta551;
          modelica_real tmp552;
          modelica_metatype tmpMeta553;
          modelica_metatype tmpMeta554;
          modelica_metatype tmpMeta555;
          modelica_real tmp556;
          modelica_metatype tmpMeta557;
          modelica_metatype tmpMeta558;
          modelica_metatype tmpMeta559;
          modelica_real tmp560;
          modelica_metatype tmpMeta561;
          modelica_metatype tmpMeta562;
          modelica_metatype tmpMeta563;
          modelica_real tmp564;
          modelica_metatype tmpMeta565;
          modelica_metatype tmpMeta566;
          modelica_metatype tmpMeta567;
          modelica_real tmp568;
          modelica_metatype tmpMeta569;
          if (32 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT67), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta518 = MMC_CAR(tmp4_2);
          tmpMeta519 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta518,2,1) == 0) goto tmp3_end;
          tmpMeta520 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta518), 2));
          if (listEmpty(tmpMeta519)) goto tmp3_end;
          tmpMeta521 = MMC_CAR(tmpMeta519);
          tmpMeta522 = MMC_CDR(tmpMeta519);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta521,1,1) == 0) goto tmp3_end;
          tmpMeta523 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta521), 2));
          tmp524 = mmc_unbox_real(tmpMeta523);
          if (listEmpty(tmpMeta522)) goto tmp3_end;
          tmpMeta525 = MMC_CAR(tmpMeta522);
          tmpMeta526 = MMC_CDR(tmpMeta522);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta525,1,1) == 0) goto tmp3_end;
          tmpMeta527 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta525), 2));
          tmp528 = mmc_unbox_real(tmpMeta527);
          if (listEmpty(tmpMeta526)) goto tmp3_end;
          tmpMeta529 = MMC_CAR(tmpMeta526);
          tmpMeta530 = MMC_CDR(tmpMeta526);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta529,1,1) == 0) goto tmp3_end;
          tmpMeta531 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta529), 2));
          tmp532 = mmc_unbox_real(tmpMeta531);
          if (listEmpty(tmpMeta530)) goto tmp3_end;
          tmpMeta533 = MMC_CAR(tmpMeta530);
          tmpMeta534 = MMC_CDR(tmpMeta530);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta533,1,1) == 0) goto tmp3_end;
          tmpMeta535 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta533), 2));
          tmp536 = mmc_unbox_real(tmpMeta535);
          if (listEmpty(tmpMeta534)) goto tmp3_end;
          tmpMeta537 = MMC_CAR(tmpMeta534);
          tmpMeta538 = MMC_CDR(tmpMeta534);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta537,1,1) == 0) goto tmp3_end;
          tmpMeta539 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta537), 2));
          tmp540 = mmc_unbox_real(tmpMeta539);
          if (listEmpty(tmpMeta538)) goto tmp3_end;
          tmpMeta541 = MMC_CAR(tmpMeta538);
          tmpMeta542 = MMC_CDR(tmpMeta538);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta541,1,1) == 0) goto tmp3_end;
          tmpMeta543 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta541), 2));
          tmp544 = mmc_unbox_real(tmpMeta543);
          if (listEmpty(tmpMeta542)) goto tmp3_end;
          tmpMeta545 = MMC_CAR(tmpMeta542);
          tmpMeta546 = MMC_CDR(tmpMeta542);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta545,1,1) == 0) goto tmp3_end;
          tmpMeta547 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta545), 2));
          tmp548 = mmc_unbox_real(tmpMeta547);
          if (listEmpty(tmpMeta546)) goto tmp3_end;
          tmpMeta549 = MMC_CAR(tmpMeta546);
          tmpMeta550 = MMC_CDR(tmpMeta546);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta549,1,1) == 0) goto tmp3_end;
          tmpMeta551 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta549), 2));
          tmp552 = mmc_unbox_real(tmpMeta551);
          if (listEmpty(tmpMeta550)) goto tmp3_end;
          tmpMeta553 = MMC_CAR(tmpMeta550);
          tmpMeta554 = MMC_CDR(tmpMeta550);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta553,1,1) == 0) goto tmp3_end;
          tmpMeta555 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta553), 2));
          tmp556 = mmc_unbox_real(tmpMeta555);
          if (listEmpty(tmpMeta554)) goto tmp3_end;
          tmpMeta557 = MMC_CAR(tmpMeta554);
          tmpMeta558 = MMC_CDR(tmpMeta554);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta557,1,1) == 0) goto tmp3_end;
          tmpMeta559 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta557), 2));
          tmp560 = mmc_unbox_real(tmpMeta559);
          if (listEmpty(tmpMeta558)) goto tmp3_end;
          tmpMeta561 = MMC_CAR(tmpMeta558);
          tmpMeta562 = MMC_CDR(tmpMeta558);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta561,1,1) == 0) goto tmp3_end;
          tmpMeta563 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta561), 2));
          tmp564 = mmc_unbox_real(tmpMeta563);
          if (listEmpty(tmpMeta562)) goto tmp3_end;
          tmpMeta565 = MMC_CAR(tmpMeta562);
          tmpMeta566 = MMC_CDR(tmpMeta562);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta565,1,1) == 0) goto tmp3_end;
          tmpMeta567 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta565), 2));
          tmp568 = mmc_unbox_real(tmpMeta567);
          if (!listEmpty(tmpMeta566)) goto tmp3_end;
          _cref = tmpMeta520;
          _x1 = tmp524  /* pattern as ty=Real */;
          _x2 = tmp528  /* pattern as ty=Real */;
          _x3 = tmp532  /* pattern as ty=Real */;
          _A11 = tmp536  /* pattern as ty=Real */;
          _A12 = tmp540  /* pattern as ty=Real */;
          _A13 = tmp544  /* pattern as ty=Real */;
          _A21 = tmp548  /* pattern as ty=Real */;
          _A22 = tmp552  /* pattern as ty=Real */;
          _A23 = tmp556  /* pattern as ty=Real */;
          _A31 = tmp560  /* pattern as ty=Real */;
          _A32 = tmp564  /* pattern as ty=Real */;
          _A33 = tmp568  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setTLMPositionAndOrientation(threadData, _cref, _x1, _x2, _x3, _A11, _A12, _A13, _A21, _A22, _A23, _A31, _A32, _A33);
          tmpMeta569 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta569;
          goto tmp3_done;
        }
        case 2255 /* oms_setTLMSocketData */: {
          modelica_metatype tmpMeta570;
          modelica_metatype tmpMeta571;
          modelica_metatype tmpMeta572;
          modelica_metatype tmpMeta573;
          modelica_metatype tmpMeta574;
          modelica_metatype tmpMeta575;
          modelica_metatype tmpMeta576;
          modelica_metatype tmpMeta577;
          modelica_metatype tmpMeta578;
          modelica_integer tmp579;
          modelica_metatype tmpMeta580;
          modelica_metatype tmpMeta581;
          modelica_metatype tmpMeta582;
          modelica_integer tmp583;
          modelica_metatype tmpMeta584;
          if (20 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT68), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta570 = MMC_CAR(tmp4_2);
          tmpMeta571 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta570,2,1) == 0) goto tmp3_end;
          tmpMeta572 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta570), 2));
          if (listEmpty(tmpMeta571)) goto tmp3_end;
          tmpMeta573 = MMC_CAR(tmpMeta571);
          tmpMeta574 = MMC_CDR(tmpMeta571);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta573,2,1) == 0) goto tmp3_end;
          tmpMeta575 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta573), 2));
          if (listEmpty(tmpMeta574)) goto tmp3_end;
          tmpMeta576 = MMC_CAR(tmpMeta574);
          tmpMeta577 = MMC_CDR(tmpMeta574);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta576,0,1) == 0) goto tmp3_end;
          tmpMeta578 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta576), 2));
          tmp579 = mmc_unbox_integer(tmpMeta578);
          if (listEmpty(tmpMeta577)) goto tmp3_end;
          tmpMeta580 = MMC_CAR(tmpMeta577);
          tmpMeta581 = MMC_CDR(tmpMeta577);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta580,0,1) == 0) goto tmp3_end;
          tmpMeta582 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta580), 2));
          tmp583 = mmc_unbox_integer(tmpMeta582);
          if (!listEmpty(tmpMeta581)) goto tmp3_end;
          _cref = tmpMeta572;
          _address = tmpMeta575;
          _managerPort = tmp579  /* pattern as ty=Integer */;
          _monitorPort = tmp583  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setTLMSocketData(threadData, _cref, _address, _managerPort, _monitorPort);
          tmpMeta584 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta584;
          goto tmp3_done;
        }
        case 3900 /* oms_setTolerance */: {
          modelica_metatype tmpMeta585;
          modelica_metatype tmpMeta586;
          modelica_metatype tmpMeta587;
          modelica_metatype tmpMeta588;
          modelica_metatype tmpMeta589;
          modelica_metatype tmpMeta590;
          modelica_real tmp591;
          modelica_metatype tmpMeta592;
          modelica_metatype tmpMeta593;
          modelica_metatype tmpMeta594;
          modelica_real tmp595;
          modelica_metatype tmpMeta596;
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT69), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta585 = MMC_CAR(tmp4_2);
          tmpMeta586 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta585,2,1) == 0) goto tmp3_end;
          tmpMeta587 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta585), 2));
          if (listEmpty(tmpMeta586)) goto tmp3_end;
          tmpMeta588 = MMC_CAR(tmpMeta586);
          tmpMeta589 = MMC_CDR(tmpMeta586);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta588,1,1) == 0) goto tmp3_end;
          tmpMeta590 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta588), 2));
          tmp591 = mmc_unbox_real(tmpMeta590);
          if (listEmpty(tmpMeta589)) goto tmp3_end;
          tmpMeta592 = MMC_CAR(tmpMeta589);
          tmpMeta593 = MMC_CDR(tmpMeta589);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta592,1,1) == 0) goto tmp3_end;
          tmpMeta594 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta592), 2));
          tmp595 = mmc_unbox_real(tmpMeta594);
          if (!listEmpty(tmpMeta593)) goto tmp3_end;
          _cref = tmpMeta587;
          _absoluteTolerance = tmp591  /* pattern as ty=Real */;
          _relativeTolerance = tmp595  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setTolerance(threadData, _cref, _absoluteTolerance, _relativeTolerance);
          tmpMeta596 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta596;
          goto tmp3_done;
        }
        case 540 /* oms_setVariableStepSize */: {
          modelica_metatype tmpMeta597;
          modelica_metatype tmpMeta598;
          modelica_metatype tmpMeta599;
          modelica_metatype tmpMeta600;
          modelica_metatype tmpMeta601;
          modelica_metatype tmpMeta602;
          modelica_real tmp603;
          modelica_metatype tmpMeta604;
          modelica_metatype tmpMeta605;
          modelica_metatype tmpMeta606;
          modelica_real tmp607;
          modelica_metatype tmpMeta608;
          modelica_metatype tmpMeta609;
          modelica_metatype tmpMeta610;
          modelica_real tmp611;
          modelica_metatype tmpMeta612;
          if (23 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT70), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta597 = MMC_CAR(tmp4_2);
          tmpMeta598 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta597,2,1) == 0) goto tmp3_end;
          tmpMeta599 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta597), 2));
          if (listEmpty(tmpMeta598)) goto tmp3_end;
          tmpMeta600 = MMC_CAR(tmpMeta598);
          tmpMeta601 = MMC_CDR(tmpMeta598);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta600,1,1) == 0) goto tmp3_end;
          tmpMeta602 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta600), 2));
          tmp603 = mmc_unbox_real(tmpMeta602);
          if (listEmpty(tmpMeta601)) goto tmp3_end;
          tmpMeta604 = MMC_CAR(tmpMeta601);
          tmpMeta605 = MMC_CDR(tmpMeta601);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta604,1,1) == 0) goto tmp3_end;
          tmpMeta606 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta604), 2));
          tmp607 = mmc_unbox_real(tmpMeta606);
          if (listEmpty(tmpMeta605)) goto tmp3_end;
          tmpMeta608 = MMC_CAR(tmpMeta605);
          tmpMeta609 = MMC_CDR(tmpMeta605);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta608,1,1) == 0) goto tmp3_end;
          tmpMeta610 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta608), 2));
          tmp611 = mmc_unbox_real(tmpMeta610);
          if (!listEmpty(tmpMeta609)) goto tmp3_end;
          _cref = tmpMeta599;
          _initialStepSize = tmp603  /* pattern as ty=Real */;
          _minimumStepSize = tmp607  /* pattern as ty=Real */;
          _maximumStepSize = tmp611  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setVariableStepSize(threadData, _cref, _initialStepSize, _minimumStepSize, _maximumStepSize);
          tmpMeta612 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta612;
          goto tmp3_done;
        }
        case 821 /* oms_setWorkingDirectory */: {
          modelica_metatype tmpMeta613;
          modelica_metatype tmpMeta614;
          modelica_metatype tmpMeta615;
          modelica_metatype tmpMeta616;
          if (23 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT71), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta613 = MMC_CAR(tmp4_2);
          tmpMeta614 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta613,2,1) == 0) goto tmp3_end;
          tmpMeta615 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta613), 2));
          if (!listEmpty(tmpMeta614)) goto tmp3_end;
          _newWorkingDir = tmpMeta615;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__setWorkingDirectory(threadData, _newWorkingDir);
          tmpMeta616 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta616;
          goto tmp3_done;
        }
        case 23 /* oms_simulate */: {
          modelica_metatype tmpMeta617;
          modelica_metatype tmpMeta618;
          modelica_metatype tmpMeta619;
          modelica_metatype tmpMeta620;
          if (12 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT72), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta617 = MMC_CAR(tmp4_2);
          tmpMeta618 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta617,2,1) == 0) goto tmp3_end;
          tmpMeta619 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta617), 2));
          if (!listEmpty(tmpMeta618)) goto tmp3_end;
          _cref = tmpMeta619;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__simulate(threadData, _cref);
          tmpMeta620 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta620;
          goto tmp3_done;
        }
        case 1467 /* oms_stepUntil */: {
          modelica_metatype tmpMeta621;
          modelica_metatype tmpMeta622;
          modelica_metatype tmpMeta623;
          modelica_metatype tmpMeta624;
          modelica_metatype tmpMeta625;
          modelica_metatype tmpMeta626;
          modelica_real tmp627;
          modelica_metatype tmpMeta628;
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT73), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta621 = MMC_CAR(tmp4_2);
          tmpMeta622 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta621,2,1) == 0) goto tmp3_end;
          tmpMeta623 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta621), 2));
          if (listEmpty(tmpMeta622)) goto tmp3_end;
          tmpMeta624 = MMC_CAR(tmpMeta622);
          tmpMeta625 = MMC_CDR(tmpMeta622);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta624,1,1) == 0) goto tmp3_end;
          tmpMeta626 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta624), 2));
          tmp627 = mmc_unbox_real(tmpMeta626);
          if (!listEmpty(tmpMeta625)) goto tmp3_end;
          _cref = tmpMeta623;
          _stopTime = tmp627  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__stepUntil(threadData, _cref, _stopTime);
          tmpMeta628 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta628;
          goto tmp3_done;
        }
        case 1052 /* oms_terminate */: {
          modelica_metatype tmpMeta629;
          modelica_metatype tmpMeta630;
          modelica_metatype tmpMeta631;
          modelica_metatype tmpMeta632;
          if (13 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT74), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta629 = MMC_CAR(tmp4_2);
          tmpMeta630 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta629,2,1) == 0) goto tmp3_end;
          tmpMeta631 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta629), 2));
          if (!listEmpty(tmpMeta630)) goto tmp3_end;
          _cref = tmpMeta631;
          /* Pattern matching succeeded */
          _status = omc_OMSimulatorExt_oms__terminate(threadData, _cref);
          tmpMeta632 = mmc_mk_box2(3, &Values_Value_INTEGER__desc, mmc_mk_integer(_status));
          tmpMeta1 = tmpMeta632;
          goto tmp3_done;
        }
        case 3737 /* oms_getVersion */: {
          modelica_metatype tmpMeta633;
          if (14 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          _version = omc_OMSimulatorExt_oms__getVersion(threadData);
          tmpMeta633 = mmc_mk_box2(5, &Values_Value_STRING__desc, _version);
          tmpMeta1 = tmpMeta633;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outValue = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}

