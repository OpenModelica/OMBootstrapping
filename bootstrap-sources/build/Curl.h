#ifndef Curl__H
#define Curl__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_boolean omc_Curl_multiDownload(threadData_t *threadData, modelica_metatype _urlFileList, modelica_integer _maxParallel);
DLLDirection
modelica_metatype boxptr_Curl_multiDownload(threadData_t *threadData, modelica_metatype _urlFileList, modelica_metatype _maxParallel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Curl_multiDownload,2,0) {(void*) boxptr_Curl_multiDownload,0}};
#define boxvar_Curl_multiDownload MMC_REFSTRUCTLIT(boxvar_lit_Curl_multiDownload)

extern int om_curl_multi_download(modelica_metatype /*_urlFileList*/, int /*_maxParallel*/);

#ifdef __cplusplus
}
#endif
#endif
