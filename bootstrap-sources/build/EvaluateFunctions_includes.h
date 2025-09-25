#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "ComponentReference.h"
#include "DAE.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "Error.h"
#include "EvaluateFunctions.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "HashSetExp.h"
#include "List.h"
#include "RemoveSimpleEquations.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
