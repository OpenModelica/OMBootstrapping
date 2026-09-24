#include "omc_simulation_settings.h"
#include "ZeroCrossings.h"
#define _OMC_LIT0_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "floor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,5,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "ceil"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,4,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "mod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "div"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,3,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,5) {&ZeroCrossings_ZeroCrossingTree_Tree_EMPTY__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,2,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,7,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,0,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,5,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,7,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,4,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,4,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,12,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#include "util/modelica.h"

#include "ZeroCrossings_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_balance,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_balance,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_balance MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_calculateBalance,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_calculateBalance,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_ZeroCrossings_ZeroCrossingTree_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_height,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_height,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_height MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_printTreeStr2,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_printTreeStr2,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_rotateLeft,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_rotateLeft,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_rotateRight,2,0) {(void*) boxptr_ZeroCrossings_ZeroCrossingTree_rotateRight,0}};
#define boxvar_ZeroCrossings_ZeroCrossingTree_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_ZeroCrossings_ZeroCrossingTree_rotateRight)

DLLModelDirection
modelica_integer omc_ZeroCrossings_compare(threadData_t *threadData, modelica_metatype _zc1, modelica_metatype _zc2)
{
  modelica_integer _comp;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _zc1;
    tmp4_2 = _zc2;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _e4 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _e4 has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,3) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
          if (6 != omc_string_len(tmpMeta8) || strcmp(omc_string_data(_OMC_LIT0), omc_string_data(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta6, 3);
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmpMeta13);
          tmpMeta15 = MMC_CDR(tmpMeta13);
          if (!listEmpty(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp4_2, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,13,3) == 0) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,1) == 0) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 2);
          if (6 != omc_string_len(tmpMeta18) || strcmp(omc_string_data(_OMC_LIT0), omc_string_data(tmpMeta18)) != 0) goto tmp3_end;
          tmpMeta19 = OMC_BOX_FIELD(tmpMeta16, 3);
          if (listEmpty(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (listEmpty(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmpMeta21);
          tmpMeta23 = MMC_CDR(tmpMeta21);
          if (listEmpty(tmpMeta23)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmpMeta23);
          tmpMeta25 = MMC_CDR(tmpMeta23);
          if (!listEmpty(tmpMeta25)) goto tmp3_end;
          
          _e1 = tmpMeta10;
          _e2 = tmpMeta20;
          /* Pattern matching succeeded */
          tmp1 = omc_ExpressionBasics_compare(threadData, _e1, _e2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          tmpMeta26 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,13,3) == 0) goto tmp3_end;
          tmpMeta27 = OMC_BOX_FIELD(tmpMeta26, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,1,1) == 0) goto tmp3_end;
          tmpMeta28 = OMC_BOX_FIELD(tmpMeta27, 2);
          if (7 != omc_string_len(tmpMeta28) || strcmp(omc_string_data(_OMC_LIT1), omc_string_data(tmpMeta28)) != 0) goto tmp3_end;
          tmpMeta29 = OMC_BOX_FIELD(tmpMeta26, 3);
          if (listEmpty(tmpMeta29)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmpMeta29);
          tmpMeta31 = MMC_CDR(tmpMeta29);
          if (listEmpty(tmpMeta31)) goto tmp3_end;
          tmpMeta32 = MMC_CAR(tmpMeta31);
          tmpMeta33 = MMC_CDR(tmpMeta31);
          if (!listEmpty(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = OMC_BOX_FIELD(tmp4_2, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,13,3) == 0) goto tmp3_end;
          tmpMeta35 = OMC_BOX_FIELD(tmpMeta34, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,1,1) == 0) goto tmp3_end;
          tmpMeta36 = OMC_BOX_FIELD(tmpMeta35, 2);
          if (7 != omc_string_len(tmpMeta36) || strcmp(omc_string_data(_OMC_LIT1), omc_string_data(tmpMeta36)) != 0) goto tmp3_end;
          tmpMeta37 = OMC_BOX_FIELD(tmpMeta34, 3);
          if (listEmpty(tmpMeta37)) goto tmp3_end;
          tmpMeta38 = MMC_CAR(tmpMeta37);
          tmpMeta39 = MMC_CDR(tmpMeta37);
          if (listEmpty(tmpMeta39)) goto tmp3_end;
          tmpMeta40 = MMC_CAR(tmpMeta39);
          tmpMeta41 = MMC_CDR(tmpMeta39);
          if (!listEmpty(tmpMeta41)) goto tmp3_end;
          
          _e1 = tmpMeta30;
          _e2 = tmpMeta38;
          /* Pattern matching succeeded */
          tmp1 = omc_ExpressionBasics_compare(threadData, _e1, _e2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          tmpMeta42 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,13,3) == 0) goto tmp3_end;
          tmpMeta43 = OMC_BOX_FIELD(tmpMeta42, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,1,1) == 0) goto tmp3_end;
          tmpMeta44 = OMC_BOX_FIELD(tmpMeta43, 2);
          if (5 != omc_string_len(tmpMeta44) || strcmp(omc_string_data(_OMC_LIT2), omc_string_data(tmpMeta44)) != 0) goto tmp3_end;
          tmpMeta45 = OMC_BOX_FIELD(tmpMeta42, 3);
          if (listEmpty(tmpMeta45)) goto tmp3_end;
          tmpMeta46 = MMC_CAR(tmpMeta45);
          tmpMeta47 = MMC_CDR(tmpMeta45);
          if (listEmpty(tmpMeta47)) goto tmp3_end;
          tmpMeta48 = MMC_CAR(tmpMeta47);
          tmpMeta49 = MMC_CDR(tmpMeta47);
          if (!listEmpty(tmpMeta49)) goto tmp3_end;
          tmpMeta50 = OMC_BOX_FIELD(tmp4_2, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,13,3) == 0) goto tmp3_end;
          tmpMeta51 = OMC_BOX_FIELD(tmpMeta50, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,1,1) == 0) goto tmp3_end;
          tmpMeta52 = OMC_BOX_FIELD(tmpMeta51, 2);
          if (5 != omc_string_len(tmpMeta52) || strcmp(omc_string_data(_OMC_LIT2), omc_string_data(tmpMeta52)) != 0) goto tmp3_end;
          tmpMeta53 = OMC_BOX_FIELD(tmpMeta50, 3);
          if (listEmpty(tmpMeta53)) goto tmp3_end;
          tmpMeta54 = MMC_CAR(tmpMeta53);
          tmpMeta55 = MMC_CDR(tmpMeta53);
          if (listEmpty(tmpMeta55)) goto tmp3_end;
          tmpMeta56 = MMC_CAR(tmpMeta55);
          tmpMeta57 = MMC_CDR(tmpMeta55);
          if (!listEmpty(tmpMeta57)) goto tmp3_end;
          
          _e1 = tmpMeta46;
          _e2 = tmpMeta54;
          /* Pattern matching succeeded */
          tmp1 = omc_ExpressionBasics_compare(threadData, _e1, _e2);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          tmpMeta58 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta58,13,3) == 0) goto tmp3_end;
          tmpMeta59 = OMC_BOX_FIELD(tmpMeta58, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,1,1) == 0) goto tmp3_end;
          tmpMeta60 = OMC_BOX_FIELD(tmpMeta59, 2);
          if (4 != omc_string_len(tmpMeta60) || strcmp(omc_string_data(_OMC_LIT3), omc_string_data(tmpMeta60)) != 0) goto tmp3_end;
          tmpMeta61 = OMC_BOX_FIELD(tmpMeta58, 3);
          if (listEmpty(tmpMeta61)) goto tmp3_end;
          tmpMeta62 = MMC_CAR(tmpMeta61);
          tmpMeta63 = MMC_CDR(tmpMeta61);
          if (listEmpty(tmpMeta63)) goto tmp3_end;
          tmpMeta64 = MMC_CAR(tmpMeta63);
          tmpMeta65 = MMC_CDR(tmpMeta63);
          if (!listEmpty(tmpMeta65)) goto tmp3_end;
          tmpMeta66 = OMC_BOX_FIELD(tmp4_2, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta66,13,3) == 0) goto tmp3_end;
          tmpMeta67 = OMC_BOX_FIELD(tmpMeta66, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta67,1,1) == 0) goto tmp3_end;
          tmpMeta68 = OMC_BOX_FIELD(tmpMeta67, 2);
          if (4 != omc_string_len(tmpMeta68) || strcmp(omc_string_data(_OMC_LIT3), omc_string_data(tmpMeta68)) != 0) goto tmp3_end;
          tmpMeta69 = OMC_BOX_FIELD(tmpMeta66, 3);
          if (listEmpty(tmpMeta69)) goto tmp3_end;
          tmpMeta70 = MMC_CAR(tmpMeta69);
          tmpMeta71 = MMC_CDR(tmpMeta69);
          if (listEmpty(tmpMeta71)) goto tmp3_end;
          tmpMeta72 = MMC_CAR(tmpMeta71);
          tmpMeta73 = MMC_CDR(tmpMeta71);
          if (!listEmpty(tmpMeta73)) goto tmp3_end;
          
          _e1 = tmpMeta62;
          _e2 = tmpMeta70;
          /* Pattern matching succeeded */
          tmp1 = omc_ExpressionBasics_compare(threadData, _e1, _e2);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          tmpMeta74 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta74,13,3) == 0) goto tmp3_end;
          tmpMeta75 = OMC_BOX_FIELD(tmpMeta74, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta75,1,1) == 0) goto tmp3_end;
          tmpMeta76 = OMC_BOX_FIELD(tmpMeta75, 2);
          if (3 != omc_string_len(tmpMeta76) || strcmp(omc_string_data(_OMC_LIT4), omc_string_data(tmpMeta76)) != 0) goto tmp3_end;
          tmpMeta77 = OMC_BOX_FIELD(tmpMeta74, 3);
          if (listEmpty(tmpMeta77)) goto tmp3_end;
          tmpMeta78 = MMC_CAR(tmpMeta77);
          tmpMeta79 = MMC_CDR(tmpMeta77);
          if (listEmpty(tmpMeta79)) goto tmp3_end;
          tmpMeta80 = MMC_CAR(tmpMeta79);
          tmpMeta81 = MMC_CDR(tmpMeta79);
          if (listEmpty(tmpMeta81)) goto tmp3_end;
          tmpMeta82 = MMC_CAR(tmpMeta81);
          tmpMeta83 = MMC_CDR(tmpMeta81);
          if (!listEmpty(tmpMeta83)) goto tmp3_end;
          tmpMeta84 = OMC_BOX_FIELD(tmp4_2, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta84,13,3) == 0) goto tmp3_end;
          tmpMeta85 = OMC_BOX_FIELD(tmpMeta84, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta85,1,1) == 0) goto tmp3_end;
          tmpMeta86 = OMC_BOX_FIELD(tmpMeta85, 2);
          if (3 != omc_string_len(tmpMeta86) || strcmp(omc_string_data(_OMC_LIT4), omc_string_data(tmpMeta86)) != 0) goto tmp3_end;
          tmpMeta87 = OMC_BOX_FIELD(tmpMeta84, 3);
          if (listEmpty(tmpMeta87)) goto tmp3_end;
          tmpMeta88 = MMC_CAR(tmpMeta87);
          tmpMeta89 = MMC_CDR(tmpMeta87);
          if (listEmpty(tmpMeta89)) goto tmp3_end;
          tmpMeta90 = MMC_CAR(tmpMeta89);
          tmpMeta91 = MMC_CDR(tmpMeta89);
          if (listEmpty(tmpMeta91)) goto tmp3_end;
          tmpMeta92 = MMC_CAR(tmpMeta91);
          tmpMeta93 = MMC_CDR(tmpMeta91);
          if (!listEmpty(tmpMeta93)) goto tmp3_end;
          
          _e1 = tmpMeta78;
          _e2 = tmpMeta80;
          _e3 = tmpMeta88;
          _e4 = tmpMeta90;
          /* Pattern matching succeeded */
          _comp = omc_ExpressionBasics_compare(threadData, _e1, _e3);
          tmp1 = ((_comp == ((modelica_integer) 0))?omc_ExpressionBasics_compare(threadData, _e2, _e4):_comp);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          tmpMeta94 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta94,13,3) == 0) goto tmp3_end;
          tmpMeta95 = OMC_BOX_FIELD(tmpMeta94, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta95,1,1) == 0) goto tmp3_end;
          tmpMeta96 = OMC_BOX_FIELD(tmpMeta95, 2);
          if (3 != omc_string_len(tmpMeta96) || strcmp(omc_string_data(_OMC_LIT5), omc_string_data(tmpMeta96)) != 0) goto tmp3_end;
          tmpMeta97 = OMC_BOX_FIELD(tmpMeta94, 3);
          if (listEmpty(tmpMeta97)) goto tmp3_end;
          tmpMeta98 = MMC_CAR(tmpMeta97);
          tmpMeta99 = MMC_CDR(tmpMeta97);
          if (listEmpty(tmpMeta99)) goto tmp3_end;
          tmpMeta100 = MMC_CAR(tmpMeta99);
          tmpMeta101 = MMC_CDR(tmpMeta99);
          if (listEmpty(tmpMeta101)) goto tmp3_end;
          tmpMeta102 = MMC_CAR(tmpMeta101);
          tmpMeta103 = MMC_CDR(tmpMeta101);
          if (!listEmpty(tmpMeta103)) goto tmp3_end;
          tmpMeta104 = OMC_BOX_FIELD(tmp4_2, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta104,13,3) == 0) goto tmp3_end;
          tmpMeta105 = OMC_BOX_FIELD(tmpMeta104, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta105,1,1) == 0) goto tmp3_end;
          tmpMeta106 = OMC_BOX_FIELD(tmpMeta105, 2);
          if (3 != omc_string_len(tmpMeta106) || strcmp(omc_string_data(_OMC_LIT5), omc_string_data(tmpMeta106)) != 0) goto tmp3_end;
          tmpMeta107 = OMC_BOX_FIELD(tmpMeta104, 3);
          if (listEmpty(tmpMeta107)) goto tmp3_end;
          tmpMeta108 = MMC_CAR(tmpMeta107);
          tmpMeta109 = MMC_CDR(tmpMeta107);
          if (listEmpty(tmpMeta109)) goto tmp3_end;
          tmpMeta110 = MMC_CAR(tmpMeta109);
          tmpMeta111 = MMC_CDR(tmpMeta109);
          if (listEmpty(tmpMeta111)) goto tmp3_end;
          tmpMeta112 = MMC_CAR(tmpMeta111);
          tmpMeta113 = MMC_CDR(tmpMeta111);
          if (!listEmpty(tmpMeta113)) goto tmp3_end;
          
          _e1 = tmpMeta98;
          _e2 = tmpMeta100;
          _e3 = tmpMeta108;
          _e4 = tmpMeta110;
          /* Pattern matching succeeded */
          _comp = omc_ExpressionBasics_compare(threadData, _e1, _e3);
          tmp1 = ((_comp == ((modelica_integer) 0))?omc_ExpressionBasics_compare(threadData, _e2, _e4):_comp);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          tmpMeta114 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta115 = OMC_BOX_FIELD(tmp4_2, 3);
          
          _e1 = tmpMeta114;
          _e2 = tmpMeta115;
          /* Pattern matching succeeded */
          tmp1 = omc_ExpressionBasics_compare(threadData, _e1, _e2);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _comp = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_compare(threadData_t *threadData, modelica_metatype _zc1, modelica_metatype _zc2)
{
  modelica_integer _comp;
  modelica_metatype out_comp;
  _comp = omc_ZeroCrossings_compare(threadData, _zc1, _zc2);
  out_comp = omc_mk_icon(_comp);
  return out_comp;
}

