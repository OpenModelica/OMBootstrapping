#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BaseHashTable.h"
#include "ClassLoader.h"
#include "Config.h"
#include "Debug.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "PackageManagement.h"
#include "Parser.h"
#include "System.h"
#include "Testsuite.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
