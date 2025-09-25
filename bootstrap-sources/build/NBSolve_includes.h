#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBCausalize.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBPartition.h"
#include "NBReplacements.h"
#include "NBSlice.h"
#include "NBSolve.h"
#include "NBStrongComponent.h"
#include "NBTearing.h"
#include "NBVariable.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFSimplifyExp.h"
#include "NFType.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
