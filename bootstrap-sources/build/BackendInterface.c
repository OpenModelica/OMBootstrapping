#include "omc_simulation_settings.h"
#include "BackendInterface.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,4) {&Absyn_Within_TOP__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,3,3) {&Absyn_Program_PROGRAM__desc,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#include "util/modelica.h"

#include "BackendInterface_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_BackendInterface_doNothing(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInterface_doNothing,2,0) {(void*) boxptr_BackendInterface_doNothing,0}};
#define boxvar_BackendInterface_doNothing MMC_REFSTRUCTLIT(boxvar_lit_BackendInterface_doNothing)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInterface_noBackendLibrary(threadData_t *threadData, modelica_metatype _modelName, modelica_string _modelicaPath, modelica_boolean *out_success);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInterface_noBackendLibrary(threadData_t *threadData, modelica_metatype _modelName, modelica_metatype _modelicaPath, modelica_metatype *out_success);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInterface_noBackendLibrary,2,0) {(void*) boxptr_BackendInterface_noBackendLibrary,0}};
#define boxvar_BackendInterface_noBackendLibrary MMC_REFSTRUCTLIT(boxvar_lit_BackendInterface_noBackendLibrary)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInterface_keepExpression(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isChanged);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInterface_keepExpression(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isChanged);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInterface_keepExpression,2,0) {(void*) boxptr_BackendInterface_keepExpression,0}};
#define boxvar_BackendInterface_keepExpression MMC_REFSTRUCTLIT(boxvar_lit_BackendInterface_keepExpression)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendInterface_noBackendRewriteRules(threadData_t *threadData);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInterface_noBackendRewriteRules(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInterface_noBackendRewriteRules,2,0) {(void*) boxptr_BackendInterface_noBackendRewriteRules,0}};
#define boxvar_BackendInterface_noBackendRewriteRules MMC_REFSTRUCTLIT(boxvar_lit_BackendInterface_noBackendRewriteRules)

DLLModelDirection
void omc_BackendInterface_initInstHashTable(threadData_t *threadData)
{
  modelica_metatype _functions = NULL;
  modelica_fnptr _func;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _functions has no default value.
  _functions = getGlobalRoot(((modelica_integer) 31));

  _func = (modelica_fnptr) (OMC_BOX_FIELD(_functions, 5));

  (OMC_BOX_FIELD(_func, 2)) ? ((void(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2))) : ((void(*)(threadData_t*)) (OMC_BOX_FIELD(_func, 1))) (threadData);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_BackendInterface_appendLibrary(threadData_t *threadData, modelica_metatype _modelName, modelica_string _modelicaPath, modelica_boolean *out_success)
{
  modelica_metatype _program = NULL;
  modelica_boolean _success;
  modelica_metatype _functions = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _program has no default value.
  // _success has no default value.
  // _functions has no default value.
  _functions = getGlobalRoot(((modelica_integer) 31));

  _func = (modelica_fnptr) (OMC_BOX_FIELD(_functions, 4));

  /* Pattern-matching tuple assignment */
  tmpMeta3 = (OMC_BOX_FIELD(_func, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2)), _modelName, _modelicaPath, &tmpMeta1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, _modelName, _modelicaPath, &tmpMeta1);
  _program = tmpMeta3;
  tmp2 = omc_unbox_integer(tmpMeta1);
  _success = tmp2  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  if (out_success) { *out_success = _success; }
  omc_ret_ = _program;
  return omc_ret_;
}
modelica_metatype boxptr_BackendInterface_appendLibrary(threadData_t *threadData, modelica_metatype _modelName, modelica_metatype _modelicaPath, modelica_metatype *out_success)
{
  modelica_boolean _success;
  modelica_metatype _program = NULL;
  _program = omc_BackendInterface_appendLibrary(threadData, _modelName, _modelicaPath, &_success);
  /* skip box _program; Absyn.Program */
  if (out_success) { *out_success = omc_mk_icon(_success); }
  return _program;
}

