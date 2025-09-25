#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "Array.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "DAEUtil.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "FCore.h"
#include "FGraph.h"
#include "FNode.h"
#include "Flags.h"
#include "HashTable.h"
#include "List.h"
#include "Lookup.h"
#include "MMath.h"
#include "Types.h"
#include "UnitAbsynBuilder.h"
#include "UnitParserExt.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
