#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenCppCommon.h"
#include "CodegenCppInit.h"
#include "CodegenCppOMSI.h"
#include "CodegenFMU.h"
#include "CodegenFMUCommon.h"
#include "CodegenFMUCppOMSI.h"
#include "CodegenUtil.h"
#include "Config.h"
#include "FMI.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Tpl.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
