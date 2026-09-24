#include "omc_simulation_settings.h"
#include "MMath.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(6))}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(3))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "testRational succeeded\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,23,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "testRationals failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,21,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#include "util/modelica.h"

#include "MMath_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_MMath_normalizeZero(threadData_t *threadData, modelica_metatype _r);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MMath_normalizeZero,2,0) {(void*) boxptr_MMath_normalizeZero,0}};
#define boxvar_MMath_normalizeZero MMC_REFSTRUCTLIT(boxvar_lit_MMath_normalizeZero)

DLLModelDirection
void omc_MMath_testRational(threadData_t *threadData)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = omc_MMath_addRational(threadData, _OMC_LIT0, _OMC_LIT1);
          tmpMeta6 = OMC_BOX_FIELD(tmpMeta5, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          if (7 != tmp7) goto goto_1;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta5, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          if (6 != tmp9) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta10 = omc_MMath_addRational(threadData, _OMC_LIT0, _OMC_LIT2);
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 2);
          tmp12 = omc_unbox_integer(tmpMeta11);
          if (2 != tmp12) goto goto_1;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta10, 3);
          tmp14 = omc_unbox_integer(tmpMeta13);
          if (1 != tmp14) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta15 = omc_MMath_subRational(threadData, _OMC_LIT2, _OMC_LIT0);
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
          tmp17 = omc_unbox_integer(tmpMeta16);
          if (1 != tmp17) goto goto_1;
          tmpMeta18 = OMC_BOX_FIELD(tmpMeta15, 3);
          tmp19 = omc_unbox_integer(tmpMeta18);
          if (1 != tmp19) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta20 = omc_MMath_subRational(threadData, _OMC_LIT0, _OMC_LIT3);
          tmpMeta21 = OMC_BOX_FIELD(tmpMeta20, 2);
          tmp22 = omc_unbox_integer(tmpMeta21);
          if (1 != tmp22) goto goto_1;
          tmpMeta23 = OMC_BOX_FIELD(tmpMeta20, 3);
          tmp24 = omc_unbox_integer(tmpMeta23);
          if (3 != tmp24) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta25 = omc_MMath_multRational(threadData, _OMC_LIT1, _OMC_LIT4);
          tmpMeta26 = OMC_BOX_FIELD(tmpMeta25, 2);
          tmp27 = omc_unbox_integer(tmpMeta26);
          if (4 != tmp27) goto goto_1;
          tmpMeta28 = OMC_BOX_FIELD(tmpMeta25, 3);
          tmp29 = omc_unbox_integer(tmpMeta28);
          if (3 != tmp29) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta30 = omc_MMath_multRational(threadData, _OMC_LIT5, _OMC_LIT5);
          tmpMeta31 = OMC_BOX_FIELD(tmpMeta30, 2);
          tmp32 = omc_unbox_integer(tmpMeta31);
          if (1 != tmp32) goto goto_1;
          tmpMeta33 = OMC_BOX_FIELD(tmpMeta30, 3);
          tmp34 = omc_unbox_integer(tmpMeta33);
          if (1 != tmp34) goto goto_1;

          /* Pattern-matching assignment */
          tmpMeta35 = omc_MMath_divRational(threadData, _OMC_LIT6, _OMC_LIT1);
          tmpMeta36 = OMC_BOX_FIELD(tmpMeta35, 2);
          tmp37 = omc_unbox_integer(tmpMeta36);
          if (1 != tmp37) goto goto_1;
          tmpMeta38 = OMC_BOX_FIELD(tmpMeta35, 3);
          tmp39 = omc_unbox_integer(tmpMeta38);
          if (2 != tmp39) goto goto_1;

          fputs(omc_string_data(_OMC_LIT7),stdout);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(omc_string_data(_OMC_LIT8),stdout);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      OMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_integer omc_MMath_intGcd(threadData_t *threadData, modelica_integer _i1, modelica_integer _i2)
{
  modelica_integer _i;
  modelica_integer tmp1 = 0;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _i has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _i2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _i1;
          goto tmp3_done;
        }
        case 1: {
          modelica_integer tmp6;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          tmp6 = _i2;
          _i2 = modelica_integer_mod(_i1, _i2);
          _i1 = tmp6;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _i = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _i;
  return omc_ret_;
}
modelica_metatype boxptr_MMath_intGcd(threadData_t *threadData, modelica_metatype _i1, modelica_metatype _i2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _i;
  modelica_metatype out_i;
  tmp1 = omc_unbox_integer(_i1);
  tmp2 = omc_unbox_integer(_i2);
  _i = omc_MMath_intGcd(threadData, tmp1, tmp2);
  out_i = omc_mk_icon(_i);
  return out_i;
}

