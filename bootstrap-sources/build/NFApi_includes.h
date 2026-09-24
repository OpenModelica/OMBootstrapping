#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "CevalScriptBackend.h"
#include "DAEUtil.h"
#include "Dump.h"
#include "ErrorExt.h"
#include "ExecStat.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "JSON.h"
#include "List.h"
#include "NFApi.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFConnectBreakTree.h"
#include "NFConvertDAE.h"
#include "NFEvalConstants.h"
#include "NFExpression.h"
#include "NFFlatten.h"
#include "NFInst.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFInstUtil.h"
#include "NFInstanceAPI.h"
#include "NFLookup.h"
#include "NFModifier.h"
#include "NFPackage.h"
#include "NFScalarize.h"
#include "NFSimplifyExp.h"
#include "NFSimplifyModel.h"
#include "NFTyping.h"
#include "NFUnitCheck.h"
#include "NFVariable.h"
#include "NFVerifyModel.h"
#include "SCodeUtil.h"
#include "SimCodeMain.h"
#include "SymbolTable.h"
#include "Util.h"
#include "ValuesMake.h"
#ifdef __cplusplus
}
#endif
