#ifndef FUnit__H
#define FUnit__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description FUnit_Token_T__DIV__desc;

extern struct record_description FUnit_Token_T__LPAREN__desc;

extern struct record_description FUnit_Token_T__MUL__desc;

extern struct record_description FUnit_Token_T__NUMBER__desc;

extern struct record_description FUnit_Token_T__RPAREN__desc;

extern struct record_description FUnit_Token_T__UNIT__desc;

extern struct record_description FUnit_Unit_UNIT__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_FUnit_popNumber omc_FUnit_popNumber


#define boxptr_FUnit_popUnit omc_FUnit_popUnit


#define boxptr_FUnit_lexer omc_FUnit_lexer


#define boxptr_FUnit_unitToken2unit omc_FUnit_unitToken2unit


#define boxptr_FUnit_parser3 omc_FUnit_parser3


DLLDirection
modelica_metatype omc_FUnit_parseUnitString(threadData_t *threadData, modelica_string _inUnitString, modelica_metatype _inKnownUnits);
#define boxptr_FUnit_parseUnitString omc_FUnit_parseUnitString
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_parseUnitString,2,0) {(void*) boxptr_FUnit_parseUnitString,0}};
#define boxvar_FUnit_parseUnitString MMC_REFSTRUCTLIT(boxvar_lit_FUnit_parseUnitString)


DLLDirection
modelica_string omc_FUnit_unitString(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inHtU2S);
#define boxptr_FUnit_unitString omc_FUnit_unitString
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitString,2,0) {(void*) boxptr_FUnit_unitString,0}};
#define boxvar_FUnit_unitString MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitString)


DLLDirection
modelica_metatype omc_FUnit_unitRoot(threadData_t *threadData, modelica_metatype _inUnit, modelica_real _inExponent);
DLLDirection
modelica_metatype boxptr_FUnit_unitRoot(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inExponent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitRoot,2,0) {(void*) boxptr_FUnit_unitRoot,0}};
#define boxvar_FUnit_unitRoot MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitRoot)


DLLDirection
modelica_metatype omc_FUnit_unitMulReal(threadData_t *threadData, modelica_metatype _inUnit, modelica_real _inFactor);
DLLDirection
modelica_metatype boxptr_FUnit_unitMulReal(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inFactor);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitMulReal,2,0) {(void*) boxptr_FUnit_unitMulReal,0}};
#define boxvar_FUnit_unitMulReal MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitMulReal)


DLLDirection
modelica_metatype omc_FUnit_unitPow(threadData_t *threadData, modelica_metatype _inUnit, modelica_integer _inExp);
DLLDirection
modelica_metatype boxptr_FUnit_unitPow(threadData_t *threadData, modelica_metatype _inUnit, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitPow,2,0) {(void*) boxptr_FUnit_unitPow,0}};
#define boxvar_FUnit_unitPow MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitPow)


DLLDirection
modelica_metatype omc_FUnit_unitDiv(threadData_t *threadData, modelica_metatype _inUnit1, modelica_metatype _inUnit2);
#define boxptr_FUnit_unitDiv omc_FUnit_unitDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitDiv,2,0) {(void*) boxptr_FUnit_unitDiv,0}};
#define boxvar_FUnit_unitDiv MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitDiv)


DLLDirection
modelica_metatype omc_FUnit_unitMul(threadData_t *threadData, modelica_metatype _inUnit1, modelica_metatype _inUnit2);
#define boxptr_FUnit_unitMul omc_FUnit_unitMul
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitMul,2,0) {(void*) boxptr_FUnit_unitMul,0}};
#define boxvar_FUnit_unitMul MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitMul)


DLLDirection
modelica_string omc_FUnit_printListCr(threadData_t *threadData, modelica_metatype _inlCr);
#define boxptr_FUnit_printListCr omc_FUnit_printListCr
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_printListCr,2,0) {(void*) boxptr_FUnit_printListCr,0}};
#define boxvar_FUnit_printListCr MMC_REFSTRUCTLIT(boxvar_lit_FUnit_printListCr)


DLLDirection
modelica_string omc_FUnit_unit2string(threadData_t *threadData, modelica_metatype _inUnit);
#define boxptr_FUnit_unit2string omc_FUnit_unit2string
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unit2string,2,0) {(void*) boxptr_FUnit_unit2string,0}};
#define boxvar_FUnit_unit2string MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unit2string)


DLLDirection
modelica_boolean omc_FUnit_unitEqual(threadData_t *threadData, modelica_metatype _inKey, modelica_metatype _inKey2);
DLLDirection
modelica_metatype boxptr_FUnit_unitEqual(threadData_t *threadData, modelica_metatype _inKey, modelica_metatype _inKey2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_unitEqual,2,0) {(void*) boxptr_FUnit_unitEqual,0}};
#define boxvar_FUnit_unitEqual MMC_REFSTRUCTLIT(boxvar_lit_FUnit_unitEqual)


DLLDirection
modelica_integer omc_FUnit_hashUnit(threadData_t *threadData, modelica_metatype _inKey);
DLLDirection
modelica_metatype boxptr_FUnit_hashUnit(threadData_t *threadData, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_hashUnit,2,0) {(void*) boxptr_FUnit_hashUnit,0}};
#define boxvar_FUnit_hashUnit MMC_REFSTRUCTLIT(boxvar_lit_FUnit_hashUnit)


DLLDirection
modelica_boolean omc_FUnit_isUnit(threadData_t *threadData, modelica_metatype _inUnit);
DLLDirection
modelica_metatype boxptr_FUnit_isUnit(threadData_t *threadData, modelica_metatype _inUnit);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_isUnit,2,0) {(void*) boxptr_FUnit_isUnit,0}};
#define boxvar_FUnit_isUnit MMC_REFSTRUCTLIT(boxvar_lit_FUnit_isUnit)


DLLDirection
modelica_metatype omc_FUnit_getKnownUnitsInverse(threadData_t *threadData);
#define boxptr_FUnit_getKnownUnitsInverse omc_FUnit_getKnownUnitsInverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_getKnownUnitsInverse,2,0) {(void*) boxptr_FUnit_getKnownUnitsInverse,0}};
#define boxvar_FUnit_getKnownUnitsInverse MMC_REFSTRUCTLIT(boxvar_lit_FUnit_getKnownUnitsInverse)


DLLDirection
modelica_metatype omc_FUnit_getKnownUnits(threadData_t *threadData);
#define boxptr_FUnit_getKnownUnits omc_FUnit_getKnownUnits
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnit_getKnownUnits,2,0) {(void*) boxptr_FUnit_getKnownUnits,0}};
#define boxvar_FUnit_getKnownUnits MMC_REFSTRUCTLIT(boxvar_lit_FUnit_getKnownUnits)

#ifdef __cplusplus
}
#endif
#endif
