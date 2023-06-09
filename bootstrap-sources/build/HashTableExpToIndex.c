#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "HashTableExpToIndex.c"
#endif
#include "omc_simulation_settings.h"
#include "HashTableExpToIndex.h"
#include "util/modelica.h"
#include "HashTableExpToIndex_includes.h"
DLLExport
modelica_metatype omc_HashTableExpToIndex_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
modelica_metatype _hashTable = NULL;
modelica_metatype tmpMeta1;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_box4(0, boxvar_Expression_hashExpMod, boxvar_Expression_expEqual, boxvar_ExpressionDump_printExpStr, boxvar_intString);
_hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
_return: OMC_LABEL_UNUSED
return _hashTable;
}
modelica_metatype boxptr_HashTableExpToIndex_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
modelica_integer tmp1;
modelica_metatype _hashTable = NULL;
tmp1 = mmc_unbox_integer(_size);
_hashTable = omc_HashTableExpToIndex_emptyHashTableSized(threadData, tmp1);
return _hashTable;
}
DLLExport
modelica_metatype omc_HashTableExpToIndex_emptyHashTable(threadData_t *threadData)
{
modelica_metatype _hashTable = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_hashTable = omc_HashTableExpToIndex_emptyHashTableSized(threadData, ((modelica_integer) 2053));
_return: OMC_LABEL_UNUSED
return _hashTable;
}
