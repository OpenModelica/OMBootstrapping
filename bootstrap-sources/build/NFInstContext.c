#include "omc_simulation_settings.h"
#include "NFInstContext.h"
#include "util/modelica.h"

#include "NFInstContext_includes.h"



DLLDirection
modelica_integer omc_NFInstContext_nodeContext(threadData_t *threadData, modelica_metatype _node, modelica_integer _currentContext)
{
  modelica_integer _nodeContext;
  modelica_metatype _parent = NULL;
  modelica_metatype _parent_res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _nodeContext has no default value.
  // _parent has no default value.
  // _parent_res has no default value.
  _nodeContext = omc_NFInstContext_clearScopeFlags(threadData, _currentContext);

  _parent = omc_NFInstNode_InstNode_explicitParent(threadData, _node);

  if((!omc_NFInstNode_InstNode_isRootClass(threadData, _parent)))
  {
    _nodeContext = omc_NFInstContext_set(threadData, _nodeContext, ((modelica_integer) 8));

    goto _return;
  }

  _parent_res = omc_NFInstNode_InstNode_restriction(threadData, _parent);

  _nodeContext = ((omc_NFRestriction_isFunction(threadData, _parent_res) || omc_NFRestriction_isRecord(threadData, _parent_res))?omc_NFInstContext_set(threadData, _nodeContext, ((modelica_integer) 16)):omc_NFInstContext_set(threadData, _nodeContext, ((modelica_integer) 8)));
  _return: OMC_LABEL_UNUSED
  return _nodeContext;
}
modelica_metatype boxptr_NFInstContext_nodeContext(threadData_t *threadData, modelica_metatype _node, modelica_metatype _currentContext)
{
  modelica_integer tmp1;
  modelica_integer _nodeContext;
  modelica_metatype out_nodeContext;
  tmp1 = mmc_unbox_integer(_currentContext);
  _nodeContext = omc_NFInstContext_nodeContext(threadData, _node, tmp1);
  out_nodeContext = mmc_mk_icon(_nodeContext);
  return out_nodeContext;
}

DLLDirection
modelica_boolean omc_NFInstContext_isSingleExpression(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _isSingle;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isSingle = (_context < ((modelica_integer) 131071));
  _return: OMC_LABEL_UNUSED
  return _isSingle;
}
modelica_metatype boxptr_NFInstContext_isSingleExpression(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _isSingle;
  modelica_metatype out_isSingle;
  tmp1 = mmc_unbox_integer(_context);
  _isSingle = omc_NFInstContext_isSingleExpression(threadData, tmp1);
  out_isSingle = mmc_mk_icon(_isSingle);
  return out_isSingle;
}

