#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BaseHashTable.h"
#include "CodegenCFunctions.h"
#include "CodegenMidToC.h"
#include "Config.h"
#include "DAEToMid.h"
#include "HashTableStringToPath.h"
#include "SimCodeFunction.h"
#include "SimCodeFunctionUtil.h"
#include "Tpl.h"
#ifdef __cplusplus
}
#endif
