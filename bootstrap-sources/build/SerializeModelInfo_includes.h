#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Algorithm.h"
#include "ComponentReference.h"
#include "Config.h"
#include "DAEDump.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "File.h"
#include "List.h"
#include "PrefixUtil.h"
#include "SCodeDump.h"
#include "SerializeModelInfo.h"
#include "SimCodeFunctionUtil.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