DLLModelDirection
modelica_metatype omc_MMath_divRational(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _r1;
    tmp4_2 = _r2;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_integer _i4;
      modelica_integer _ri1;
      modelica_integer _ri2;
      modelica_integer _d;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _i4 has no default value.
      // _ri1 has no default value.
      // _ri2 has no default value.
      // _d has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          tmp13 = omc_unbox_integer(tmpMeta12);
          _i1 = tmp7  /* pattern as ty=Integer */;
          _i2 = tmp9  /* pattern as ty=Integer */;
          _i3 = tmp11  /* pattern as ty=Integer */;
          _i4 = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _ri1 = (_i1) * (_i4);

          _ri2 = (_i3) * (_i2);

          _d = omc_MMath_intGcd(threadData, _ri1, _ri2);

          tmp14 = _d;
          if (tmp14 == 0) {goto goto_2;}
          _ri1 = modelica_div_integer(_ri1,tmp14).quot;

          tmp15 = _d;
          if (tmp15 == 0) {goto goto_2;}
          _ri2 = modelica_div_integer(_ri2,tmp15).quot;
          tmpMeta16 = omc_mk_box3(3, &MMath_Rational_RATIONAL__desc, omc_mk_integer(_ri1), omc_mk_integer(_ri2));
          tmpMeta1 = omc_MMath_normalizeZero(threadData, tmpMeta16);
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
  _r = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _r;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_MMath_multRational(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _r1;
    tmp4_2 = _r2;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_integer _i4;
      modelica_integer _ri1;
      modelica_integer _ri2;
      modelica_integer _d;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _i4 has no default value.
      // _ri1 has no default value.
      // _ri2 has no default value.
      // _d has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          tmp13 = omc_unbox_integer(tmpMeta12);
          _i1 = tmp7  /* pattern as ty=Integer */;
          _i2 = tmp9  /* pattern as ty=Integer */;
          _i3 = tmp11  /* pattern as ty=Integer */;
          _i4 = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _ri1 = (_i1) * (_i3);

          _ri2 = (_i2) * (_i4);

          _d = omc_MMath_intGcd(threadData, _ri1, _ri2);

          tmp14 = _d;
          if (tmp14 == 0) {goto goto_2;}
          _ri1 = modelica_div_integer(_ri1,tmp14).quot;

          tmp15 = _d;
          if (tmp15 == 0) {goto goto_2;}
          _ri2 = modelica_div_integer(_ri2,tmp15).quot;
          tmpMeta16 = omc_mk_box3(3, &MMath_Rational_RATIONAL__desc, omc_mk_integer(_ri1), omc_mk_integer(_ri2));
          tmpMeta1 = omc_MMath_normalizeZero(threadData, tmpMeta16);
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
  _r = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _r;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_MMath_subRational(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _r1;
    tmp4_2 = _r2;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_integer _i4;
      modelica_integer _ri1;
      modelica_integer _ri2;
      modelica_integer _d;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _i4 has no default value.
      // _ri1 has no default value.
      // _ri2 has no default value.
      // _d has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          tmp13 = omc_unbox_integer(tmpMeta12);
          _i1 = tmp7  /* pattern as ty=Integer */;
          _i2 = tmp9  /* pattern as ty=Integer */;
          _i3 = tmp11  /* pattern as ty=Integer */;
          _i4 = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _ri1 = (_i1) * (_i4) - ((_i3) * (_i2));

          _ri2 = (_i2) * (_i4);

          _d = omc_MMath_intGcd(threadData, _ri1, _ri2);

          tmp14 = _d;
          if (tmp14 == 0) {goto goto_2;}
          _ri1 = modelica_div_integer(_ri1,tmp14).quot;

          tmp15 = _d;
          if (tmp15 == 0) {goto goto_2;}
          _ri2 = modelica_div_integer(_ri2,tmp15).quot;
          tmpMeta16 = omc_mk_box3(3, &MMath_Rational_RATIONAL__desc, omc_mk_integer(_ri1), omc_mk_integer(_ri2));
          tmpMeta1 = omc_MMath_normalizeZero(threadData, tmpMeta16);
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
  _r = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _r;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_MMath_equals(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _r1;
    tmp4_2 = _r2;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_integer _i4;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _i4 has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          tmp13 = omc_unbox_integer(tmpMeta12);
          _i1 = tmp7  /* pattern as ty=Integer */;
          _i2 = tmp9  /* pattern as ty=Integer */;
          _i3 = tmp11  /* pattern as ty=Integer */;
          _i4 = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = ((_i1) * (_i4) - ((_i3) * (_i2)) == ((modelica_integer) 0));
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_MMath_equals(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_MMath_equals(threadData, _r1, _r2);
  out_res = omc_mk_icon(_res);
  return out_res;
}

DLLModelDirection
modelica_string omc_MMath_rationalString(threadData_t *threadData, modelica_metatype _r)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _r;
    {
      modelica_integer _n;
      modelica_integer _d;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      // _d has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          _n = tmp7  /* pattern as ty=Integer */;
          _d = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp10 = stringAppend(intString(_n),_OMC_LIT9);
          tmp11 = stringAppend(tmp10,intString(_d));
          tmp1 = tmp11;
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
  omc_string_store(&(_str), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_MMath_normalizeZero(threadData_t *threadData, modelica_metatype _r)
{
  modelica_metatype _outR = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outR has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _r;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          if (0 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT10;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _r;
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
  _outR = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outR;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_MMath_addRational(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _r1;
    tmp4_2 = _r2;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_integer _i4;
      modelica_integer _ri1;
      modelica_integer _ri2;
      modelica_integer _d;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _i4 has no default value.
      // _ri1 has no default value.
      // _ri2 has no default value.
      // _d has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          tmp7 = omc_unbox_integer(tmpMeta6);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          tmp9 = omc_unbox_integer(tmpMeta8);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          tmpMeta12 = OMC_BOX_FIELD(tmp4_2, 3);
          tmp13 = omc_unbox_integer(tmpMeta12);
          _i1 = tmp7  /* pattern as ty=Integer */;
          _i2 = tmp9  /* pattern as ty=Integer */;
          _i3 = tmp11  /* pattern as ty=Integer */;
          _i4 = tmp13  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _ri1 = (_i1) * (_i4) + ((_i3) * (_i2));

          _ri2 = (_i2) * (_i4);

          _d = omc_MMath_intGcd(threadData, _ri1, _ri2);

          tmp14 = _d;
          if (tmp14 == 0) {goto goto_2;}
          _ri1 = modelica_div_integer(_ri1,tmp14).quot;

          tmp15 = _d;
          if (tmp15 == 0) {goto goto_2;}
          _ri2 = modelica_div_integer(_ri2,tmp15).quot;
          tmpMeta16 = omc_mk_box3(3, &MMath_Rational_RATIONAL__desc, omc_mk_integer(_ri1), omc_mk_integer(_ri2));
          tmpMeta1 = omc_MMath_normalizeZero(threadData, tmpMeta16);
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
  _r = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _r;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_MMath_isGreaterThan(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_boolean _b;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  tmp1 = ((modelica_real)omc_unbox_integer((OMC_BOX_FIELD(_r1, 3))));
  if (tmp1 == 0) {OMC_THROW_INTERNAL();}
  tmp2 = ((modelica_real)omc_unbox_integer((OMC_BOX_FIELD(_r2, 3))));
  if (tmp2 == 0) {OMC_THROW_INTERNAL();}
  _b = ((((modelica_real)omc_unbox_integer((OMC_BOX_FIELD(_r1, 2))))) / tmp1 > (((modelica_real)omc_unbox_integer((OMC_BOX_FIELD(_r2, 2))))) / tmp2);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _b;
  return omc_ret_;
}
modelica_metatype boxptr_MMath_isGreaterThan(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_MMath_isGreaterThan(threadData, _r1, _r2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

