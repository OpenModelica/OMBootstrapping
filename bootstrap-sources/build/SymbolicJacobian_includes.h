#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEOptimize.h"
#include "BackendDAETransform.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "Ceval.h"
#include "ComponentReference.h"
#include "Config.h"
#include "DAE.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "Differentiate.h"
#include "DynamicOptimization.h"
#include "ElementSource.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "FCore.h"
#include "FGraph.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "GCExt.h"
#include "Graph.h"
#include "HashSet.h"
#include "IndexReduction.h"
#include "List.h"
#include "StringUtil.h"
#include "SymbolicJacobian.h"
#include "System.h"
#include "UnorderedMap.h"
#include "Util.h"
#include "ValuesUtil.h"
#include "Vector.h"
#ifdef __cplusplus
}
#endif
