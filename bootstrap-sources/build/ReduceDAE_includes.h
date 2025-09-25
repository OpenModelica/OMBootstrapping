#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendVarTransform.h"
#include "ComponentReference.h"
#include "Debug.h"
#include "Differentiate.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "List.h"
#include "ReduceDAE.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
