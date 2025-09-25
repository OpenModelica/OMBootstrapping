#ifndef NFInstPrefix__H
#define NFInstPrefix__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description Absyn_Path_QUALIFIED__desc;

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_ComponentRef_CREF__QUAL__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description NFInstPrefix_Prefix_EMPTY__PREFIX__desc;

extern struct record_description NFInstPrefix_Prefix_PREFIX__desc;


DLLDirection
modelica_metatype omc_NFInstPrefix_toPackagePrefix(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_toPackagePrefix omc_NFInstPrefix_toPackagePrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_toPackagePrefix,2,0) {(void*) boxptr_NFInstPrefix_toPackagePrefix,0}};
#define boxvar_NFInstPrefix_toPackagePrefix MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_toPackagePrefix)


DLLDirection
modelica_boolean omc_NFInstPrefix_isPackagePrefix(threadData_t *threadData, modelica_metatype _inPrefix);
DLLDirection
modelica_metatype boxptr_NFInstPrefix_isPackagePrefix(threadData_t *threadData, modelica_metatype _inPrefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_isPackagePrefix,2,0) {(void*) boxptr_NFInstPrefix_isPackagePrefix,0}};
#define boxvar_NFInstPrefix_isPackagePrefix MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_isPackagePrefix)


DLLDirection
modelica_string omc_NFInstPrefix_toStrWithEmpty(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_toStrWithEmpty omc_NFInstPrefix_toStrWithEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_toStrWithEmpty,2,0) {(void*) boxptr_NFInstPrefix_toStrWithEmpty,0}};
#define boxvar_NFInstPrefix_toStrWithEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_toStrWithEmpty)


DLLDirection
modelica_string omc_NFInstPrefix_toStr(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_toStr omc_NFInstPrefix_toStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_toStr,2,0) {(void*) boxptr_NFInstPrefix_toStr,0}};
#define boxvar_NFInstPrefix_toStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_toStr)


#define boxptr_NFInstPrefix_fromStringList2 omc_NFInstPrefix_fromStringList2


DLLDirection
modelica_metatype omc_NFInstPrefix_fromStringList(threadData_t *threadData, modelica_metatype _inStrings);
#define boxptr_NFInstPrefix_fromStringList omc_NFInstPrefix_fromStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromStringList,2,0) {(void*) boxptr_NFInstPrefix_fromStringList,0}};
#define boxvar_NFInstPrefix_fromStringList MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromStringList)


#define boxptr_NFInstPrefix_fromPath2 omc_NFInstPrefix_fromPath2


DLLDirection
modelica_metatype omc_NFInstPrefix_fromPath(threadData_t *threadData, modelica_metatype _inPath);
#define boxptr_NFInstPrefix_fromPath omc_NFInstPrefix_fromPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromPath,2,0) {(void*) boxptr_NFInstPrefix_fromPath,0}};
#define boxvar_NFInstPrefix_fromPath MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_fromPath)


DLLDirection
modelica_metatype omc_NFInstPrefix_toPath(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_toPath omc_NFInstPrefix_toPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_toPath,2,0) {(void*) boxptr_NFInstPrefix_toPath,0}};
#define boxvar_NFInstPrefix_toPath MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_toPath)


DLLDirection
modelica_metatype omc_NFInstPrefix_toCref(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_toCref omc_NFInstPrefix_toCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_toCref,2,0) {(void*) boxptr_NFInstPrefix_toCref,0}};
#define boxvar_NFInstPrefix_toCref MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_toCref)


DLLDirection
modelica_string omc_NFInstPrefix_prefixStr(threadData_t *threadData, modelica_string _inString, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_prefixStr omc_NFInstPrefix_prefixStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_prefixStr,2,0) {(void*) boxptr_NFInstPrefix_prefixStr,0}};
#define boxvar_NFInstPrefix_prefixStr MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_prefixStr)


