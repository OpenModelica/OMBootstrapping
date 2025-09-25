#ifndef JSONExt__H
#define JSONExt__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_metatype omc_JSONExt_getListElement(threadData_t *threadData, modelica_metatype _iany, modelica_integer _offset);
DLLDirection
modelica_metatype boxptr_JSONExt_getListElement(threadData_t *threadData, modelica_metatype _iany, modelica_metatype _offset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getListElement,2,0) {(void*) boxptr_JSONExt_getListElement,0}};
#define boxvar_JSONExt_getListElement MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getListElement)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype omc_get_list_element(modelica_metatype (*_iany*), int (*_offset*));
 */

DLLDirection
modelica_metatype omc_JSONExt_getList(threadData_t *threadData, modelica_metatype _iany);
#define boxptr_JSONExt_getList omc_JSONExt_getList
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getList,2,0) {(void*) boxptr_JSONExt_getList,0}};
#define boxvar_JSONExt_getList MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getList)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype omc_get_list(modelica_metatype (*_iany*));
 */

DLLDirection
modelica_integer omc_JSONExt_getTupleSize(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_getTupleSize(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getTupleSize,2,0) {(void*) boxptr_JSONExt_getTupleSize,0}};
#define boxvar_JSONExt_getTupleSize MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getTupleSize)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_get_tuple_size(modelica_metatype (*_any*));
 */

#define boxptr_JSONExt_getSome omc_JSONExt_getSome

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype omc_get_some(modelica_metatype (*_a*));
 */

#define boxptr_JSONExt_getString omc_JSONExt_getString

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* omc_cast_string(modelica_metatype (*_a*));
 */


/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double omc_cast_real(modelica_metatype (*_a*));
 */


/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_cast_int(modelica_metatype (*_a*));
 */

DLLDirection
modelica_metatype omc_JSONExt_getRecordComponent(threadData_t *threadData, modelica_metatype _iany, modelica_integer _offset);
DLLDirection
modelica_metatype boxptr_JSONExt_getRecordComponent(threadData_t *threadData, modelica_metatype _iany, modelica_metatype _offset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getRecordComponent,2,0) {(void*) boxptr_JSONExt_getRecordComponent,0}};
#define boxvar_JSONExt_getRecordComponent MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getRecordComponent)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype omc_get_record_component(modelica_metatype (*_iany*), int (*_offset*));
 */

#define boxptr_JSONExt_getRecordNamesHelper omc_JSONExt_getRecordNamesHelper

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern modelica_metatype omc_get_record_names(modelica_metatype (*_any*));
 */

DLLDirection
modelica_metatype omc_JSONExt_getRecordNames(threadData_t *threadData, modelica_metatype _any);
#define boxptr_JSONExt_getRecordNames omc_JSONExt_getRecordNames
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_getRecordNames,2,0) {(void*) boxptr_JSONExt_getRecordNames,0}};
#define boxvar_JSONExt_getRecordNames MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_getRecordNames)


DLLDirection
modelica_boolean omc_JSONExt_isCons(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isCons(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isCons,2,0) {(void*) boxptr_JSONExt_isCons,0}};
#define boxvar_JSONExt_isCons MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isCons)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_cons(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isNil(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isNil(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isNil,2,0) {(void*) boxptr_JSONExt_isNil,0}};
#define boxvar_JSONExt_isNil MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isNil)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_nil(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isSOME(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isSOME(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isSOME,2,0) {(void*) boxptr_JSONExt_isSOME,0}};
#define boxvar_JSONExt_isSOME MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isSOME)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_some(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isNONE(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isNONE(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isNONE,2,0) {(void*) boxptr_JSONExt_isNONE,0}};
#define boxvar_JSONExt_isNONE MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isNONE)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_none(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isTuple(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isTuple(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isTuple,2,0) {(void*) boxptr_JSONExt_isTuple,0}};
#define boxvar_JSONExt_isTuple MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isTuple)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_tuple(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isRecord(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isRecord(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isRecord,2,0) {(void*) boxptr_JSONExt_isRecord,0}};
#define boxvar_JSONExt_isRecord MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isRecord)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_record(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isArray(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isArray(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isArray,2,0) {(void*) boxptr_JSONExt_isArray,0}};
#define boxvar_JSONExt_isArray MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isArray)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_array(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isString(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isString(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isString,2,0) {(void*) boxptr_JSONExt_isString,0}};
#define boxvar_JSONExt_isString MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isString)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_string(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isReal(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isReal(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isReal,2,0) {(void*) boxptr_JSONExt_isReal,0}};
#define boxvar_JSONExt_isReal MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isReal)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_real(modelica_metatype (*_any*));
 */

DLLDirection
modelica_boolean omc_JSONExt_isInteger(threadData_t *threadData, modelica_metatype _any);
DLLDirection
modelica_metatype boxptr_JSONExt_isInteger(threadData_t *threadData, modelica_metatype _any);
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_isInteger,2,0) {(void*) boxptr_JSONExt_isInteger,0}};
#define boxvar_JSONExt_isInteger MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_isInteger)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int omc_is_integer(modelica_metatype (*_any*));
 */

DLLDirection
modelica_string omc_JSONExt_serialize(threadData_t *threadData, modelica_metatype _any, modelica_metatype _filter);
#define boxptr_JSONExt_serialize omc_JSONExt_serialize
static const MMC_DEFSTRUCTLIT(boxvar_lit_JSONExt_serialize,2,0) {(void*) boxptr_JSONExt_serialize,0}};
#define boxvar_JSONExt_serialize MMC_REFSTRUCTLIT(boxvar_lit_JSONExt_serialize)

#ifdef __cplusplus
}
#endif
#endif
