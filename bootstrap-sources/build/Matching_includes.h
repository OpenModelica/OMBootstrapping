#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEEXT.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "Config.h"
#include "Debug.h"
#include "Differentiate.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "Flags.h"
#include "IndexReduction.h"
#include "Inline.h"
#include "List.h"
#include "Matching.h"
#include "Sorting.h"
#include "System.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
