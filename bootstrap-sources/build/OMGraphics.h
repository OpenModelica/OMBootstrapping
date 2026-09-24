#ifndef OMGraphics__H
#define OMGraphics__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLModelDirection
modelica_boolean omc_OMGraphics_writePlacedConnectorIconPNG(threadData_t *threadData, modelica_integer _handle, modelica_integer _index, modelica_string _path);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_writePlacedConnectorIconPNG(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _index, modelica_metatype _path);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_writePlacedConnectorIconPNG,2,0) {(void*) boxptr_OMGraphics_writePlacedConnectorIconPNG,0}};
#define boxvar_OMGraphics_writePlacedConnectorIconPNG MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_writePlacedConnectorIconPNG)

extern int OMGraphics_writePlacedConnectorIconPNG(int /*_handle*/, int /*_index*/, const char* /*_path*/);

DLLModelDirection
modelica_string omc_OMGraphics_placedConnectorIconSVG(threadData_t *threadData, modelica_integer _handle, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_placedConnectorIconSVG(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_placedConnectorIconSVG,2,0) {(void*) boxptr_OMGraphics_placedConnectorIconSVG,0}};
#define boxvar_OMGraphics_placedConnectorIconSVG MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_placedConnectorIconSVG)

extern const char* OMGraphics_placedConnectorIconSVG(int /*_handle*/, int /*_index*/);

DLLModelDirection
modelica_string omc_OMGraphics_placedConnectorInfo(threadData_t *threadData, modelica_integer _handle, modelica_integer _index);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_placedConnectorInfo(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_placedConnectorInfo,2,0) {(void*) boxptr_OMGraphics_placedConnectorInfo,0}};
#define boxvar_OMGraphics_placedConnectorInfo MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_placedConnectorInfo)

extern const char* OMGraphics_placedConnectorInfo(int /*_handle*/, int /*_index*/);

DLLModelDirection
modelica_integer omc_OMGraphics_placedConnectorCount(threadData_t *threadData, modelica_integer _handle);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_placedConnectorCount(threadData_t *threadData, modelica_metatype _handle);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_placedConnectorCount,2,0) {(void*) boxptr_OMGraphics_placedConnectorCount,0}};
#define boxvar_OMGraphics_placedConnectorCount MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_placedConnectorCount)

extern int OMGraphics_placedConnectorCount(int /*_handle*/);

DLLModelDirection
modelica_boolean omc_OMGraphics_writeIconPNGFromHandle(threadData_t *threadData, modelica_integer _handle, modelica_string _modelName, modelica_string _path);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_writeIconPNGFromHandle(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _modelName, modelica_metatype _path);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_writeIconPNGFromHandle,2,0) {(void*) boxptr_OMGraphics_writeIconPNGFromHandle,0}};
#define boxvar_OMGraphics_writeIconPNGFromHandle MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_writeIconPNGFromHandle)

extern int OMGraphics_writeIconPNGFromHandle(int /*_handle*/, const char* /*_modelName*/, const char* /*_path*/);

DLLModelDirection
modelica_string omc_OMGraphics_graphicalRepresentationXMLFromHandle(threadData_t *threadData, modelica_integer _handle, modelica_real _scaleToMm);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_graphicalRepresentationXMLFromHandle(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _scaleToMm);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_graphicalRepresentationXMLFromHandle,2,0) {(void*) boxptr_OMGraphics_graphicalRepresentationXMLFromHandle,0}};
#define boxvar_OMGraphics_graphicalRepresentationXMLFromHandle MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_graphicalRepresentationXMLFromHandle)

extern const char* OMGraphics_graphicalRepresentationXMLFromHandle(int /*_handle*/, double /*_scaleToMm*/);

DLLModelDirection
modelica_string omc_OMGraphics_iconSVGFromHandle(threadData_t *threadData, modelica_integer _handle, modelica_string _modelName);
DLLModelDirection
modelica_metatype boxptr_OMGraphics_iconSVGFromHandle(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _modelName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OMGraphics_iconSVGFromHandle,2,0) {(void*) boxptr_OMGraphics_iconSVGFromHandle,0}};
#define boxvar_OMGraphics_iconSVGFromHandle MMC_REFSTRUCTLIT(boxvar_lit_OMGraphics_iconSVGFromHandle)

extern const char* OMGraphics_iconSVGFromHandle(int /*_handle*/, const char* /*_modelName*/);

#ifdef __cplusplus
}
#endif
#endif
