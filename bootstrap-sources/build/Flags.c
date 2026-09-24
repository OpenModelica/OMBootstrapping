#include "omc_simulation_settings.h"
#include "Flags.h"
#include "util/modelica.h"

#include "Flags_includes.h"



DLLModelDirection
modelica_integer omc_Flags_getConfigEnum(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,7,2) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp3 = omc_unbox_integer(tmpMeta2);
  _outValue = tmp3  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_getConfigEnum(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigEnum(threadData, _inFlag);
  out_outValue = omc_mk_icon(_outValue);
  return out_outValue;
}

DLLModelDirection
modelica_metatype omc_Flags_getConfigStringList(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,6,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_Flags_getConfigString(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_string _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,5,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}

DLLModelDirection
modelica_real omc_Flags_getConfigReal(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_real _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_real omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,4,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp3 = omc_unbox_real(tmpMeta2);
  _outValue = tmp3  /* pattern as ty=Real */;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_getConfigReal(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_real _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigReal(threadData, _inFlag);
  out_outValue = omc_mk_rcon(_outValue);
  return out_outValue;
}

DLLModelDirection
modelica_metatype omc_Flags_getConfigIntList(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,3,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  _outValue = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}

DLLModelDirection
modelica_integer omc_Flags_getConfigInt(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,2,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp3 = omc_unbox_integer(tmpMeta2);
  _outValue = tmp3  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_getConfigInt(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_integer _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigInt(threadData, _inFlag);
  out_outValue = omc_mk_icon(_outValue);
  return out_outValue;
}

DLLModelDirection
modelica_boolean omc_Flags_getConfigBool(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Flags_getConfigValue(threadData, _inFlag);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp3 = omc_unbox_integer(tmpMeta2);
  _outValue = tmp3  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_getConfigBool(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_getConfigBool(threadData, _inFlag);
  out_outValue = omc_mk_icon(_outValue);
  return out_outValue;
}

DLLModelDirection
modelica_metatype omc_Flags_getConfigValue(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_metatype _outValue = NULL;
  modelica_metatype _config_flags = NULL;
  modelica_integer _index;
  modelica_metatype _flags = NULL;
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _config_flags has no default value.
  // _index has no default value.
  // _flags has no default value.
  // _name has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inFlag;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp3 = omc_unbox_integer(tmpMeta2);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 3);
  _index = tmp3  /* pattern as ty=Integer */;
  _name = tmpMeta4;

  _flags = omc_Flags_getFlags(threadData, 1 /* true */);

  /* Pattern-matching assignment */
  tmpMeta5 = _flags;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,2) == 0) OMC_THROW_INTERNAL();
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 3);
  _config_flags = tmpMeta6;

  _outValue = arrayGet(_config_flags, _index);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_Flags_getConfigName(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inFlag;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 3);
  _name = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_Flags_isConfigFlagSet(threadData_t *threadData, modelica_metatype _inFlag, modelica_string _hasMember)
{
  modelica_boolean _isMember;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isMember has no default value.
  _isMember = listMember(_hasMember, omc_Flags_getConfigStringList(threadData, _inFlag));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isMember;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_isConfigFlagSet(threadData_t *threadData, modelica_metatype _inFlag, modelica_metatype _hasMember)
{
  modelica_boolean _isMember;
  modelica_metatype out_isMember;
  _isMember = omc_Flags_isConfigFlagSet(threadData, _inFlag, _hasMember);
  out_isMember = omc_mk_icon(_isMember);
  return out_isMember;
}

DLLModelDirection
modelica_boolean omc_Flags_isSet(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype _debug_flags = NULL;
  modelica_metatype _flags = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  // _debug_flags has no default value.
  // _flags has no default value.
  // _index has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inFlag;
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp3 = omc_unbox_integer(tmpMeta2);
  _index = tmp3  /* pattern as ty=Integer */;

  _flags = omc_Flags_getFlags(threadData, 1 /* true */);

  /* Pattern-matching assignment */
  tmpMeta4 = _flags;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,0,2) == 0) OMC_THROW_INTERNAL();
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta4, 2);
  _debug_flags = tmpMeta5;

  _outValue = omc_unbox_boolean(arrayGet(_debug_flags, _index));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outValue;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_isSet(threadData_t *threadData, modelica_metatype _inFlag)
{
  modelica_boolean _outValue;
  modelica_metatype out_outValue;
  _outValue = omc_Flags_isSet(threadData, _inFlag);
  out_outValue = omc_mk_icon(_outValue);
  return out_outValue;
}

DLLModelDirection
modelica_metatype omc_Flags_getFlags(threadData_t *threadData, modelica_boolean _initialize)
{
  modelica_metatype _flags = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flags has no default value.
  _flags = getGlobalRoot(((modelica_integer) 17));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _flags;
  return omc_ret_;
}
modelica_metatype boxptr_Flags_getFlags(threadData_t *threadData, modelica_metatype _initialize)
{
  modelica_integer tmp1;
  modelica_metatype _flags = NULL;
  tmp1 = omc_unbox_integer(_initialize);
  _flags = omc_Flags_getFlags(threadData, tmp1);
  /* skip box _flags; Flags.Flag */
  return _flags;
}