DLLModelDirection
modelica_metatype omc_BackendInterface_rewriteFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _isChanged;
  modelica_metatype _functions = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _isChanged has no default value.
  // _functions has no default value.
  _functions = getGlobalRoot(((modelica_integer) 31));

  _func = (modelica_fnptr) (OMC_BOX_FIELD(_functions, 3));

  /* Pattern-matching tuple assignment */
  tmpMeta3 = (OMC_BOX_FIELD(_func, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2)), _inExp, &tmpMeta1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, _inExp, &tmpMeta1);
  _outExp = tmpMeta3;
  tmp2 = omc_unbox_integer(tmpMeta1);
  _isChanged = tmp2  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  if (out_isChanged) { *out_isChanged = _isChanged; }
  omc_ret_ = _outExp;
  return omc_ret_;
}
modelica_metatype boxptr_BackendInterface_rewriteFrontEnd(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isChanged)
{
  modelica_boolean _isChanged;
  modelica_metatype _outExp = NULL;
  _outExp = omc_BackendInterface_rewriteFrontEnd(threadData, _inExp, &_isChanged);
  /* skip box _outExp; Absyn.Exp */
  if (out_isChanged) { *out_isChanged = omc_mk_icon(_isChanged); }
  return _outExp;
}

DLLModelDirection
modelica_boolean omc_BackendInterface_noRewriteRulesFrontEnd(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_metatype _functions = NULL;
  modelica_fnptr _func;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noRules has no default value.
  // _functions has no default value.
  _functions = getGlobalRoot(((modelica_integer) 31));

  _func = (modelica_fnptr) (OMC_BOX_FIELD(_functions, 2));

  _noRules = omc_unbox_boolean((OMC_BOX_FIELD(_func, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2))) : ((modelica_metatype(*)(threadData_t*)) (OMC_BOX_FIELD(_func, 1))) (threadData));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _noRules;
  return omc_ret_;
}
modelica_metatype boxptr_BackendInterface_noRewriteRulesFrontEnd(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_metatype out_noRules;
  _noRules = omc_BackendInterface_noRewriteRulesFrontEnd(threadData);
  out_noRules = omc_mk_icon(_noRules);
  return out_noRules;
}

PROTECTED_FUNCTION_STATIC void omc_BackendInterface_doNothing(threadData_t *threadData)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInterface_noBackendLibrary(threadData_t *threadData, modelica_metatype _modelName, modelica_string _modelicaPath, modelica_boolean *out_success)
{
  modelica_metatype _program = NULL;
  modelica_boolean _success;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _program = _OMC_LIT1;
  _success = 0 /* false */;
  _return: OMC_LABEL_UNUSED
  if (out_success) { *out_success = _success; }
  omc_ret_ = _program;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInterface_noBackendLibrary(threadData_t *threadData, modelica_metatype _modelName, modelica_metatype _modelicaPath, modelica_metatype *out_success)
{
  modelica_boolean _success;
  modelica_metatype _program = NULL;
  _program = omc_BackendInterface_noBackendLibrary(threadData, _modelName, _modelicaPath, &_success);
  /* skip box _program; Absyn.Program */
  if (out_success) { *out_success = omc_mk_icon(_success); }
  return _program;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInterface_keepExpression(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean *out_isChanged)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _isChanged;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  _isChanged = 0 /* false */;
  _return: OMC_LABEL_UNUSED
  if (out_isChanged) { *out_isChanged = _isChanged; }
  omc_ret_ = _outExp;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInterface_keepExpression(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype *out_isChanged)
{
  modelica_boolean _isChanged;
  modelica_metatype _outExp = NULL;
  _outExp = omc_BackendInterface_keepExpression(threadData, _inExp, &_isChanged);
  /* skip box _outExp; Absyn.Exp */
  if (out_isChanged) { *out_isChanged = omc_mk_icon(_isChanged); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendInterface_noBackendRewriteRules(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _noRules = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _noRules;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInterface_noBackendRewriteRules(threadData_t *threadData)
{
  modelica_boolean _noRules;
  modelica_metatype out_noRules;
  _noRules = omc_BackendInterface_noBackendRewriteRules(threadData);
  out_noRules = omc_mk_icon(_noRules);
  return out_noRules;
}

DLLModelDirection
void omc_BackendInterface_initializeWithoutBackend(threadData_t *threadData)
{
  modelica_metatype tmpMeta1;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = omc_mk_box5(3, &BackendInterface_BackendInterfaceFunctions_BACKEND__INTERFACE__FUNCTIONS__desc, boxvar_BackendInterface_noBackendRewriteRules, boxvar_BackendInterface_keepExpression, boxvar_BackendInterface_noBackendLibrary, boxvar_BackendInterface_doNothing);
  omc_BackendInterface_initializeBackendInterface(threadData, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_BackendInterface_initializeBackendInterface(threadData_t *threadData, modelica_metatype _inFunctions)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  setGlobalRoot(((modelica_integer) 31), _inFunctions);
  _return: OMC_LABEL_UNUSED
  return;
}

