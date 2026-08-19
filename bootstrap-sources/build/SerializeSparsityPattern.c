#include "omc_simulation_settings.h"
#include "SerializeSparsityPattern.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "SerializeSparsityPattern.serialize failed because no row coloring for the adjoint jacobian exists."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,98,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "_Jac"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ".bin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,4,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
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
  _size_ext = (int) _size;
  _columns_ext = (modelica_metatype) _columns;
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
  _numCols_ext = (int) _numCols;
  _nnz_ext = (int) _nnz;
  _colPtrs_ext = (modelica_metatype) _colPtrs;
  _rowInds_ext = (modelica_metatype) _rowInds;
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
  modelica_metatype _pattern = NULL;
  modelica_metatype _colorList = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dummy = _OMC_LIT0;
  // _columnPointers has no default value.
  // _rowIndices has no default value.
  // _columns has no default value.
  // _fname has no default value.
  // _pattern has no default value.
  // _colorList has no default value.
  {
    modelica_metatype _jac;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 35))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _jac = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 5)));
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,0) == 0) goto tmp4_end;
              /* Pattern matching succeeded */
              tmp2 = 1 /* true */;
              goto tmp4_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmp2 = 0 /* false */;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      if(tmp2)
      {
        if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 17)))))
        {
          _pattern = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 7)));

          if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 11))))))
          {
            _colorList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 11)));
          }
          else
          {
            omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);

            MMC_THROW_INTERNAL();
          }
        }
        else
        {
          _pattern = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 6)));

          _colorList = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 10)));
        }

        if((!listEmpty(_pattern)))
        {
          tmpMeta7 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))),_OMC_LIT7);
          tmpMeta8 = stringAppend(tmpMeta7,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 4))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT8);
          _fname = tmpMeta9;

          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp14;
            modelica_metatype _column_loopVar = 0;
            modelica_metatype _column;
            _column_loopVar = _pattern;
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar1;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_column_loopVar)) {
                _column = MMC_CAR(_column_loopVar);
                _column_loopVar = MMC_CDR(_column_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar0 = mmc_mk_integer(listLength(omc_Util_tuple22(threadData, _column)));
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar1;
          }
          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(((modelica_integer) 0)), tmpMeta11);
          _columnPointers = listArray(tmpMeta10);

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp18;
            modelica_metatype _column_loopVar = 0;
            modelica_metatype _column;
            _column_loopVar = _pattern;
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar3;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_column_loopVar)) {
                _column = MMC_CAR(_column_loopVar);
                _column_loopVar = MMC_CDR(_column_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar2 = omc_Util_tuple22(threadData, _column);
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar3;
          }
          _rowIndices = listArray(omc_List_flatten(threadData, tmpMeta15));

          omc_SerializeSparsityPattern_serializeJacobian(threadData, _fname, arrayLength(_columnPointers), arrayLength(_rowIndices), _columnPointers, _rowIndices);

          {
            modelica_metatype _color;
            for (tmpMeta19 = _colorList; !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
            {
              _color = MMC_CAR(tmpMeta19);
              _columns = listArray(_color);

              omc_SerializeSparsityPattern_serializeColor(threadData, _fname, arrayLength(_columns), _columns);
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _dummy;
}

