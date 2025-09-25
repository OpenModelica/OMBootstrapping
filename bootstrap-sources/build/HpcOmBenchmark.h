#ifndef HpcOmBenchmark__H
#define HpcOmBenchmark__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



#define boxptr_HpcOmBenchmark_expandCalcTimes omc_HpcOmBenchmark_expandCalcTimes


#define boxptr_HpcOmBenchmark_readCalcTimesFromJson omc_HpcOmBenchmark_readCalcTimesFromJson


#define boxptr_HpcOmBenchmark_readCalcTimesFromXml omc_HpcOmBenchmark_readCalcTimesFromXml


DLLDirection
modelica_metatype omc_HpcOmBenchmark_readCalcTimesFromFile(threadData_t *threadData, modelica_string _iFileNamePrefix);
#define boxptr_HpcOmBenchmark_readCalcTimesFromFile omc_HpcOmBenchmark_readCalcTimesFromFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_readCalcTimesFromFile,2,0) {(void*) boxptr_HpcOmBenchmark_readCalcTimesFromFile,0}};
#define boxvar_HpcOmBenchmark_readCalcTimesFromFile MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_readCalcTimesFromFile)


DLLDirection
modelica_metatype omc_HpcOmBenchmark_benchSystem(threadData_t *threadData);
#define boxptr_HpcOmBenchmark_benchSystem omc_HpcOmBenchmark_benchSystem
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_benchSystem,2,0) {(void*) boxptr_HpcOmBenchmark_benchSystem,0}};
#define boxvar_HpcOmBenchmark_benchSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmBenchmark_benchSystem)

#ifdef __cplusplus
}
#endif
#endif