DLLModelDirection
modelica_boolean omc_ZeroCrossings_equals(threadData_t *threadData, modelica_metatype _zc1, modelica_metatype _zc2)
{
  modelica_boolean _outBoolean;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _outBoolean = (((modelica_integer) 0) == omc_ZeroCrossings_compare(threadData, _zc1, _zc2));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outBoolean;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_equals(threadData_t *threadData, modelica_metatype _zc1, modelica_metatype _zc2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_ZeroCrossings_equals(threadData, _zc1, _zc2);
  out_outBoolean = omc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_get(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc)
{
  modelica_metatype _outZc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outZc has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_ZeroCrossings_ZeroCrossingTree_get(threadData, arrayGet((OMC_BOX_FIELD(_zc_set, 3)), ((modelica_integer) 1)), _zc);
  if (listEmpty(tmpMeta1)) OMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _outZc = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outZc;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_ZeroCrossings_contains(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc)
{
  modelica_boolean _matches;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matches has no default value.
  _matches = omc_ZeroCrossings_ZeroCrossingTree_hasKey(threadData, arrayGet((OMC_BOX_FIELD(_zc_set, 3)), ((modelica_integer) 1)), _zc);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _matches;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_contains(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc)
{
  modelica_boolean _matches;
  modelica_metatype out_matches;
  _matches = omc_ZeroCrossings_contains(threadData, _zc_set, _zc);
  out_matches = omc_mk_icon(_matches);
  return out_matches;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_updateIndices(threadData_t *threadData, modelica_metatype _ilst)
{
  modelica_metatype _olst = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _i;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _olst = tmpMeta1;
  _i = ((modelica_integer) 0);
  {
    modelica_metatype _zc;
    for (tmpMeta2 = _ilst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _zc = MMC_CAR(tmpMeta2);
      tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(6));
      memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_zc), 6*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[2] = omc_mk_integer(_i);
      _zc = tmpMeta3;

      tmpMeta4 = mmc_mk_cons(_zc, _olst);
      _olst = tmpMeta4;

      _i = ((modelica_integer) 1) + _i;
    }
  }

  _olst = listReverse(_olst);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _olst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_toList(threadData_t *threadData, modelica_metatype _zc)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta1;
  _lst = omc_DoubleEnded_toListNoCopyNoClear(threadData, (OMC_BOX_FIELD(_zc, 2)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_integer omc_ZeroCrossings_count(threadData_t *threadData, modelica_metatype _zc_set)
{
  modelica_integer _i;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  _i = omc_DoubleEnded_length(threadData, (OMC_BOX_FIELD(_zc_set, 2)));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_count(threadData_t *threadData, modelica_metatype _zc_set)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_ZeroCrossings_count(threadData, _zc_set);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
void omc_ZeroCrossings_push__list(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc_lst)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _zc;
    for (tmpMeta1 = _zc_lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _zc = MMC_CAR(tmpMeta1);
      omc_ZeroCrossings_push(threadData, _zc_set, _zc);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_ZeroCrossings_push(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc)
{
  modelica_metatype _addedCell = NULL;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _addedCell has no default value.
  omc_DoubleEnded_push__back(threadData, (OMC_BOX_FIELD(_zc_set, 2)), _zc);

  _addedCell = omc_DoubleEnded_currentBackCell(threadData, (OMC_BOX_FIELD(_zc_set, 2)));

  arrayUpdate((OMC_BOX_FIELD(_zc_set, 3)), ((modelica_integer) 1), omc_ZeroCrossings_ZeroCrossingTree_add(threadData, arrayGet((OMC_BOX_FIELD(_zc_set, 3)), ((modelica_integer) 1)), _zc, _addedCell, boxvar_ZeroCrossings_ZeroCrossingTree_addConflictKeep));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_ZeroCrossings_add__list(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc_lst)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _zc;
    for (tmpMeta1 = _zc_lst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _zc = MMC_CAR(tmpMeta1);
      omc_ZeroCrossings_add(threadData, _zc_set, _zc);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
void omc_ZeroCrossings_add(threadData_t *threadData, modelica_metatype _zc_set, modelica_metatype _zc)
{
  modelica_metatype _addedCell = NULL;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _addedCell has no default value.
  if((!omc_ZeroCrossings_contains(threadData, _zc_set, _zc)))
  {
    omc_DoubleEnded_push__back(threadData, (OMC_BOX_FIELD(_zc_set, 2)), _zc);

    _addedCell = omc_DoubleEnded_currentBackCell(threadData, (OMC_BOX_FIELD(_zc_set, 2)));

    arrayUpdate((OMC_BOX_FIELD(_zc_set, 3)), ((modelica_integer) 1), omc_ZeroCrossings_ZeroCrossingTree_add(threadData, arrayGet((OMC_BOX_FIELD(_zc_set, 3)), ((modelica_integer) 1)), _zc, _addedCell, boxvar_ZeroCrossings_ZeroCrossingTree_addConflictDefault));
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_integer omc_ZeroCrossings_zeroCrossingSize(threadData_t *threadData, modelica_metatype _zc)
{
  modelica_integer _s;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_zc, 5));
    {
      modelica_metatype _iter = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iter has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          _iter = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_BackendDAE_getSimIteratorSize(threadData, _iter);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _s = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_zeroCrossingSize(threadData_t *threadData, modelica_metatype _zc)
{
  modelica_integer _s;
  modelica_metatype out_s;
  _s = omc_ZeroCrossings_zeroCrossingSize(threadData, _zc);
  out_s = omc_mk_icon(_s);
  return out_s;
}

DLLModelDirection
modelica_integer omc_ZeroCrossings_length(threadData_t *threadData, modelica_metatype _zc_set)
{
  modelica_integer _i;
  modelica_metatype _zcs = NULL;
  modelica_integer tmp1;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  _zcs = omc_DoubleEnded_toListNoCopyNoClear(threadData, (OMC_BOX_FIELD(_zc_set, 2)));
  {
    modelica_integer __omcQ_24tmpVar3;
    modelica_integer __omcQ_24tmpVar2;
    modelica_integer tmp2;
    modelica_metatype _zc_loopVar = 0;
    modelica_metatype _zc;
    _zc_loopVar = _zcs;
    __omcQ_24tmpVar3 = ((modelica_integer) 0); /* defaultValue */
    while(1) {
      tmp2 = 1;
      if (!listEmpty(_zc_loopVar)) {
        _zc = MMC_CAR(_zc_loopVar);
        _zc_loopVar = MMC_CDR(_zc_loopVar);
        tmp2--;
      }
      if (tmp2 == 0) {
        __omcQ_24tmpVar2 = omc_ZeroCrossings_zeroCrossingSize(threadData, _zc);
        __omcQ_24tmpVar3 = __omcQ_24tmpVar3 + __omcQ_24tmpVar2;
      } else if (tmp2 == 1) {
        break;
      } else {
        OMC_THROW_INTERNAL();
      }
    }
    tmp1 = __omcQ_24tmpVar3;
  }
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_length(threadData_t *threadData, modelica_metatype _zc_set)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_ZeroCrossings_length(threadData, _zc_set);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_new(threadData_t *threadData)
{
  modelica_metatype _zc_set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _zc_set has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = omc_mk_box3(3, &BackendDAE_ZeroCrossingSet_ZERO__CROSSING__SET__desc, omc_DoubleEnded_fromList(threadData, tmpMeta1), arrayCreate(((modelica_integer) 1), omc_ZeroCrossings_ZeroCrossingTree_new(threadData)));
  _zc_set = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _zc_set;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _value = NULL;
      modelica_integer _key_comp;
      modelica_metatype _outTree = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _key_comp has no default value.
      // _outTree has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, _inKey, _inValue);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _key = tmpMeta6;
          /* Pattern matching succeeded */
          _key_comp = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, (OMC_BOX_FIELD(_tree, 5)), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, (OMC_BOX_FIELD(_tree, 6)), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (OMC_BOX_FIELD(_conflictFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_conflictFunc, 1))) (threadData, (OMC_BOX_FIELD(_conflictFunc, 2)), _inValue, (OMC_BOX_FIELD(_tree, 3)), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_conflictFunc, 1))) (threadData, _inValue, (OMC_BOX_FIELD(_tree, 3)), _key);

              if((!referenceEq((OMC_BOX_FIELD(_tree, 3)), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_ZeroCrossings_ZeroCrossingTree_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _inKey, (OMC_BOX_FIELD(_tree, 2)));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT6);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), _OMC_LIT6, tmpMeta12);
              _outTree = tmpMeta13;
            }
            else
            {
              _value = (OMC_BOX_FIELD(_conflictFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_conflictFunc, 1))) (threadData, (OMC_BOX_FIELD(_conflictFunc, 2)), _inValue, (OMC_BOX_FIELD(_tree, 3)), (OMC_BOX_FIELD(_tree, 2))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_conflictFunc, 1))) (threadData, _inValue, (OMC_BOX_FIELD(_tree, 3)), (OMC_BOX_FIELD(_tree, 2)));

              if((!referenceEq((OMC_BOX_FIELD(_tree, 3)), _value)))
              {
                tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
                memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = _value;
                _tree = tmpMeta14;
              }

              _outTree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_ZeroCrossings_ZeroCrossingTree_balance(threadData, _outTree));
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _key, modelica_fnptr _fn)
{
  modelica_metatype _tree = NULL;
  modelica_integer _key_comp;
  modelica_metatype _new_tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key_comp has no default value.
  // _new_tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, _key, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _key, (OMC_BOX_FIELD(_tree, 2)));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_ZeroCrossings_ZeroCrossingTree_addUpdate(threadData, (OMC_BOX_FIELD(_tree, 5)), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_ZeroCrossings_ZeroCrossingTree_addUpdate(threadData, (OMC_BOX_FIELD(_tree, 6)), _key, ((modelica_fnptr) _fn));
              _tree = tmpMeta7;
            }
            else
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_some((OMC_BOX_FIELD(_tree, 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_some((OMC_BOX_FIELD(_tree, 3))));
              _tree = tmpMeta8;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_ZeroCrossings_ZeroCrossingTree_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _key, (OMC_BOX_FIELD(_tree, 2)));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, _key, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none()));
            tmpMeta10 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT6);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, _key, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none()));
              tmpMeta12 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), _OMC_LIT6, tmpMeta11);
              _new_tree = tmpMeta12;
            }
            else
            {
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_some((OMC_BOX_FIELD(_tree, 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_some((OMC_BOX_FIELD(_tree, 3))));
              _tree = tmpMeta13;

              _new_tree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_ZeroCrossings_ZeroCrossingTree_balance(threadData, _new_tree));
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_balance(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_integer _lh;
      modelica_integer _rh;
      modelica_integer _diff;
      modelica_metatype _balanced_tree = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lh has no default value.
      // _rh has no default value.
      // _diff has no default value.
      // _balanced_tree has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lh = omc_ZeroCrossings_ZeroCrossingTree_height(threadData, (OMC_BOX_FIELD(_outTree, 5)));

          _rh = omc_ZeroCrossings_ZeroCrossingTree_height(threadData, (OMC_BOX_FIELD(_outTree, 6)));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData, (OMC_BOX_FIELD(_outTree, 6))) > ((modelica_integer) 0))?omc_ZeroCrossings_ZeroCrossingTree_rotateLeft(threadData, omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _outTree, (OMC_BOX_FIELD(_outTree, 5)), omc_ZeroCrossings_ZeroCrossingTree_rotateRight(threadData, (OMC_BOX_FIELD(_outTree, 6))))):omc_ZeroCrossings_ZeroCrossingTree_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData, (OMC_BOX_FIELD(_outTree, 5))) < ((modelica_integer) 0))?omc_ZeroCrossings_ZeroCrossingTree_rotateRight(threadData, omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _outTree, omc_ZeroCrossings_ZeroCrossingTree_rotateLeft(threadData, (OMC_BOX_FIELD(_outTree, 5))), (OMC_BOX_FIELD(_outTree, 6)))):omc_ZeroCrossings_ZeroCrossingTree_rotateRight(threadData, _outTree));
            }
            else
            {
              if((omc_unbox_integer((OMC_BOX_FIELD(_outTree, 4))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
              {
                tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
                _outTree = tmpMeta6;

                _balanced_tree = _outTree;
              }
              else
              {
                _balanced_tree = _outTree;
              }
            }
          }
          tmpMeta1 = _balanced_tree;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBalance has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_ZeroCrossings_ZeroCrossingTree_height(threadData, (OMC_BOX_FIELD(_inNode, 5))) - omc_ZeroCrossings_ZeroCrossingTree_height(threadData, (OMC_BOX_FIELD(_inNode, 6)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outBalance = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outBalance;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_ZeroCrossings_ZeroCrossingTree_calculateBalance(threadData, _inNode);
  out_outBalance = omc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _outResult = omc_ZeroCrossings_ZeroCrossingTree_fold(threadData, (OMC_BOX_FIELD(_inTree, 5)), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult);
          /* Tail recursive call */
          _inTree = (OMC_BOX_FIELD(_inTree, 6));
          _inStartValue = _outResult;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          _key = tmpMeta7;
          _value = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outResult;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outResult = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outResult;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
{
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = __omcQ_24in_5Fvalue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_boolean _c;
      int tmp4;
      // _c has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta7 = (OMC_BOX_FIELD(_foldFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_foldFunc, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _value, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _value, &tmpMeta5);
          _value = tmpMeta7;
          tmp6 = omc_unbox_integer(tmpMeta5);
          _c = tmp6  /* pattern as ty=Boolean */;

          if(_c)
          {
            _value = omc_ZeroCrossings_ZeroCrossingTree_foldCond(threadData, (OMC_BOX_FIELD(_tree, 5)), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_ZeroCrossings_ZeroCrossingTree_foldCond(threadData, (OMC_BOX_FIELD(_tree, 6)), ((modelica_fnptr) _foldFunc), _value);
          }
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = (OMC_BOX_FIELD(_foldFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_foldFunc, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _value, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _value, NULL);
          _value = tmpMeta8;
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
{
  modelica_metatype _foldArg1 = NULL;
  modelica_metatype _foldArg2 = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _foldArg1 = __omcQ_24in_5FfoldArg1;
  _foldArg2 = __omcQ_24in_5FfoldArg2;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _foldArg1 = omc_ZeroCrossings_ZeroCrossingTree_fold__2(threadData, (OMC_BOX_FIELD(_tree, 5)), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (OMC_BOX_FIELD(_foldFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_foldFunc, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_ZeroCrossings_ZeroCrossingTree_fold__2(threadData, (OMC_BOX_FIELD(_tree, 6)), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _foldArg1 = (OMC_BOX_FIELD(_foldFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_foldFunc, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_foldArg2) { *out_foldArg2 = _foldArg2; }
  omc_ret_ = _foldArg1;
  return omc_ret_;
}

DLLModelDirection
void omc_ZeroCrossings_ZeroCrossingTree_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_ZeroCrossings_ZeroCrossingTree_forEach(threadData, (OMC_BOX_FIELD(_tree, 5)), ((modelica_fnptr) _func));

          (OMC_BOX_FIELD(_func, 2)) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)));

          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 6));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (OMC_BOX_FIELD(_func, 2)) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_func, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_func, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)));
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      OMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT6;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 1);
      tmpMeta4 = OMC_BOX_FIELD(tmpMeta2, 2);
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_get(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _key, _k);
    tmp9_2 = _tree;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 4; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,1,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (OMC_BOX_FIELD(_tree, 3));
          goto tmp8_done;
        }
        case 1: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (OMC_BOX_FIELD(_tree, 3));
          goto tmp8_done;
        }
        case 2: {
          if (1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 6));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        case 3: {
          if (-1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 5));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      OMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _value = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _key;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _key, _k);
    tmp8_2 = _tree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((OMC_BOX_FIELD(_tree, 3)));
          goto tmp7_done;
        }
        case 1: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((OMC_BOX_FIELD(_tree, 3)));
          goto tmp7_done;
        }
        case 2: {
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 6));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 5));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_none();
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      OMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _value;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_ZeroCrossings_ZeroCrossingTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp5 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = 0 /* false */;
  // _key has no default value.
  // _key_comp has no default value.
  // _tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_inTree, 2));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_inTree, 2));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto _return;
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _key = tmpMeta1;

  _key_comp = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _inKey, _key);

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _key_comp;
    tmp8_2 = _inTree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp8_2, 6);
          _tree = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp8_2, 5);
          
          _tree = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      OMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmp5;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _comp;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_ZeroCrossings_ZeroCrossingTree_hasKey(threadData, _inTree, _inKey);
  out_comp = omc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_ZeroCrossings_ZeroCrossingTree_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHeight has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_unbox_integer((OMC_BOX_FIELD(_inNode, 4)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outHeight = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outHeight;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_ZeroCrossings_ZeroCrossingTree_height(threadData, _inNode);
  out_outHeight = omc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLModelDirection
void omc_ZeroCrossings_ZeroCrossingTree_intersection(threadData_t *threadData)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_boolean omc_ZeroCrossings_ZeroCrossingTree_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _isEmpty = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isEmpty;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_ZeroCrossings_ZeroCrossingTree_isEmpty(threadData, _tree);
  out_isEmpty = omc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _treeToJoin;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tree;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _tree = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, _tree, (OMC_BOX_FIELD(_treeToJoin, 2)), (OMC_BOX_FIELD(_treeToJoin, 3)), ((modelica_fnptr) _conflictFunc));

          _tree = omc_ZeroCrossings_ZeroCrossingTree_join(threadData, _tree, (OMC_BOX_FIELD(_treeToJoin, 5)), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (OMC_BOX_FIELD(_treeToJoin, 6));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, _tree, (OMC_BOX_FIELD(_treeToJoin, 2)), (OMC_BOX_FIELD(_treeToJoin, 3)), ((modelica_fnptr) _conflictFunc));
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_integer omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = omc_ZeroCrossings_compare(threadData, _inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outResult;
  return omc_ret_;
}
modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_ZeroCrossings_ZeroCrossingTree_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = omc_mk_icon(_outResult);
  return out_outResult;
}

