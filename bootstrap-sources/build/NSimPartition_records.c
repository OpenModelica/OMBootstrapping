#include <meta/meta_modelica.h>
/* Automatically generated header for bootstrapping MetaModelica */
#ifdef __cplusplus
extern "C" {
#endif
#ifdef ADD_METARECORD_DEFINITIONS
#ifndef NSimPartition_BASE__PARTITION__desc_added
#define NSimPartition_BASE__PARTITION__desc_added
ADD_METARECORD_DEFINITIONS const char* NSimPartition_BASE__PARTITION__desc__fields[2] = {"baseClock","subPartitions"};
ADD_METARECORD_DEFINITIONS struct record_description NSimPartition_BASE__PARTITION__desc = {
  "NSimPartition_BASE__PARTITION",
  "NSimPartition.BASE_PARTITION",
  NSimPartition_BASE__PARTITION__desc__fields
};
#endif
#else /* Only use the file as a header */
extern struct record_description NSimPartition_BASE__PARTITION__desc;
#endif
#ifdef ADD_METARECORD_DEFINITIONS
#ifndef NSimPartition_SUB__PARTITION__desc_added
#define NSimPartition_SUB__PARTITION__desc_added
ADD_METARECORD_DEFINITIONS const char* NSimPartition_SUB__PARTITION__desc__fields[5] = {"variables","equations","removedEquations","subClock","holdEvents"};
ADD_METARECORD_DEFINITIONS struct record_description NSimPartition_SUB__PARTITION__desc = {
  "NSimPartition_SUB__PARTITION",
  "NSimPartition.SUB_PARTITION",
  NSimPartition_SUB__PARTITION__desc__fields
};
#endif
#else /* Only use the file as a header */
extern struct record_description NSimPartition_SUB__PARTITION__desc;
#endif
#ifdef __cplusplus
}
#endif

