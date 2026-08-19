#include "omc_simulation_settings.h"
#include "CodegenWasmJit.h"
#define _OMC_LIT0_data "CodegenWasmJit.emitMeCsFmu: the wasm FMU target is only implemented in the Rust omc build"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,89,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/home/andreas/workdir/OM/OpenModelica/OMCompiler/Compiler/Template/CodegenWasmJit.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,84,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.786954567e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(143)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(143)),MMC_IMMEDIATE(MMC_TAGFIXNUM(132)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "CodegenWasmJit.emitCsFmu: the wasm FMU target is only implemented in the Rust omc build"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,87,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4_6,1.786954567e9);
#define _OMC_LIT4_6 MMC_REFREALLIT(_OMC_LIT_STRUCT4_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(128)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(128)),MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT4_6}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "CodegenWasmJit.emitMeFmu: the wasm FMU target is only implemented in the Rust omc build"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,87,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT6_6,1.786954567e9);
#define _OMC_LIT6_6 MMC_REFREALLIT(_OMC_LIT_STRUCT6_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT6_6}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "CodegenWasmJit.emitStandalone: the wasm target is only implemented in the Rust omc build"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,88,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8_6,1.786954567e9);
#define _OMC_LIT8_6 MMC_REFREALLIT(_OMC_LIT_STRUCT8_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),MMC_IMMEDIATE(MMC_TAGFIXNUM(131)),_OMC_LIT8_6}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "CodegenWasmJit.translateModel: the wasm-jit target is only implemented in the Rust omc build"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,92,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10_6,1.786954567e9);
#define _OMC_LIT10_6 MMC_REFREALLIT(_OMC_LIT_STRUCT10_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(60)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(60)),MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),_OMC_LIT10_6}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#include "util/modelica.h"

#include "CodegenWasmJit_includes.h"



DLLDirection
modelica_integer omc_CodegenWasmJit_runSimulationWasmtime(threadData_t *threadData, modelica_string _fileNamePrefix, modelica_string _resultFile, modelica_string _simflags)
{
  modelica_integer _status;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _status has no default value.
  _status = ((modelica_integer) 0);
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _status;
}
modelica_metatype boxptr_CodegenWasmJit_runSimulationWasmtime(threadData_t *threadData, modelica_metatype _fileNamePrefix, modelica_metatype _resultFile, modelica_metatype _simflags)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_CodegenWasmJit_runSimulationWasmtime(threadData, _fileNamePrefix, _resultFile, _simflags);
  out_status = mmc_mk_icon(_status);
  return out_status;
}

DLLDirection
void omc_CodegenWasmJit_emitMeCsFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuPath, modelica_string _guid, modelica_string _modelDescription, modelica_metatype _extraFiles, modelica_string _simulationFlagsJson)
{
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Error_addInternalError(threadData, _OMC_LIT0, _OMC_LIT2);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

DLLDirection
void omc_CodegenWasmJit_emitCsFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuPath, modelica_string _guid, modelica_string _modelDescription, modelica_metatype _extraFiles, modelica_string _simulationFlagsJson)
{
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Error_addInternalError(threadData, _OMC_LIT3, _OMC_LIT4);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

DLLDirection
void omc_CodegenWasmJit_emitMeFmu(threadData_t *threadData, modelica_metatype _simCode, modelica_string _fmuPath, modelica_string _guid, modelica_string _modelDescription, modelica_metatype _extraFiles, modelica_string _simulationFlagsJson)
{
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Error_addInternalError(threadData, _OMC_LIT5, _OMC_LIT6);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

DLLDirection
void omc_CodegenWasmJit_emitStandalone(threadData_t *threadData, modelica_metatype _simCode)
{
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Error_addInternalError(threadData, _OMC_LIT7, _OMC_LIT8);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

DLLDirection
void omc_CodegenWasmJit_finishCompile(threadData_t *threadData, modelica_string _fileNamePrefix)
{
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

DLLDirection
modelica_integer omc_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_string _fileNamePrefix, modelica_string _resultFile, modelica_string _simflags)
{
  modelica_integer _status;
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _status has no default value.
  _status = ((modelica_integer) 0);
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return _status;
}
modelica_metatype boxptr_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_metatype _fileNamePrefix, modelica_metatype _resultFile, modelica_metatype _simflags)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_CodegenWasmJit_runSimulation(threadData, _fileNamePrefix, _resultFile, _simflags);
  out_status = mmc_mk_icon(_status);
  return out_status;
}

DLLDirection
void omc_CodegenWasmJit_translateModel(threadData_t *threadData, modelica_metatype _simCode)
{
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  MemPoolState omc_pool_state = omc_util_get_pool_state();
  #endif
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_Error_addInternalError(threadData, _OMC_LIT9, _OMC_LIT10);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  #if defined(OMC_MINIMAL_RUNTIME) || defined(OMC_FMI_RUNTIME)
  omc_util_restore_pool_state(omc_pool_state);
  #endif
  return;
}

