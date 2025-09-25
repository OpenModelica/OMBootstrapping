#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "Ceval.h"
#include "ClassInf.h"
#include "Config.h"
#include "DAEUtil.h"
#include "DoubleEnded.h"
#include "Dump.h"
#include "Error.h"
#include "ErrorExt.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "FBuiltin.h"
#include "FCore.h"
#include "FGraph.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "Inst.h"
#include "Interactive.h"
#include "InteractiveUtil.h"
#include "List.h"
#include "Lookup.h"
#include "Mod.h"
#include "NFApi.h"
#include "Parser.h"
#include "Print.h"
#include "SCodeUtil.h"
#include "Settings.h"
#include "StaticScript.h"
#include "StringUtil.h"
#include "SymbolTable.h"
#include "System.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#include "ValuesUtil.h"
#include "Vector.h"
#ifdef __cplusplus
}
#endif
