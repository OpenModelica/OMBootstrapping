#include "omc_simulation_settings.h"
#include "FResolve.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,4,3) {&FLookup_Options_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "$ref"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "FResolve.elred_one: redeclare as element: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,42,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " scope: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,8,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " not found in extends of: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,26,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "$mod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,4,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,4,3) {&FLookup_Options_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "FResolve.mod_one: modifier: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,28,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " not found in: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,15,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,2,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "FResolve.cr_one: component reference: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,38,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "FResolve.clsext_one: class extends: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,36,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "FResolve.cc_one: constrained class: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,36,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "FResolve.ty_one: component type path: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,38,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "FResolve.derived_one: baseclass: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,33,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "FResolve.ext_one: baseclass: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,29,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#include "util/modelica.h"

#include "FResolve_includes.h"



DLLModelDirection
modelica_metatype omc_FResolve_elred__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _p = NULL;
      modelica_string _id = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _p has no default value.
      // _id has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          modelica_boolean tmp8;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefRedeclare(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = ((omc_FNode_isRefClass(threadData, _r) && (!omc_FNode_isRefClassExtends(threadData, _r))) || omc_FNode_isRefComponent(threadData, _r));
          if (1 /* true */ != tmp7) goto goto_2;

          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_FNode_isRefRedeclare(threadData, _r);
          if (1 /* true */ != tmp9) goto goto_2;

          /* Pattern-matching assignment */
          tmp10 = ((omc_FNode_isRefClass(threadData, _r) && (!omc_FNode_isRefClassExtends(threadData, _r))) || omc_FNode_isRefComponent(threadData, _r));
          if (1 /* true */ != tmp10) goto goto_2;

          omc_string_store(&(_id), omc_SCodeUtil_elementName(threadData, omc_FNode_getElement(threadData, omc_FNode_fromRef(threadData, _r))));

          _p = omc_FNode_contextualParent(threadData, omc_FNode_fromRef(threadData, _r));

          _g = omc_FLookup_ext(threadData, _g, _p, _id, _OMC_LIT0, mmc_mk_none() ,&_rr);
          tmpMeta11 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta11, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp12;
          modelica_boolean tmp13;
          modelica_boolean tmp14;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_metatype tmpMeta24;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = omc_FNode_isRefRedeclare(threadData, _r);
          if (1 /* true */ != tmp12) goto goto_2;

          /* Pattern-matching assignment */
          tmp13 = ((omc_FNode_isRefClass(threadData, _r) && (!omc_FNode_isRefClassExtends(threadData, _r))) || omc_FNode_isRefComponent(threadData, _r));
          if (1 /* true */ != tmp13) goto goto_2;

          omc_string_store(&(_id), omc_SCodeUtil_elementName(threadData, omc_FNode_getElement(threadData, omc_FNode_fromRef(threadData, _r))));

          _p = omc_FNode_contextualParent(threadData, omc_FNode_fromRef(threadData, _r));

          tmp14 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_ext(threadData, _g, _p, _id, _OMC_LIT0, mmc_mk_none(), NULL);
            tmp14 = 1;
          goto goto_15;
          goto_15:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp14) {goto goto_2;} /* end failure */

          tmp16 = stringAppend(_OMC_LIT2,_id);
          tmp17 = stringAppend(tmp16,_OMC_LIT3);
          tmp18 = stringAppend(tmp17,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp19 = stringAppend(tmp18,_OMC_LIT4);
          tmp20 = stringAppend(tmp19,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _p)));
          tmp21 = stringAppend(tmp20,_OMC_LIT5);
          fputs(omc_string_data(tmp21),stdout);

          tmp22 = stringAppend(_OMC_LIT6,stringDelimitList(omc_List_map(threadData, omc_List_map(threadData, omc_FNode_extendsRefs(threadData, _p), boxvar_FNode_fromRef), boxvar_FNode_toPathStr), _OMC_LIT7));
          tmp23 = stringAppend(tmp22,_OMC_LIT8);
          fputs(omc_string_data(tmp23),stdout);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta24, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_elred(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_elred__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_mod__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _cr has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = ((omc_FNode_isRefMod(threadData, _r) && (!omc_FNode_isRefModHolder(threadData, _r))) && (!omc_ClassInfUtil_isBasicTypeComponentName(threadData, omc_FNode_refName(threadData, _r))));
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = ((omc_FNode_isRefMod(threadData, _r) && (!omc_FNode_isRefModHolder(threadData, _r))) && (!omc_ClassInfUtil_isBasicTypeComponentName(threadData, omc_FNode_refName(threadData, _r))));
          if (1 /* true */ != tmp8) goto goto_2;

          _cr = omc_AbsynUtil_pathToCref(threadData, omc_AbsynUtil_stringListPath(threadData, omc_FNode_namesUpToParentName(threadData, _r, _OMC_LIT9)));

          _g = omc_FLookup_cr(threadData, _g, omc_FNode_getModifierTarget(threadData, _r), _cr, _OMC_LIT10, mmc_mk_none() ,&_rr);
          tmpMeta9 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta9, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_metatype tmpMeta17;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = ((omc_FNode_isRefMod(threadData, _r) && (!omc_FNode_isRefModHolder(threadData, _r))) && (!omc_ClassInfUtil_isBasicTypeComponentName(threadData, omc_FNode_refName(threadData, _r))));
          if (1 /* true */ != tmp10) goto goto_2;

          _cr = omc_AbsynUtil_pathToCref(threadData, omc_AbsynUtil_stringListPath(threadData, omc_FNode_namesUpToParentName(threadData, _r, _OMC_LIT9)));

          tmp11 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_cr(threadData, _g, omc_FNode_getModifierTarget(threadData, _r), _cr, _OMC_LIT10, mmc_mk_none(), NULL);
            tmp11 = 1;
          goto goto_12;
          goto_12:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp11) {goto goto_2;} /* end failure */

          tmp13 = stringAppend(_OMC_LIT11,omc_AbsynUtil_crefString(threadData, _cr));
          tmp14 = stringAppend(tmp13,_OMC_LIT12);
          tmp15 = stringAppend(tmp14,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp16 = stringAppend(tmp15,_OMC_LIT13);
          fputs(omc_string_data(tmp16),stdout);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta17, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_mod(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_mod__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_cr__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _cr has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefCref(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefCref(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta9 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,17,1) == 0) goto goto_2;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          _cr = tmpMeta10;

          _g = omc_FLookup_cr(threadData, _g, _r, _cr, _OMC_LIT10, mmc_mk_none() ,&_rr);
          tmpMeta11 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta11, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_metatype tmpMeta21;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = omc_FNode_isRefCref(threadData, _r);
          if (1 /* true */ != tmp12) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta13 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,17,1) == 0) goto goto_2;
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 2);
          _cr = tmpMeta14;

          tmp15 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_cr(threadData, _g, _r, _cr, _OMC_LIT10, mmc_mk_none(), NULL);
            tmp15 = 1;
          goto goto_16;
          goto_16:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp15) {goto goto_2;} /* end failure */

          tmp17 = stringAppend(_OMC_LIT14,omc_AbsynUtil_crefString(threadData, _cr));
          tmp18 = stringAppend(tmp17,_OMC_LIT12);
          tmp19 = stringAppend(tmp18,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp20 = stringAppend(tmp19,_OMC_LIT13);
          fputs(omc_string_data(tmp20),stdout);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta21, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_cr(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_cr__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_clsext__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _p = NULL;
      modelica_string _id = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _p has no default value.
      // _id has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefClassExtends(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefClassExtends(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta9 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,5) == 0) goto goto_2;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,8) == 0) goto goto_2;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 2);
          _id = tmpMeta11;

          _p = omc_FNode_contextualParent(threadData, omc_FNode_fromRef(threadData, _r));

          _g = omc_FLookup_ext(threadData, _g, _p, _id, _OMC_LIT0, mmc_mk_none() ,&_rr);
          tmpMeta12 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta12, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp25;
          modelica_string tmp26;
          modelica_metatype tmpMeta27;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = omc_FNode_isRefClassExtends(threadData, _r);
          if (1 /* true */ != tmp13) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta14 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,5) == 0) goto goto_2;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,2,8) == 0) goto goto_2;
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
          _id = tmpMeta16;

          _p = omc_FNode_contextualParent(threadData, omc_FNode_fromRef(threadData, _r));

          tmp17 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_ext(threadData, _g, _p, _id, _OMC_LIT0, mmc_mk_none(), NULL);
            tmp17 = 1;
          goto goto_18;
          goto_18:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp17) {goto goto_2;} /* end failure */

          tmp19 = stringAppend(_OMC_LIT15,_id);
          tmp20 = stringAppend(tmp19,_OMC_LIT3);
          tmp21 = stringAppend(tmp20,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp22 = stringAppend(tmp21,_OMC_LIT4);
          tmp23 = stringAppend(tmp22,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _p)));
          tmp24 = stringAppend(tmp23,_OMC_LIT5);
          fputs(omc_string_data(tmp24),stdout);

          tmp25 = stringAppend(_OMC_LIT6,stringDelimitList(omc_List_map(threadData, omc_List_map(threadData, omc_FNode_extendsRefs(threadData, _p), boxvar_FNode_fromRef), boxvar_FNode_toPathStr), _OMC_LIT7));
          tmp26 = stringAppend(tmp25,_OMC_LIT8);
          fputs(omc_string_data(tmp26),stdout);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta27, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_clsext(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_clsext__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_cc__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _p has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefConstrainClass(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefConstrainClass(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta9 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,19,1) == 0) goto goto_2;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 2);
          _p = tmpMeta11;

          _g = omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none() ,&_rr);
          tmpMeta12 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta12, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_metatype tmpMeta23;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = omc_FNode_isRefConstrainClass(threadData, _r);
          if (1 /* true */ != tmp13) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta14 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,19,1) == 0) goto goto_2;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 2);
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 2);
          _p = tmpMeta16;

          tmp17 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none(), NULL);
            tmp17 = 1;
          goto goto_18;
          goto_18:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp17) {goto goto_2;} /* end failure */

          tmp19 = stringAppend(_OMC_LIT16,omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT17, 1 /* true */, 0 /* false */));
          tmp20 = stringAppend(tmp19,_OMC_LIT12);
          tmp21 = stringAppend(tmp20,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp22 = stringAppend(tmp21,_OMC_LIT13);
          fputs(omc_string_data(tmp22),stdout);
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta23, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_cc(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_cc__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_ty__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _p has no default value.
      // _e has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefComponent(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefComponent(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta9 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,4) == 0) goto goto_2;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          _e = tmpMeta10;

          _p = omc_SCodeUtil_getElementTypePath(threadData, _e);

          _g = omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none() ,&_rr);
          tmpMeta11 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta11, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_metatype tmpMeta21;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = omc_FNode_isRefComponent(threadData, _r);
          if (1 /* true */ != tmp12) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta13 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,4,4) == 0) goto goto_2;
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 2);
          _e = tmpMeta14;

          _p = omc_SCodeUtil_getElementTypePath(threadData, _e);

          tmp15 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none(), NULL);
            tmp15 = 1;
          goto goto_16;
          goto_16:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp15) {goto goto_2;} /* end failure */

          tmp17 = stringAppend(_OMC_LIT18,omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT17, 1 /* true */, 0 /* false */));
          tmp18 = stringAppend(tmp17,_OMC_LIT12);
          tmp19 = stringAppend(tmp18,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp20 = stringAppend(tmp19,_OMC_LIT13);
          fputs(omc_string_data(tmp20),stdout);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta21, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_ty(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_ty__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_derived__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _p has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefDerived(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefDerived(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta9 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,5) == 0) goto goto_2;
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,8) == 0) goto goto_2;
          tmpMeta11 = OMC_BOX_FIELD(tmpMeta10, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,3) == 0) goto goto_2;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,2) == 0) goto goto_2;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 2);
          _p = tmpMeta13;

          _g = omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none() ,&_rr);
          tmpMeta14 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta14, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp25;
          modelica_string tmp26;
          modelica_metatype tmpMeta27;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = omc_FNode_isRefDerived(threadData, _r);
          if (1 /* true */ != tmp15) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta16 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,5) == 0) goto goto_2;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,2,8) == 0) goto goto_2;
          tmpMeta18 = OMC_BOX_FIELD(tmpMeta17, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,2,3) == 0) goto goto_2;
          tmpMeta19 = OMC_BOX_FIELD(tmpMeta18, 2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,2) == 0) goto goto_2;
          tmpMeta20 = OMC_BOX_FIELD(tmpMeta19, 2);
          _p = tmpMeta20;

          tmp21 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none(), NULL);
            tmp21 = 1;
          goto goto_22;
          goto_22:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp21) {goto goto_2;} /* end failure */

          tmp23 = stringAppend(_OMC_LIT19,omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT17, 1 /* true */, 0 /* false */));
          tmp24 = stringAppend(tmp23,_OMC_LIT12);
          tmp25 = stringAppend(tmp24,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp26 = stringAppend(tmp25,_OMC_LIT13);
          fputs(omc_string_data(tmp26),stdout);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta27, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_derived(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_derived__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_ext__one(threadData_t *threadData, modelica_string _name, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inRef;
    tmp4_2 = _ig;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rr = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rr has no default value.
      // _p has no default value.
      // _e has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          modelica_boolean tmp8;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isRefExtends(threadData, _r);
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isRefDerived(threadData, _r);
          if (0 /* false */ != tmp7) goto goto_2;

          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefRefResolved(threadData, _r);
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta1 = _g;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_FNode_isRefExtends(threadData, _r);
          if (1 /* true */ != tmp9) goto goto_2;

          /* Pattern-matching assignment */
          tmp10 = omc_FNode_isRefDerived(threadData, _r);
          if (0 /* false */ != tmp10) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta11 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,5,2) == 0) goto goto_2;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta11, 2);
          _e = tmpMeta12;

          _p = omc_SCodeUtil_getBaseClassPath(threadData, _e);

          _g = omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none() ,&_rr);
          tmpMeta13 = mmc_mk_cons(_rr, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta13, _r, _g);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_metatype tmpMeta24;
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = omc_FNode_isRefExtends(threadData, _r);
          if (1 /* true */ != tmp14) goto goto_2;

          /* Pattern-matching assignment */
          tmp15 = omc_FNode_isRefDerived(threadData, _r);
          if (0 /* false */ != tmp15) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta16 = omc_FNode_refData(threadData, _r);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,5,2) == 0) goto goto_2;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 2);
          _e = tmpMeta17;

          _p = omc_SCodeUtil_getBaseClassPath(threadData, _e);

          tmp18 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_name(threadData, _g, _r, _p, _OMC_LIT10, mmc_mk_none(), NULL);
            tmp18 = 1;
          goto goto_19;
          goto_19:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp18) {goto goto_2;} /* end failure */

          tmp20 = stringAppend(_OMC_LIT20,omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT17, 1 /* true */, 0 /* false */));
          tmp21 = stringAppend(tmp20,_OMC_LIT12);
          tmp22 = stringAppend(tmp21,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          tmp23 = stringAppend(tmp22,_OMC_LIT13);
          fputs(omc_string_data(tmp23),stdout);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_FGraphBuild_mkRefNode(threadData, _OMC_LIT1, tmpMeta24, _r, _g);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ig;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      OMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      OMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FResolve_ext(threadData_t *threadData, modelica_metatype _inRef, modelica_metatype _ig)
{
  modelica_metatype _og = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _og has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ig;
    {
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_FNode_apply1(threadData, _inRef, boxvar_FResolve_ext__one, _g);
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
  _og = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _og;
  return omc_ret_;
}

