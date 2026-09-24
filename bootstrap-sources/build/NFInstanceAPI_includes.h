#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "Config.h"
#include "Dump.h"
#include "ElementSource.h"
#include "Error.h"
#include "ErrorExt.h"
#include "ExecStat.h"
#include "FBuiltin.h"
#include "Flags.h"
#include "JSON.h"
#include "List.h"
#include "Mutable.h"
#include "MutableWeak.h"
#include "NFBinding.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFConnectBreakTree.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFImport.h"
#include "NFInst.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFInstanceAPI.h"
#include "NFLookup.h"
#include "NFModifier.h"
#include "NFRestriction.h"
#include "NFSections.h"
#include "NFSimplifyExp.h"
#include "NFType.h"
#include "NFTyping.h"
#include "Parser.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "Settings.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
