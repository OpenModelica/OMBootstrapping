#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "ComponentReference.h"
#include "Config.h"
#include "ConnectUtil.h"
#include "ConnectionGraph.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "FCore.h"
#include "Flags.h"
#include "List.h"
#include "Lookup.h"
#include "PrefixUtil.h"
#include "SCodeUtil.h"
#include "System.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
