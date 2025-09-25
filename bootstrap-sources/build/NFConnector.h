#ifndef NFConnector__H
#define NFConnector__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFConnector_CONNECTOR__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFConnector_addSubscripts(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype __omcQ_24in_5Fconn);
#define boxptr_NFConnector_addSubscripts omc_NFConnector_addSubscripts
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_addSubscripts,2,0) {(void*) boxptr_NFConnector_addSubscripts,0}};
#define boxvar_NFConnector_addSubscripts MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_addSubscripts)


DLLDirection
modelica_metatype omc_NFConnector_scalarizePrefix(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_scalarizePrefix omc_NFConnector_scalarizePrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_scalarizePrefix,2,0) {(void*) boxptr_NFConnector_scalarizePrefix,0}};
#define boxvar_NFConnector_scalarizePrefix MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_scalarizePrefix)


DLLDirection
modelica_metatype omc_NFConnector_scalarize(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_scalarize omc_NFConnector_scalarize
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_scalarize,2,0) {(void*) boxptr_NFConnector_scalarize,0}};
#define boxvar_NFConnector_scalarize MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_scalarize)


DLLDirection
modelica_metatype omc_NFConnector_split(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_split omc_NFConnector_split
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_split,2,0) {(void*) boxptr_NFConnector_split,0}};
#define boxvar_NFConnector_split MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_split)


DLLDirection
modelica_integer omc_NFConnector_hashNoSubs(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_hashNoSubs(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_hashNoSubs,2,0) {(void*) boxptr_NFConnector_hashNoSubs,0}};
#define boxvar_NFConnector_hashNoSubs MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_hashNoSubs)


DLLDirection
modelica_integer omc_NFConnector_hash(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_hash(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_hash,2,0) {(void*) boxptr_NFConnector_hash,0}};
#define boxvar_NFConnector_hash MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_hash)


DLLDirection
modelica_string omc_NFConnector_faceString(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_faceString omc_NFConnector_faceString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_faceString,2,0) {(void*) boxptr_NFConnector_faceString,0}};
#define boxvar_NFConnector_faceString MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_faceString)


DLLDirection
modelica_string omc_NFConnector_toString(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_toString omc_NFConnector_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_toString,2,0) {(void*) boxptr_NFConnector_toString,0}};
#define boxvar_NFConnector_toString MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_toString)


DLLDirection
modelica_metatype omc_NFConnector_name(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_name omc_NFConnector_name
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_name,2,0) {(void*) boxptr_NFConnector_name,0}};
#define boxvar_NFConnector_name MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_name)


DLLDirection
modelica_boolean omc_NFConnector_isArray(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_isArray(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isArray,2,0) {(void*) boxptr_NFConnector_isArray,0}};
#define boxvar_NFConnector_isArray MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isArray)


DLLDirection
modelica_boolean omc_NFConnector_isExpandable(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_isExpandable(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isExpandable,2,0) {(void*) boxptr_NFConnector_isExpandable,0}};
#define boxvar_NFConnector_isExpandable MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isExpandable)


DLLDirection
modelica_boolean omc_NFConnector_isDeleted(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_isDeleted(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isDeleted,2,0) {(void*) boxptr_NFConnector_isDeleted,0}};
#define boxvar_NFConnector_isDeleted MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isDeleted)


DLLDirection
modelica_metatype omc_NFConnector_setOutside(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fconn);
#define boxptr_NFConnector_setOutside omc_NFConnector_setOutside
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_setOutside,2,0) {(void*) boxptr_NFConnector_setOutside,0}};
#define boxvar_NFConnector_setOutside MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_setOutside)


DLLDirection
modelica_boolean omc_NFConnector_isInside(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_isInside(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isInside,2,0) {(void*) boxptr_NFConnector_isInside,0}};
#define boxvar_NFConnector_isInside MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isInside)


DLLDirection
modelica_boolean omc_NFConnector_isOutside(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_isOutside(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isOutside,2,0) {(void*) boxptr_NFConnector_isOutside,0}};
#define boxvar_NFConnector_isOutside MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isOutside)


DLLDirection
modelica_boolean omc_NFConnector_isNodeNameEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
DLLDirection
modelica_metatype boxptr_NFConnector_isNodeNameEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isNodeNameEqual,2,0) {(void*) boxptr_NFConnector_isNodeNameEqual,0}};
#define boxvar_NFConnector_isNodeNameEqual MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isNodeNameEqual)


DLLDirection
modelica_boolean omc_NFConnector_isPrefix(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
DLLDirection
modelica_metatype boxptr_NFConnector_isPrefix(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isPrefix,2,0) {(void*) boxptr_NFConnector_isPrefix,0}};
#define boxvar_NFConnector_isPrefix MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isPrefix)


DLLDirection
modelica_boolean omc_NFConnector_isEqualNoSubs(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
DLLDirection
modelica_metatype boxptr_NFConnector_isEqualNoSubs(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isEqualNoSubs,2,0) {(void*) boxptr_NFConnector_isEqualNoSubs,0}};
#define boxvar_NFConnector_isEqualNoSubs MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isEqualNoSubs)


DLLDirection
modelica_boolean omc_NFConnector_isEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
DLLDirection
modelica_metatype boxptr_NFConnector_isEqual(threadData_t *threadData, modelica_metatype _conn1, modelica_metatype _conn2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_isEqual,2,0) {(void*) boxptr_NFConnector_isEqual,0}};
#define boxvar_NFConnector_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_isEqual)


DLLDirection
modelica_integer omc_NFConnector_variability(threadData_t *threadData, modelica_metatype _conn);
DLLDirection
modelica_metatype boxptr_NFConnector_variability(threadData_t *threadData, modelica_metatype _conn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_variability,2,0) {(void*) boxptr_NFConnector_variability,0}};
#define boxvar_NFConnector_variability MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_variability)


DLLDirection
modelica_metatype omc_NFConnector_getInfo(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_getInfo omc_NFConnector_getInfo
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_getInfo,2,0) {(void*) boxptr_NFConnector_getInfo,0}};
#define boxvar_NFConnector_getInfo MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_getInfo)


DLLDirection
modelica_metatype omc_NFConnector_getType(threadData_t *threadData, modelica_metatype _conn);
#define boxptr_NFConnector_getType omc_NFConnector_getType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_getType,2,0) {(void*) boxptr_NFConnector_getType,0}};
#define boxvar_NFConnector_getType MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_getType)


DLLDirection
modelica_metatype omc_NFConnector_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fconns);
#define boxptr_NFConnector_fromExp omc_NFConnector_fromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_fromExp,2,0) {(void*) boxptr_NFConnector_fromExp,0}};
#define boxvar_NFConnector_fromExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_fromExp)


DLLDirection
modelica_metatype omc_NFConnector_fromFacedCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_integer _face, modelica_metatype _source);
DLLDirection
modelica_metatype boxptr_NFConnector_fromFacedCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_metatype _face, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_fromFacedCref,2,0) {(void*) boxptr_NFConnector_fromFacedCref,0}};
#define boxvar_NFConnector_fromFacedCref MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_fromFacedCref)


DLLDirection
modelica_metatype omc_NFConnector_fromCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _ty, modelica_metatype _source);
#define boxptr_NFConnector_fromCref omc_NFConnector_fromCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnector_fromCref,2,0) {(void*) boxptr_NFConnector_fromCref,0}};
#define boxvar_NFConnector_fromCref MMC_REFSTRUCTLIT(boxvar_lit_NFConnector_fromCref)

#ifdef __cplusplus
}
#endif
#endif
