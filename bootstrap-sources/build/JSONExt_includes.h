#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.


int omc_is_integer(modelica_metatype any)
{
  return MMC_IS_INTEGER(any);
}


int omc_is_real(modelica_metatype any)
{
  return (MMC_GETHDR(any) == MMC_REALHDR);
}


int omc_is_string(modelica_metatype any)
{
  return (MMC_HDRISSTRING(MMC_GETHDR(any)));
}


int omc_is_array(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  return (numslots >= 0 && ctor == MMC_ARRAY_TAG);
}


int omc_is_record(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  return (numslots > 0 && ctor > 1);
}


int omc_is_tuple(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  return (numslots > 0 && ctor == 0);
}


int omc_is_none(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  return (numslots == 0 && ctor == 1);
}


int omc_is_some(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  return (numslots == 1 && ctor == 1);
}


int omc_is_nil(modelica_metatype any)
{
  return (MMC_GETHDR(any) == MMC_NILHDR);
}


int omc_is_cons(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  return (numslots == 2 && ctor == 1);
}


modelica_metatype omc_get_record_names(modelica_metatype any)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  mmc_sint_t i;
  modelica_metatype lst = mmc_mk_nil();
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  if (numslots > 0 && ctor > 1)
  {
     struct record_description * desc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(any),1));
     /* add the record name */
     lst = mmc_mk_cons(mmc_mk_scon(desc->name), lst);
     /* add the component names */
     for (i = 2; i <= numslots; i++)
       lst = mmc_mk_cons(mmc_mk_scon(desc->fieldNames[i-2]), lst);
  }
  return lst;
}


modelica_metatype omc_get_record_component(modelica_metatype any, modelica_integer offset)
{
  mmc_uint_t hdr;
  mmc_sint_t numslots;
  mmc_uint_t ctor;
  mmc_sint_t i;
  modelica_metatype out = mmc_mk_nil();
  hdr = MMC_GETHDR(any);
  numslots = MMC_HDRSLOTS(hdr);
  ctor = MMC_HDRCTOR(hdr);
  if (numslots > 0 && ctor > 1)
  {
     out = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(any),offset+1));
  }
  return out;
}


modelica_integer omc_cast_int(modelica_metatype a)
{
  return MMC_UNTAGFIXNUM(a);
}

modelica_real omc_cast_real(modelica_metatype a)
{
  return (double) mmc_prim_get_real(a);
}

modelica_string omc_cast_string(modelica_metatype a)
{
  return MMC_STRINGDATA(a);
}

modelica_metatype omc_get_some(modelica_metatype any)
{
  return (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(any),1)));
}

modelica_integer omc_get_tuple_size(modelica_metatype any)
{
  mmc_sint_t numslots = MMC_HDRSLOTS(MMC_GETHDR(any));
  return numslots;
}


modelica_metatype omc_get_list(modelica_metatype any)
{
  return any;
}


modelica_metatype omc_get_list_element(modelica_metatype any, modelica_integer offset)
{
  return boxptr_listGet(NULL, any, mmc_mk_icon(offset));
}

#include "JSONExt.h"
#ifdef __cplusplus
}
#endif
