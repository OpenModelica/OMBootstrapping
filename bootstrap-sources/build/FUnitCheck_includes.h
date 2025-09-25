#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "Error.h"
#include "ExecStat.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "FHashTableCrToUnit.h"
#include "FUnit.h"
#include "FUnitCheck.h"
#include "Flags.h"
#include "List.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
