#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBDetectStates.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBVariable.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
