#ifndef HpcOmSchedulerExt__H
#define HpcOmSchedulerExt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_HpcOmSchedulerExt_schedulehMetis(threadData_t *threadData, modelica_metatype _vwgts, modelica_metatype _eptr, modelica_metatype _eint, modelica_metatype _hewgts, modelica_integer _nparts);
DLLDirection
modelica_metatype boxptr_HpcOmSchedulerExt_schedulehMetis(threadData_t *threadData, modelica_metatype _vwgts, modelica_metatype _eptr, modelica_metatype _eint, modelica_metatype _hewgts, modelica_metatype _nparts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSchedulerExt_schedulehMetis,2,0) {(void*) boxptr_HpcOmSchedulerExt_schedulehMetis,0}};
#define boxvar_HpcOmSchedulerExt_schedulehMetis MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSchedulerExt_schedulehMetis)

extern modelica_metatype HpcOmSchedulerExt_schedulehMetis(modelica_metatype /*_vwgts*/, modelica_metatype /*_eptr*/, modelica_metatype /*_eint*/, modelica_metatype /*_hewgts*/, int /*_nparts*/);

DLLDirection
modelica_metatype omc_HpcOmSchedulerExt_scheduleMetis(threadData_t *threadData, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _vwgt, modelica_metatype _adjwgt, modelica_integer _nparts);
DLLDirection
modelica_metatype boxptr_HpcOmSchedulerExt_scheduleMetis(threadData_t *threadData, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _vwgt, modelica_metatype _adjwgt, modelica_metatype _nparts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSchedulerExt_scheduleMetis,2,0) {(void*) boxptr_HpcOmSchedulerExt_scheduleMetis,0}};
#define boxvar_HpcOmSchedulerExt_scheduleMetis MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSchedulerExt_scheduleMetis)

extern modelica_metatype HpcOmSchedulerExt_scheduleMetis(modelica_metatype /*_xadj*/, modelica_metatype /*_adjncy*/, modelica_metatype /*_vwgt*/, modelica_metatype /*_adjwgt*/, int /*_nparts*/);

DLLDirection
modelica_metatype omc_HpcOmSchedulerExt_readScheduleFromGraphMl(threadData_t *threadData, modelica_string _filename);
#define boxptr_HpcOmSchedulerExt_readScheduleFromGraphMl omc_HpcOmSchedulerExt_readScheduleFromGraphMl
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSchedulerExt_readScheduleFromGraphMl,2,0) {(void*) boxptr_HpcOmSchedulerExt_readScheduleFromGraphMl,0}};
#define boxvar_HpcOmSchedulerExt_readScheduleFromGraphMl MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSchedulerExt_readScheduleFromGraphMl)

extern modelica_metatype HpcOmSchedulerExt_readScheduleFromGraphMl(const char* /*_filename*/);

#ifdef __cplusplus
}
#endif
#endif
