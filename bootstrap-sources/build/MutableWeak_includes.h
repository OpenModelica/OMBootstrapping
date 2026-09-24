#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.


static inline void* mutableWeakDowngrade(void *mutable)
{
  return mutable;
}


static inline void* mutableWeakUpgrade(void *weak)
{
  return weak;
}


static inline void* mutableWeakOfValue(void *val)
{
  return val;
}


static inline void* mutableWeakValue(void *weak)
{
  return weak;
}
#ifdef __cplusplus
}
#endif
