#include "omc_simulation_settings.h"
#include "SerializeSparsityPattern.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "_Jac"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ".bin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "SerializeSparsityPattern_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_SerializeSparsityPattern_serializeColor(threadData_t *threadData, modelica_string _name, modelica_integer _size, modelica_metatype _columns);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeSparsityPattern_serializeColor(threadData_t *threadData, modelica_metatype _name, modelica_metatype _size, modelica_metatype _columns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeSparsityPattern_serializeColor,2,0) {(void*) boxptr_SerializeSparsityPattern_serializeColor,0}};
#define boxvar_SerializeSparsityPattern_serializeColor MMC_REFSTRUCTLIT(boxvar_lit_SerializeSparsityPattern_serializeColor)
PROTECTED_FUNCTION_STATIC void omc_SerializeSparsityPattern_serializeJacobian(threadData_t *threadData, modelica_string _name, modelica_integer _numCols, modelica_integer _nnz, modelica_metatype _colPtrs, modelica_metatype _rowInds);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeSparsityPattern_serializeJacobian(threadData_t *threadData, modelica_metatype _name, modelica_metatype _numCols, modelica_metatype _nnz, modelica_metatype _colPtrs, modelica_metatype _rowInds);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeSparsityPattern_serializeJacobian,2,0) {(void*) boxptr_SerializeSparsityPattern_serializeJacobian,0}};
#define boxvar_SerializeSparsityPattern_serializeJacobian MMC_REFSTRUCTLIT(boxvar_lit_SerializeSparsityPattern_serializeJacobian)

PROTECTED_FUNCTION_STATIC void omc_SerializeSparsityPattern_serializeColor(threadData_t *threadData, modelica_string _name, modelica_integer _size, modelica_metatype _columns)
{
  int _size_ext;
  modelica_metatype _columns_ext;
  _size_ext = (int)_size;
  _columns_ext = (modelica_metatype)_columns;
  serializeC(MMC_STRINGDATA(_name), _size_ext, _columns_ext);
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeSparsityPattern_serializeColor(threadData_t *threadData, modelica_metatype _name, modelica_metatype _size, modelica_metatype _columns)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_size);
  omc_SerializeSparsityPattern_serializeColor(threadData, _name, tmp1, _columns);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeSparsityPattern_serializeJacobian(threadData_t *threadData, modelica_string _name, modelica_integer _numCols, modelica_integer _nnz, modelica_metatype _colPtrs, modelica_metatype _rowInds)
{
  int _numCols_ext;
  int _nnz_ext;
  modelica_metatype _colPtrs_ext;
  modelica_metatype _rowInds_ext;
  _numCols_ext = (int)_numCols;
  _nnz_ext = (int)_nnz;
  _colPtrs_ext = (modelica_metatype)_colPtrs;
  _rowInds_ext = (modelica_metatype)_rowInds;
  serializeJ(MMC_STRINGDATA(_name), _numCols_ext, _nnz_ext, _colPtrs_ext, _rowInds_ext);
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeSparsityPattern_serializeJacobian(threadData_t *threadData, modelica_metatype _name, modelica_metatype _numCols, modelica_metatype _nnz, modelica_metatype _colPtrs, modelica_metatype _rowInds)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_numCols);
  tmp2 = mmc_unbox_integer(_nnz);
  omc_SerializeSparsityPattern_serializeJacobian(threadData, _name, tmp1, tmp2, _colPtrs, _rowInds);
  return;
}

DLLDirection
modelica_string omc_SerializeSparsityPattern_serialize(threadData_t *threadData, modelica_metatype _code)
{
  modelica_string _dummy = NULL;
  modelica_metatype _columnPointers = NULL;
  modelica_metatype _rowIndices = NULL;
  modelica_metatype _columns = NULL;
  modelica_string _fname = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dummy = _OMC_LIT0;
  // _columnPointers has no default value.
  // _rowIndices has no default value.
  // _columns has no default value.
  // _fname has no default value.
  {
    modelica_metatype _jac;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 35))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _jac = MMC_CAR(tmpMeta1);
      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 5))))))
      {
        tmpMeta2 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))),_OMC_LIT1);
        tmpMeta3 = stringAppend(tmpMeta2,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 4))));
        tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT2);
        _fname = tmpMeta4;

        {
          modelica_metatype __omcQ_24tmpVar1;
          modelica_metatype* tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype __omcQ_24tmpVar0;
          modelica_integer tmp9;
          modelica_metatype _column_loopVar = 0;
          modelica_metatype _column;
          _column_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 5)));
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar1 = tmpMeta8; /* defaultValue */
          tmp7 = &__omcQ_24tmpVar1;
          while(1) {
            tmp9 = 1;
            if (!listEmpty(_column_loopVar)) {
              _column = MMC_CAR(_column_loopVar);
              _column_loopVar = MMC_CDR(_column_loopVar);
              tmp9--;
            }
            if (tmp9 == 0) {
              __omcQ_24tmpVar0 = mmc_mk_integer(listLength(omc_Util_tuple22(threadData, _column)));
              *tmp7 = mmc_mk_cons(__omcQ_24tmpVar0,0);
              tmp7 = &MMC_CDR(*tmp7);
            } else if (tmp9 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp7 = mmc_mk_nil();
          tmpMeta6 = __omcQ_24tmpVar1;
        }
        tmpMeta5 = mmc_mk_cons(mmc_mk_integer(((modelica_integer) 0)), tmpMeta6);
        _columnPointers = listArray(tmpMeta5);

        {
          modelica_metatype __omcQ_24tmpVar3;
          modelica_metatype* tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype __omcQ_24tmpVar2;
          modelica_integer tmp13;
          modelica_metatype _column_loopVar = 0;
          modelica_metatype _column;
          _column_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 5)));
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar3 = tmpMeta12; /* defaultValue */
          tmp11 = &__omcQ_24tmpVar3;
          while(1) {
            tmp13 = 1;
            if (!listEmpty(_column_loopVar)) {
              _column = MMC_CAR(_column_loopVar);
              _column_loopVar = MMC_CDR(_column_loopVar);
              tmp13--;
            }
            if (tmp13 == 0) {
              __omcQ_24tmpVar2 = omc_Util_tuple22(threadData, _column);
              *tmp11 = mmc_mk_cons(__omcQ_24tmpVar2,0);
              tmp11 = &MMC_CDR(*tmp11);
            } else if (tmp13 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp11 = mmc_mk_nil();
          tmpMeta10 = __omcQ_24tmpVar3;
        }
        _rowIndices = listArray(omc_List_flatten(threadData, tmpMeta10));

        omc_SerializeSparsityPattern_serializeJacobian(threadData, _fname, arrayLength(_columnPointers), arrayLength(_rowIndices), _columnPointers, _rowIndices);

        {
          modelica_metatype _color;
          for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 9))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
          {
            _color = MMC_CAR(tmpMeta14);
            _columns = listArray(_color);

            omc_SerializeSparsityPattern_serializeColor(threadData, _fname, arrayLength(_columns), _columns);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _dummy;
}