DLLDirection
modelica_metatype omc_NFInstPrefix_prefixPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_prefixPath omc_NFInstPrefix_prefixPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_prefixPath,2,0) {(void*) boxptr_NFInstPrefix_prefixPath,0}};
#define boxvar_NFInstPrefix_prefixPath MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_prefixPath)


DLLDirection
modelica_metatype omc_NFInstPrefix_prefixCref(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_prefixCref omc_NFInstPrefix_prefixCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_prefixCref,2,0) {(void*) boxptr_NFInstPrefix_prefixCref,0}};
#define boxvar_NFInstPrefix_prefixCref MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_prefixCref)


DLLDirection
modelica_string omc_NFInstPrefix_firstName(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_firstName omc_NFInstPrefix_firstName
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_firstName,2,0) {(void*) boxptr_NFInstPrefix_firstName,0}};
#define boxvar_NFInstPrefix_firstName MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_firstName)


DLLDirection
modelica_metatype omc_NFInstPrefix_restPrefix(threadData_t *threadData, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_restPrefix omc_NFInstPrefix_restPrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_restPrefix,2,0) {(void*) boxptr_NFInstPrefix_restPrefix,0}};
#define boxvar_NFInstPrefix_restPrefix MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_restPrefix)


DLLDirection
modelica_metatype omc_NFInstPrefix_addStringList(threadData_t *threadData, modelica_metatype _inStrings, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_addStringList omc_NFInstPrefix_addStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_addStringList,2,0) {(void*) boxptr_NFInstPrefix_addStringList,0}};
#define boxvar_NFInstPrefix_addStringList MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_addStringList)


DLLDirection
modelica_metatype omc_NFInstPrefix_addString(threadData_t *threadData, modelica_string _inName, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_addString omc_NFInstPrefix_addString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_addString,2,0) {(void*) boxptr_NFInstPrefix_addString,0}};
#define boxvar_NFInstPrefix_addString MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_addString)


DLLDirection
modelica_metatype omc_NFInstPrefix_addOptPath(threadData_t *threadData, modelica_metatype _inOptPath, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_addOptPath omc_NFInstPrefix_addOptPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_addOptPath,2,0) {(void*) boxptr_NFInstPrefix_addOptPath,0}};
#define boxvar_NFInstPrefix_addOptPath MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_addOptPath)


DLLDirection
modelica_metatype omc_NFInstPrefix_addPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_addPath omc_NFInstPrefix_addPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_addPath,2,0) {(void*) boxptr_NFInstPrefix_addPath,0}};
#define boxvar_NFInstPrefix_addPath MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_addPath)


DLLDirection
modelica_metatype omc_NFInstPrefix_add(threadData_t *threadData, modelica_string _inName, modelica_metatype _inDimensions, modelica_metatype _inPrefix);
#define boxptr_NFInstPrefix_add omc_NFInstPrefix_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_add,2,0) {(void*) boxptr_NFInstPrefix_add,0}};
#define boxvar_NFInstPrefix_add MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_add)


DLLDirection
modelica_metatype omc_NFInstPrefix_makeEmptyPrefix(threadData_t *threadData, modelica_metatype _inClassPath);
#define boxptr_NFInstPrefix_makeEmptyPrefix omc_NFInstPrefix_makeEmptyPrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_makeEmptyPrefix,2,0) {(void*) boxptr_NFInstPrefix_makeEmptyPrefix,0}};
#define boxvar_NFInstPrefix_makeEmptyPrefix MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_makeEmptyPrefix)


DLLDirection
modelica_metatype omc_NFInstPrefix_makePrefix(threadData_t *threadData, modelica_string _inName, modelica_metatype _inDims);
#define boxptr_NFInstPrefix_makePrefix omc_NFInstPrefix_makePrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInstPrefix_makePrefix,2,0) {(void*) boxptr_NFInstPrefix_makePrefix,0}};
#define boxvar_NFInstPrefix_makePrefix MMC_REFSTRUCTLIT(boxvar_lit_NFInstPrefix_makePrefix)

#ifdef __cplusplus
}
#endif
#endif
