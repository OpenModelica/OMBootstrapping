#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ConnectUtil.h"
#include "ConnectionGraph.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ExpressionDump.h"
#include "Flags.h"
#include "HashTable.h"
#include "HashTable3.h"
#include "HashTableCG.h"
#include "IOStream.h"
#include "List.h"
#include "Settings.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