DLLDirection
modelica_boolean omc_NFInstContext_inValidWhenScope(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 59408))) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inValidWhenScope(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inValidWhenScope(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inLoop(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 40960))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inLoop(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inLoop(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inDiscreteScope(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 2320))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inDiscreteScope(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inDiscreteScope(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inValidTypenameScope(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 393216))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inValidTypenameScope(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inValidTypenameScope(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inAnnotation(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 67108864))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inAnnotation(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inAnnotation(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inAssert(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 33554432))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inAssert(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inAssert(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inNoEvent(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 16777216))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inNoEvent(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inNoEvent(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inConnect(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 8388608))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inConnect(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inConnect(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inSubexpression(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 4194304))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inSubexpression(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inSubexpression(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inSubscript(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 2097152))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inSubscript(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inSubscript(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inCondition(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 1048576))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inCondition(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inCondition(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inBinding(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 524288))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inBinding(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inBinding(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inDimension(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 262144))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inDimension(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inDimension(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inIterationRange(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 131072))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inIterationRange(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inIterationRange(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inNonexpandable(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 65536))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inNonexpandable(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inNonexpandable(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inWhile(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 32768))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inWhile(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inWhile(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inIf(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 16384))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inIf(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inIf(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inFor(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 8192))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inFor(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inFor(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inClocked(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 4096))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inClocked(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inClocked(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inWhen(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 2048))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inWhen(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inWhen(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_onRHS(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 1024))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_onRHS(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_onRHS(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_onLHS(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 512))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_onLHS(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_onLHS(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inInitial(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 256))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inInitial(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inInitial(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inEquation(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 128))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inEquation(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inEquation(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inAlgorithm(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 64))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inAlgorithm(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inAlgorithm(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inRedeclared(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 32))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inRedeclared(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inRedeclared(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inFunction(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 16))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inFunction(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inFunction(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inClass(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 8))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inClass(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inClass(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inFastLookup(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 4))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inFastLookup(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inFastLookup(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inInstanceAPI(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 2))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inInstanceAPI(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inInstanceAPI(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFInstContext_inRelaxed(threadData_t *threadData, modelica_integer _context)
{
  modelica_boolean _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = (((_context) & (((modelica_integer) 1))) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFInstContext_inRelaxed(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_integer(_context);
  _res = omc_NFInstContext_inRelaxed(threadData, tmp1);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_integer omc_NFInstContext_clearExpFlags(threadData_t *threadData, modelica_integer _context)
{
  modelica_integer _outContext;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outContext has no default value.
  _outContext = ((_context) & (((modelica_integer) 31)));
  _return: OMC_LABEL_UNUSED
  return _outContext;
}
modelica_metatype boxptr_NFInstContext_clearExpFlags(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_integer _outContext;
  modelica_metatype out_outContext;
  tmp1 = mmc_unbox_integer(_context);
  _outContext = omc_NFInstContext_clearExpFlags(threadData, tmp1);
  out_outContext = mmc_mk_icon(_outContext);
  return out_outContext;
}

DLLDirection
modelica_integer omc_NFInstContext_clearScopeFlags(threadData_t *threadData, modelica_integer _context)
{
  modelica_integer _outContext;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outContext has no default value.
  _outContext = ((_context) & (((modelica_integer) 7)));
  _return: OMC_LABEL_UNUSED
  return _outContext;
}
modelica_metatype boxptr_NFInstContext_clearScopeFlags(threadData_t *threadData, modelica_metatype _context)
{
  modelica_integer tmp1;
  modelica_integer _outContext;
  modelica_metatype out_outContext;
  tmp1 = mmc_unbox_integer(_context);
  _outContext = omc_NFInstContext_clearScopeFlags(threadData, tmp1);
  out_outContext = mmc_mk_icon(_outContext);
  return out_outContext;
}

DLLDirection
modelica_boolean omc_NFInstContext_isNotSet(threadData_t *threadData, modelica_integer _context, modelica_integer _flag)
{
  modelica_boolean _notSet;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _notSet has no default value.
  _notSet = (((_context) & (_flag)) == ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _notSet;
}
modelica_metatype boxptr_NFInstContext_isNotSet(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _notSet;
  modelica_metatype out_notSet;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_flag);
  _notSet = omc_NFInstContext_isNotSet(threadData, tmp1, tmp2);
  out_notSet = mmc_mk_icon(_notSet);
  return out_notSet;
}

DLLDirection
modelica_boolean omc_NFInstContext_isSet(threadData_t *threadData, modelica_integer _context, modelica_integer _flag)
{
  modelica_boolean _set;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _set has no default value.
  _set = (((_context) & (_flag)) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _set;
}
modelica_metatype boxptr_NFInstContext_isSet(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _set;
  modelica_metatype out_set;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_flag);
  _set = omc_NFInstContext_isSet(threadData, tmp1, tmp2);
  out_set = mmc_mk_icon(_set);
  return out_set;
}

DLLDirection
modelica_integer omc_NFInstContext_unset(threadData_t *threadData, modelica_integer _context, modelica_integer _flag)
{
  modelica_integer _newOrigin;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newOrigin has no default value.
  _newOrigin = ((_context) & ((~_flag)));
  _return: OMC_LABEL_UNUSED
  return _newOrigin;
}
modelica_metatype boxptr_NFInstContext_unset(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _newOrigin;
  modelica_metatype out_newOrigin;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_flag);
  _newOrigin = omc_NFInstContext_unset(threadData, tmp1, tmp2);
  out_newOrigin = mmc_mk_icon(_newOrigin);
  return out_newOrigin;
}

DLLDirection
modelica_integer omc_NFInstContext_set(threadData_t *threadData, modelica_integer _context, modelica_integer _flag)
{
  modelica_integer _newOrigin;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newOrigin has no default value.
  _newOrigin = ((_context) | (_flag));
  _return: OMC_LABEL_UNUSED
  return _newOrigin;
}
modelica_metatype boxptr_NFInstContext_set(threadData_t *threadData, modelica_metatype _context, modelica_metatype _flag)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _newOrigin;
  modelica_metatype out_newOrigin;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_flag);
  _newOrigin = omc_NFInstContext_set(threadData, tmp1, tmp2);
  out_newOrigin = mmc_mk_icon(_newOrigin);
  return out_newOrigin;
}

