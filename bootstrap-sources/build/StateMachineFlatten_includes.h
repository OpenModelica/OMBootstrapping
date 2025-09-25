#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "DAEUtil.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "FCore.h"
#include "Flags.h"
#include "HashTableCrToExpOption.h"
#include "List.h"
#include "StateMachineFlatten.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
