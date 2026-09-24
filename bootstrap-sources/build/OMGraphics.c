#include "omc_simulation_settings.h"
#include "OMGraphics.h"
#include "util/modelica.h"

#include "OMGraphics_includes.h"



modelica_boolean omc_OMGraphics_writePlacedConnectorIconPNG(threadData_t *threadData, modelica_integer _handle, modelica_integer _index, modelica_string _path)
{
  int _handle_ext;
  int _index_ext;
  int _ok_ext;
  modelica_boolean _ok;
  // _ok has no default value.
  _handle_ext = (int) _handle;
  _index_ext = (int) _index;
  _ok_ext = OMGraphics_writePlacedConnectorIconPNG(_handle_ext, _index_ext, omc_string_data(_path));
  _ok = (modelica_boolean)_ok_ext;
  return _ok;
}
modelica_metatype boxptr_OMGraphics_writePlacedConnectorIconPNG(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _index, modelica_metatype _path)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _ok;
  modelica_metatype out_ok;
  tmp1 = omc_unbox_integer(_handle);
  tmp2 = omc_unbox_integer(_index);
  _ok = omc_OMGraphics_writePlacedConnectorIconPNG(threadData, tmp1, tmp2, _path);
  out_ok = omc_mk_icon(_ok);
  return out_ok;
}

modelica_string omc_OMGraphics_placedConnectorIconSVG(threadData_t *threadData, modelica_integer _handle, modelica_integer _index)
{
  int _handle_ext;
  int _index_ext;
  const char* _svg_ext;
  modelica_string _svg = NULL;
  // _svg has no default value.
  _handle_ext = (int) _handle;
  _index_ext = (int) _index;
  _svg_ext = OMGraphics_placedConnectorIconSVG(_handle_ext, _index_ext);
  _svg = (modelica_string)omc_string_new(_svg_ext);
  return _svg;
}
modelica_metatype boxptr_OMGraphics_placedConnectorIconSVG(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _svg = NULL;
  tmp1 = omc_unbox_integer(_handle);
  tmp2 = omc_unbox_integer(_index);
  _svg = omc_OMGraphics_placedConnectorIconSVG(threadData, tmp1, tmp2);
  /* skip box _svg; String */
  return _svg;
}

modelica_string omc_OMGraphics_placedConnectorInfo(threadData_t *threadData, modelica_integer _handle, modelica_integer _index)
{
  int _handle_ext;
  int _index_ext;
  const char* _info_ext;
  modelica_string _info = NULL;
  // _info has no default value.
  _handle_ext = (int) _handle;
  _index_ext = (int) _index;
  _info_ext = OMGraphics_placedConnectorInfo(_handle_ext, _index_ext);
  _info = (modelica_string)omc_string_new(_info_ext);
  return _info;
}
modelica_metatype boxptr_OMGraphics_placedConnectorInfo(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _index)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _info = NULL;
  tmp1 = omc_unbox_integer(_handle);
  tmp2 = omc_unbox_integer(_index);
  _info = omc_OMGraphics_placedConnectorInfo(threadData, tmp1, tmp2);
  /* skip box _info; String */
  return _info;
}

modelica_integer omc_OMGraphics_placedConnectorCount(threadData_t *threadData, modelica_integer _handle)
{
  int _handle_ext;
  int _n_ext;
  modelica_integer _n;
  // _n has no default value.
  _handle_ext = (int) _handle;
  _n_ext = OMGraphics_placedConnectorCount(_handle_ext);
  _n = (modelica_integer)_n_ext;
  return _n;
}
modelica_metatype boxptr_OMGraphics_placedConnectorCount(threadData_t *threadData, modelica_metatype _handle)
{
  modelica_integer tmp1;
  modelica_integer _n;
  modelica_metatype out_n;
  tmp1 = omc_unbox_integer(_handle);
  _n = omc_OMGraphics_placedConnectorCount(threadData, tmp1);
  out_n = omc_mk_icon(_n);
  return out_n;
}

modelica_boolean omc_OMGraphics_writeIconPNGFromHandle(threadData_t *threadData, modelica_integer _handle, modelica_string _modelName, modelica_string _path)
{
  int _handle_ext;
  int _ok_ext;
  modelica_boolean _ok;
  // _ok has no default value.
  _handle_ext = (int) _handle;
  _ok_ext = OMGraphics_writeIconPNGFromHandle(_handle_ext, omc_string_data(_modelName), omc_string_data(_path));
  _ok = (modelica_boolean)_ok_ext;
  return _ok;
}
modelica_metatype boxptr_OMGraphics_writeIconPNGFromHandle(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _modelName, modelica_metatype _path)
{
  modelica_integer tmp1;
  modelica_boolean _ok;
  modelica_metatype out_ok;
  tmp1 = omc_unbox_integer(_handle);
  _ok = omc_OMGraphics_writeIconPNGFromHandle(threadData, tmp1, _modelName, _path);
  out_ok = omc_mk_icon(_ok);
  return out_ok;
}

modelica_string omc_OMGraphics_graphicalRepresentationXMLFromHandle(threadData_t *threadData, modelica_integer _handle, modelica_real _scaleToMm)
{
  int _handle_ext;
  double _scaleToMm_ext;
  const char* _xml_ext;
  modelica_string _xml = NULL;
  // _xml has no default value.
  _handle_ext = (int) _handle;
  _scaleToMm_ext = (double) _scaleToMm;
  _xml_ext = OMGraphics_graphicalRepresentationXMLFromHandle(_handle_ext, _scaleToMm_ext);
  _xml = (modelica_string)omc_string_new(_xml_ext);
  return _xml;
}
modelica_metatype boxptr_OMGraphics_graphicalRepresentationXMLFromHandle(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _scaleToMm)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_string _xml = NULL;
  tmp1 = omc_unbox_integer(_handle);
  tmp2 = omc_unbox_real(_scaleToMm);
  _xml = omc_OMGraphics_graphicalRepresentationXMLFromHandle(threadData, tmp1, tmp2);
  /* skip box _xml; String */
  return _xml;
}

modelica_string omc_OMGraphics_iconSVGFromHandle(threadData_t *threadData, modelica_integer _handle, modelica_string _modelName)
{
  int _handle_ext;
  const char* _svg_ext;
  modelica_string _svg = NULL;
  // _svg has no default value.
  _handle_ext = (int) _handle;
  _svg_ext = OMGraphics_iconSVGFromHandle(_handle_ext, omc_string_data(_modelName));
  _svg = (modelica_string)omc_string_new(_svg_ext);
  return _svg;
}
modelica_metatype boxptr_OMGraphics_iconSVGFromHandle(threadData_t *threadData, modelica_metatype _handle, modelica_metatype _modelName)
{
  modelica_integer tmp1;
  modelica_string _svg = NULL;
  tmp1 = omc_unbox_integer(_handle);
  _svg = omc_OMGraphics_iconSVGFromHandle(threadData, tmp1, _modelName);
  /* skip box _svg; String */
  return _svg;
}

