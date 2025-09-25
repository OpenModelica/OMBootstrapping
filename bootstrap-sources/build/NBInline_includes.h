#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBEquation.h"
#include "NBInline.h"
#include "NBReplacements.h"
#include "NBSlice.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFType.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
