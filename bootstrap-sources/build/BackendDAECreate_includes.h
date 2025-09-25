#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendDAECreate.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashTable.h"
#include "CheckModel.h"
#include "ComponentReference.h"
#include "Config.h"
#include "DAE.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "DoubleEnded.h"
#include "ElementSource.h"
#include "Error.h"
#include "ErrorExt.h"
#include "ExecStat.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "ExpressionSolve.h"
#include "FCore.h"
#include "Flags.h"
#include "HashTableCrToExpSourceTpl.h"
#include "HashTableExpToExp.h"
#include "HashTableExpToIndex.h"
#include "Inline.h"
#include "List.h"
#include "StackOverflow.h"
#include "System.h"
#include "Types.h"
#include "UnorderedMap.h"
#include "Util.h"
#include "VarTransform.h"
#include "Vectorization.h"
#include "ZeroCrossings.h"
#ifdef __cplusplus
}
#endif
