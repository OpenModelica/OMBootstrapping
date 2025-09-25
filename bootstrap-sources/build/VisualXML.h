#ifndef VisualXML__H
#define VisualXML__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendDAE_BackendDAE_DAE__desc;

extern struct record_description DAE_Exp_BCONST__desc;

extern struct record_description DAE_Exp_ICONST__desc;

extern struct record_description DAE_Exp_RCONST__desc;

extern struct record_description DAE_Exp_SCONST__desc;

extern struct record_description DAE_Type_T__REAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;

extern struct record_description VisualXML_Visualization_SHAPE__desc;

extern struct record_description VisualXML_Visualization_SURFACE__desc;

extern struct record_description VisualXML_Visualization_VECTOR__desc;


#define boxptr_VisualXML_dumpVis omc_VisualXML_dumpVis


#define boxptr_VisualXML_isVisualizationVarFold omc_VisualXML_isVisualizationVarFold


#define boxptr_VisualXML_printVisualization omc_VisualXML_printVisualization


#define boxptr_VisualXML_getFullCADFilePath omc_VisualXML_getFullCADFilePath


#define boxptr_VisualXML_makeCrefQualFromString omc_VisualXML_makeCrefQualFromString


#define boxptr_VisualXML_newVisualizer omc_VisualXML_newVisualizer


#define boxptr_VisualXML_fillVisualizationObjects omc_VisualXML_fillVisualizationObjects


#define boxptr_VisualXML_setBindingForProtectedVars1 omc_VisualXML_setBindingForProtectedVars1


#define boxptr_VisualXML_setBindingForProtectedVars omc_VisualXML_setBindingForProtectedVars


#define boxptr_VisualXML_makeVarPublicHideResultFalse omc_VisualXML_makeVarPublicHideResultFalse


#define boxptr_VisualXML_setVisVarsPublic omc_VisualXML_setVisVarsPublic


#define boxptr_VisualXML_getConstCrefBinding omc_VisualXML_getConstCrefBinding


#define boxptr_VisualXML_replaceVisualBinding omc_VisualXML_replaceVisualBinding


DLLDirection
modelica_metatype omc_VisualXML_visualizationInfoXML(threadData_t *threadData, modelica_metatype _daeIn, modelica_string _fileName, modelica_metatype _program);
#define boxptr_VisualXML_visualizationInfoXML omc_VisualXML_visualizationInfoXML
static const MMC_DEFSTRUCTLIT(boxvar_lit_VisualXML_visualizationInfoXML,2,0) {(void*) boxptr_VisualXML_visualizationInfoXML,0}};
#define boxvar_VisualXML_visualizationInfoXML MMC_REFSTRUCTLIT(boxvar_lit_VisualXML_visualizationInfoXML)

#ifdef __cplusplus
}
#endif
#endif
