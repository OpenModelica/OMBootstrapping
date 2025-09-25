#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "BackendDAETransform.h"
#include "BackendDAEUtil.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "Config.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "Flags.h"
#include "List.h"
#include "Print.h"
#include "System.h"
#include "Types.h"
#include "Util.h"
#include "XMLDump.h"
#include "ZeroCrossings.h"
#ifdef __cplusplus
}
#endif
