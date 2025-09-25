#ifndef HpcOmBenchmarkExt__H
#define HpcOmBenchmarkExt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HpcOmBenchmarkExt_readCalcTimesFromJson(threadData_t *threadData, modelica_string _fileName);
#define boxptr_HpcOmBenchmarkExt_readCalcTimesFromJson omc_HpcOmBenchmarkExt_readCalcTimesFromJson
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_readCalcTimesFromJson,2,0) {(void*) boxptr_HpcOmBenchmarkExt_readCalcTimesFromJson,0}};
#define boxvar_HpcOmBenchmarkExt_readCalcTimesFromJson MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_readCalcTimesFromJson)

extern modelica_metatype HpcOmBenchmarkExt_readCalcTimesFromJson(const char* /*_fileName*/);

DLLDirection
modelica_metatype omc_HpcOmBenchmarkExt_readCalcTimesFromXml(threadData_t *threadData, modelica_string _fileName);
#define boxptr_HpcOmBenchmarkExt_readCalcTimesFromXml omc_HpcOmBenchmarkExt_readCalcTimesFromXml
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_readCalcTimesFromXml,2,0) {(void*) boxptr_HpcOmBenchmarkExt_readCalcTimesFromXml,0}};
#define boxvar_HpcOmBenchmarkExt_readCalcTimesFromXml MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_readCalcTimesFromXml)

extern modelica_metatype HpcOmBenchmarkExt_readCalcTimesFromXml(const char* /*_fileName*/);

DLLDirection
modelica_metatype omc_HpcOmBenchmarkExt_requiredTimeForOp(threadData_t *threadData);
#define boxptr_HpcOmBenchmarkExt_requiredTimeForOp omc_HpcOmBenchmarkExt_requiredTimeForOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_requiredTimeForOp,2,0) {(void*) boxptr_HpcOmBenchmarkExt_requiredTimeForOp,0}};
#define boxvar_HpcOmBenchmarkExt_requiredTimeForOp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_requiredTimeForOp)

extern modelica_metatype HpcOmBenchmarkExt_requiredTimeForOp();

DLLDirection
modelica_metatype omc_HpcOmBenchmarkExt_requiredTimeForComm(threadData_t *threadData);
#define boxptr_HpcOmBenchmarkExt_requiredTimeForComm omc_HpcOmBenchmarkExt_requiredTimeForComm
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_requiredTimeForComm,2,0) {(void*) boxptr_HpcOmBenchmarkExt_requiredTimeForComm,0}};
#define boxvar_HpcOmBenchmarkExt_requiredTimeForComm MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmarkExt_requiredTimeForComm)

extern modelica_metatype HpcOmBenchmarkExt_requiredTimeForComm();

#ifdef __cplusplus
}
#endif
#endif
