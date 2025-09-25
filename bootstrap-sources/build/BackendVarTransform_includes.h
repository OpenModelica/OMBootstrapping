#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "ComponentReference.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "DoubleEnded.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "HashSet.h"
#include "List.h"
#include "Types.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
