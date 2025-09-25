#ifndef DiffAlgorithm__H
#define DiffAlgorithm__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
modelica_string omc_DiffAlgorithm_printActual(threadData_t *threadData, modelica_metatype _seq, modelica_fnptr _toString);
#define boxptr_DiffAlgorithm_printActual omc_DiffAlgorithm_printActual
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printActual,2,0) {(void*) boxptr_DiffAlgorithm_printActual,0}};
#define boxvar_DiffAlgorithm_printActual MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printActual)


DLLDirection
modelica_string omc_DiffAlgorithm_printDiffXml(threadData_t *threadData, modelica_metatype _seq, modelica_fnptr _toString);
#define boxptr_DiffAlgorithm_printDiffXml omc_DiffAlgorithm_printDiffXml
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printDiffXml,2,0) {(void*) boxptr_DiffAlgorithm_printDiffXml,0}};
#define boxvar_DiffAlgorithm_printDiffXml MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printDiffXml)


DLLDirection
modelica_string omc_DiffAlgorithm_printDiffTerminalColor(threadData_t *threadData, modelica_metatype _seq, modelica_fnptr _toString);
#define boxptr_DiffAlgorithm_printDiffTerminalColor omc_DiffAlgorithm_printDiffTerminalColor
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printDiffTerminalColor,2,0) {(void*) boxptr_DiffAlgorithm_printDiffTerminalColor,0}};
#define boxvar_DiffAlgorithm_printDiffTerminalColor MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printDiffTerminalColor)


DLLDirection
modelica_metatype omc_DiffAlgorithm_diff(threadData_t *threadData, modelica_metatype _seq1, modelica_metatype _seq2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString);
#define boxptr_DiffAlgorithm_diff omc_DiffAlgorithm_diff
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_diff,2,0) {(void*) boxptr_DiffAlgorithm_diff,0}};
#define boxvar_DiffAlgorithm_diff MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_diff)

#ifdef __cplusplus
}
#endif
#endif