DLLModelDirection
modelica_string omc_ZeroCrossings_ZeroCrossingTree_keyStr(threadData_t *threadData, modelica_metatype _inKey)
{
  modelica_string _outString = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  omc_string_store(&(_outString), omc_ExpressionBasics_printExpStr(threadData, (OMC_BOX_FIELD(_inKey, 3))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _key = NULL;
      int tmp4;
      // _key has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _key = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_ZeroCrossings_ZeroCrossingTree_listKeys(threadData, (OMC_BOX_FIELD(_tree, 6)), _lst);

          tmpMeta6 = mmc_mk_cons(_key, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 5));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 2);
          
          _key = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_key, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((OMC_BOX_FIELD(_inTree, 2)), _lst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _lst = omc_ZeroCrossings_ZeroCrossingTree_listKeysReverse(threadData, (OMC_BOX_FIELD(_inTree, 5)), _lst);

          tmpMeta6 = mmc_mk_cons((OMC_BOX_FIELD(_inTree, 2)), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (OMC_BOX_FIELD(_inTree, 6));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _value = NULL;
      int tmp4;
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _value = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_ZeroCrossings_ZeroCrossingTree_listValues(threadData, (OMC_BOX_FIELD(_tree, 6)), _lst);

          tmpMeta6 = mmc_mk_cons(_value, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 5));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 3);
          _value = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_value, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_ZeroCrossings_ZeroCrossingTree_map(threadData, (OMC_BOX_FIELD(_outTree, 5)), ((modelica_fnptr) _inFunc));

          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value);

          _new_right = omc_ZeroCrossings_ZeroCrossingTree_map(threadData, (OMC_BOX_FIELD(_outTree, 6)), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (OMC_BOX_FIELD(_outTree, 5)))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (OMC_BOX_FIELD(_outTree, 6))))))
          {
            tmpMeta7 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, _key, _new_value, (OMC_BOX_FIELD(_outTree, 4)), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 3);
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_ZeroCrossings_ZeroCrossingTree_mapFold(threadData, (OMC_BOX_FIELD(_outTree, 5)), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_ZeroCrossings_ZeroCrossingTree_mapFold(threadData, (OMC_BOX_FIELD(_outTree, 6)), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (OMC_BOX_FIELD(_outTree, 5)))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (OMC_BOX_FIELD(_outTree, 6))))))
          {
            tmpMeta7 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, _key, _new_value, (OMC_BOX_FIELD(_outTree, 4)), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 3);
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult ,&_outResult);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  omc_ret_ = _outTree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT6;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_ZeroCrossings_ZeroCrossingTree_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT7,omc_ZeroCrossings_ZeroCrossingTree_keyStr(threadData, (OMC_BOX_FIELD(_inNode, 2))));
          tmp7 = stringAppend(tmp6,_OMC_LIT8);
          tmp8 = stringAppend(tmp7,omc_ZeroCrossings_ZeroCrossingTree_valueStr(threadData, (OMC_BOX_FIELD(_inNode, 3))));
          tmp9 = stringAppend(tmp8,_OMC_LIT9);
          tmp1 = tmp9;
          goto tmp3_done;
        }
        case 1: {
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp10 = stringAppend(_OMC_LIT7,omc_ZeroCrossings_ZeroCrossingTree_keyStr(threadData, (OMC_BOX_FIELD(_inNode, 2))));
          tmp11 = stringAppend(tmp10,_OMC_LIT8);
          tmp12 = stringAppend(tmp11,omc_ZeroCrossings_ZeroCrossingTree_valueStr(threadData, (OMC_BOX_FIELD(_inNode, 3))));
          tmp13 = stringAppend(tmp12,_OMC_LIT9);
          tmp1 = tmp13;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_ZeroCrossings_ZeroCrossingTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT10;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_ZeroCrossings_ZeroCrossingTree_printNodeStr(threadData, _inTree);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 5);
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 6);
          _left = tmpMeta5;
          _right = tmpMeta6;
          /* Pattern matching succeeded */
          tmp7 = stringAppend(omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT11),omc_ZeroCrossings_ZeroCrossingTree_printNodeStr(threadData, _inTree));
          tmp8 = stringAppend(tmp7,_OMC_LIT12);
          tmp9 = stringAppend(tmp8,omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT11));
          tmp1 = tmp9;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT13:_OMC_LIT14));
          tmp6 = stringAppend(omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData, (OMC_BOX_FIELD(_inTree, 5)), 1 /* true */, tmp5),_inIndent);
          tmp7 = stringAppend(tmp6,(_isLeft?_OMC_LIT15:_OMC_LIT16));
          tmp8 = stringAppend(tmp7,_OMC_LIT17);
          tmp9 = stringAppend(tmp8,omc_ZeroCrossings_ZeroCrossingTree_printNodeStr(threadData, _inTree));
          tmp10 = stringAppend(tmp9,_OMC_LIT12);
          tmp11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT14:_OMC_LIT13));
          tmp12 = stringAppend(tmp10,omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData, (OMC_BOX_FIELD(_inTree, 6)), 0 /* false */, tmp11));
          tmp1 = tmp12;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT15:_OMC_LIT16));
          tmp14 = stringAppend(tmp13,_OMC_LIT17);
          tmp15 = stringAppend(tmp14,omc_ZeroCrossings_ZeroCrossingTree_printNodeStr(threadData, _inTree));
          tmp16 = stringAppend(tmp15,_OMC_LIT12);
          tmp1 = tmp16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  omc_string_store(&(_outString), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = omc_unbox_integer(_isLeft);
  _outString = omc_ZeroCrossings_ZeroCrossingTree_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t1;
    tmp4_2 = _t2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = referenceEq(_t1, _t2);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _outNode, (OMC_BOX_FIELD(_outNode, 5)), (OMC_BOX_FIELD(_child, 5)));
          tmpMeta1 = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _child, _node, (OMC_BOX_FIELD(_child, 6)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _outNode, (OMC_BOX_FIELD(_outNode, 5)), _OMC_LIT6);
          tmpMeta1 = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _child, _node, _OMC_LIT6);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _outNode, (OMC_BOX_FIELD(_child, 6)), (OMC_BOX_FIELD(_outNode, 6)));
          tmpMeta1 = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _child, (OMC_BOX_FIELD(_child, 5)), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _outNode, _OMC_LIT6, (OMC_BOX_FIELD(_outNode, 6)));
          tmpMeta1 = omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData, _child, _OMC_LIT6, _node);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outNode;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _orig;
    tmp4_2 = _left;
    tmp4_3 = _right;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box3(4, &ZeroCrossings_ZeroCrossingTree_Tree_LEAF__desc, (OMC_BOX_FIELD(_orig, 2)), (OMC_BOX_FIELD(_orig, 3)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _orig;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = (modelica_boolean)(omc_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData, (OMC_BOX_FIELD(_orig, 5)), _left) && omc_ZeroCrossings_ZeroCrossingTree_referenceEqOrEmpty(threadData, (OMC_BOX_FIELD(_orig, 6)), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, (OMC_BOX_FIELD(_orig, 2)), (OMC_BOX_FIELD(_orig, 3)), omc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_ZeroCrossings_ZeroCrossingTree_height(threadData, _left)),(modelica_integer)(omc_ZeroCrossings_ZeroCrossingTree_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = omc_mk_box6(3, &ZeroCrossings_ZeroCrossingTree_Tree_NODE__desc, (OMC_BOX_FIELD(_orig, 2)), (OMC_BOX_FIELD(_orig, 3)), omc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_ZeroCrossings_ZeroCrossingTree_height(threadData, _left)),(modelica_integer)(omc_ZeroCrossings_ZeroCrossingTree_height(threadData, _right)))), _left, _right);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_metatype _key = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _key has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (OMC_BOX_FIELD(_tree, 6));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _key = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _key;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = omc_ZeroCrossings_ZeroCrossingTree_toList(threadData, (OMC_BOX_FIELD(_inTree, 6)), _lst);

          tmpMeta8 = omc_mk_box2(0, _key, _value);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _lst);
          _lst = tmpMeta7;
          /* Tail recursive call */
          _inTree = (OMC_BOX_FIELD(_inTree, 5));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 2);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 3);
          _key = tmpMeta9;
          _value = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta12 = omc_mk_box2(0, _key, _value);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _lst);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      OMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _lst;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ZeroCrossings_ZeroCrossingTree_update(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_ZeroCrossings_ZeroCrossingTree_add(threadData, _tree, _key, _value, boxvar_ZeroCrossings_ZeroCrossingTree_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_ZeroCrossings_ZeroCrossingTree_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  modelica_metatype _zc = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _zc has no default value.
  _zc = listGet(_inValue, ((modelica_integer) 1));

  omc_string_store(&(_outString), omc_ExpressionBasics_printExpStr(threadData, (OMC_BOX_FIELD(_zc, 3))));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

