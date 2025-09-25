#ifndef Unzip__H
#define Unzip__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_boolean omc_Unzip_unzipPath(threadData_t *threadData, modelica_string _fileName, modelica_string _pathToExtract, modelica_string _destinationPath);
DLLDirection
modelica_metatype boxptr_Unzip_unzipPath(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _pathToExtract, modelica_metatype _destinationPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Unzip_unzipPath,2,0) {(void*) boxptr_Unzip_unzipPath,0}};
#define boxvar_Unzip_unzipPath MMC_REFSTRUCTLIT(boxvar_lit_Unzip_unzipPath)

extern int om_unzip(const char* /*_fileName*/, const char* /*_pathToExtract*/, const char* /*_destinationPath*/);

#ifdef __cplusplus
}
#endif
#endif
