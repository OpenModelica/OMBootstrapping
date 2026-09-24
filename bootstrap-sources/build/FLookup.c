#include "omc_simulation_settings.h"
#include "FLookup.h"
#define _OMC_LIT0_data "$ref"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,4,3) {&FLookup_Options_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "missing: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,9,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " in scope: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,11,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "FLookup.cr failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,23,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data " in: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,5,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,4,3) {&FLookup_Options_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,4,3) {&FLookup_Options_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "FLookup.name failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,25,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "FLookup.search failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,27,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "$for"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,4,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "FLookup.id failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,23,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#include "util/modelica.h"

#include "FLookup_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_FLookup_imp__qual(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FLookup_imp__qual,2,0) {(void*) boxptr_FLookup_imp__qual,0}};
#define boxvar_FLookup_imp__qual MMC_REFSTRUCTLIT(boxvar_lit_FLookup_imp__qual)

DLLModelDirection
modelica_metatype omc_FLookup_cr(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_metatype _inCref, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inGraph;
    tmp4_2 = _inCref;
    tmp4_3 = _inMsg;
    {
      modelica_metatype _r = NULL;
      modelica_string _i = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _g = NULL;
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _i has no default value.
      // _rest has no default value.
      // _g has no default value.
      // _s has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,2) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 2);
          
          _i = tmpMeta6;
          _g = tmp4_1;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_2, 4);
          
          _i = tmpMeta7;
          _rest = tmpMeta8;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _g = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg ,&_r);

          /* Pattern-matching assignment */
          tmp9 = omc_FNode_isRefComponent(threadData, _r);
          if (1 /* true */ != tmp9) goto goto_2;

          _r = omc_FNode_child(threadData, _r, _OMC_LIT0);

          _r = omc_FNode_target(threadData, omc_FNode_fromRef(threadData, _r));
          tmpMeta[0+0] = omc_FLookup_cr(threadData, _g, _r, _rest, _OMC_LIT1, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta11 = OMC_BOX_FIELD(tmp4_2, 4);
          
          _i = tmpMeta10;
          _rest = tmpMeta11;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _g = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg ,&_r);

          /* Pattern-matching assignment */
          tmp12 = omc_FNode_isRefClass(threadData, _r);
          if (1 /* true */ != tmp12) goto goto_2;
          tmpMeta[0+0] = omc_FLookup_cr(threadData, _g, _r, _rest, _OMC_LIT1, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_2, 4);
          
          _i = tmpMeta13;
          _rest = tmpMeta14;
          _g = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _g = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg ,&_r);

          /* Pattern-matching assignment */
          tmp15 = (omc_FNode_isRefClass(threadData, _r) || omc_FNode_isRefComponent(threadData, _r));
          if (1 /* true */ != tmp15) goto goto_2;

          tmp16 = stringAppend(_OMC_LIT2,omc_AbsynUtil_crefString(threadData, _rest));
          tmp17 = stringAppend(tmp16,_OMC_LIT3);
          tmp18 = stringAppend(tmp17,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          omc_string_store(&(_s), tmp18);
          tmpMeta[0+0] = omc_FGraphBuild_mkAssertNode(threadData, omc_AbsynUtil_crefFirstIdent(threadData, _rest), _s, _r, _g, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          tmpMeta19 = OMC_BOX_FIELD(tmp4_2, 2);
          
          _rest = tmpMeta19;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _r = omc_FGraph_top(threadData, _g);
          tmpMeta[0+0] = omc_FLookup_cr(threadData, _g, _r, _rest, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta20 = OMC_BOX_FIELD(tmp4_3, 1);
          
          /* Pattern matching succeeded */
          tmp21 = stringAppend(_OMC_LIT4,omc_AbsynUtil_crefString(threadData, _inCref));
          tmp22 = stringAppend(tmp21,_OMC_LIT5);
          tmp23 = stringAppend(tmp22,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _inRef)));
          tmp24 = stringAppend(tmp23,_OMC_LIT6);
          fputs(omc_string_data(tmp24),stdout);
          goto goto_2;
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
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_fq(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inName, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  _outGraph = omc_FLookup_name(threadData, _inGraph, omc_FGraph_top(threadData, _inGraph), _inName, _inOptions, _inMsg ,&_outRef);
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_imp__unqual(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inGraph;
    tmp4_2 = _inImports;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _rest_imps = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _rest_imps has no default value.
      // _r has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
          
          _path = tmpMeta8;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _g = omc_FLookup_fq(threadData, _g, _path, _inOptions, _inMsg ,&_r);
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _r, _inName, _OMC_LIT1, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          
          _rest_imps = tmpMeta10;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_FLookup_imp__unqual(threadData, _g, _inRef, _inName, _rest_imps, _inOptions, _inMsg, &tmpMeta[0+1]);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_FLookup_imp__qual(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inGraph;
    tmp4_2 = _inImports;
    {
      modelica_string _name = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _rest_imps = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _path has no default value.
      // _rest_imps has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta6, 2);
          
          _name = tmpMeta8;
          _rest_imps = tmpMeta7;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (stringEqual(_inName, _name));
          if (0 /* false */ != tmp9) goto goto_2;
          tmpMeta[0+0] = omc_FLookup_imp__qual(threadData, _g, _inRef, _inName, _rest_imps, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,2) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmpMeta10, 2);
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta10, 3);
          
          _name = tmpMeta12;
          _path = tmpMeta13;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (stringEqual(_inName, _name));
          if (1 /* true */ != tmp14) goto goto_2;
          tmpMeta[0+0] = omc_FLookup_fq(threadData, _g, _path, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_2);
          tmpMeta16 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,2) == 0) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta15, 2);
          
          _name = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = (stringEqual(_inName, _name));
          if (1 /* true */ != tmp18) goto goto_2;
          goto goto_2;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_imp(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_string _inName, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inGraph;
    {
      modelica_metatype _qi = NULL;
      modelica_metatype _uqi = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _qi has no default value.
      // _uqi has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_hasImports(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (1 /* true */ != tmp6) goto goto_2;

          _qi = omc_FNode_imports(threadData, omc_FNode_fromRef(threadData, _inRef), NULL);
          tmpMeta[0+0] = omc_FLookup_imp__qual(threadData, _g, _inRef, _inName, _qi, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_FNode_hasImports(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (1 /* true */ != tmp7) goto goto_2;

          omc_FNode_imports(threadData, omc_FNode_fromRef(threadData, _inRef) ,&_uqi);
          tmpMeta[0+0] = omc_FLookup_imp__unqual(threadData, _g, _inRef, _inName, _uqi, _inOptions, _inMsg, &tmpMeta[0+1]);
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_ext(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_string _inName, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inGraph;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _refs = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _refs has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_FNode_isClassExtends(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (1 /* true */ != tmp6) goto goto_2;

          _r = omc_FNode_child(threadData, _inRef, _OMC_LIT0);

          _r = omc_FNode_target(threadData, omc_FNode_fromRef(threadData, _r));
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _r, _inName, _OMC_LIT1, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_FNode_isClassExtends(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (1 /* true */ != tmp7) goto goto_2;

          _r = omc_FNode_refOriginalParent(threadData, _inRef);
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _r, _inName, _OMC_LIT7, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp8;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _refs = omc_FNode_extendsRefs(threadData, _inRef);

          /* Pattern-matching assignment */
          tmp8 = listEmpty(_refs);
          if (0 /* false */ != tmp8) goto goto_2;

          _refs = omc_List_mapMap(threadData, _refs, boxvar_FNode_fromRef, boxvar_FNode_target);
          tmpMeta[0+0] = omc_FLookup_search(threadData, _g, _refs, _inName, _OMC_LIT8, _inMsg, &tmpMeta[0+1]);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_name(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_metatype _inPath, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inGraph;
    tmp4_2 = _inPath;
    tmp4_3 = _inMsg;
    {
      modelica_metatype _r = NULL;
      modelica_string _i = NULL;
      modelica_metatype _rest = NULL;
      modelica_string _s = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _i has no default value.
      // _rest has no default value.
      // _s has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 2);
          
          _i = tmpMeta6;
          _g = tmp4_1;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_2, 3);
          
          _i = tmpMeta7;
          _rest = tmpMeta8;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _g = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg ,&_r);
          tmpMeta[0+0] = omc_FLookup_name(threadData, _g, _r, _rest, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_2, 2);
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 3);
          
          _i = tmpMeta9;
          _rest = tmpMeta10;
          _g = tmp4_1;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _g = omc_FLookup_id(threadData, _g, _inRef, _i, _inOptions, _inMsg ,&_r);

          tmp11 = 0; /* begin failure */
          OMC_TRY_INTERNAL(mmc_jumper)
            omc_FLookup_name(threadData, _g, _r, _rest, _inOptions, _inMsg, NULL);
            tmp11 = 1;
          goto goto_12;
          goto_12:;
          OMC_CATCH_INTERNAL(mmc_jumper)
          if (tmp11) {goto goto_2;} /* end failure */

          tmp13 = stringAppend(_OMC_LIT2,omc_AbsynUtil_pathString(threadData, _rest, _OMC_LIT9, 1 /* true */, 0 /* false */));
          tmp14 = stringAppend(tmp13,_OMC_LIT3);
          tmp15 = stringAppend(tmp14,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _r)));
          omc_string_store(&(_s), tmp15);
          tmpMeta[0+0] = omc_FGraphBuild_mkAssertNode(threadData, omc_AbsynUtil_pathFirstIdent(threadData, _rest), _s, _r, _g, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp4_2, 2);
          
          _rest = tmpMeta16;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _r = omc_FNode_top(threadData, _inRef);
          tmpMeta[0+0] = omc_FLookup_name(threadData, _g, _r, _rest, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmp4_3, 1);
          
          /* Pattern matching succeeded */
          tmp18 = stringAppend(_OMC_LIT10,omc_AbsynUtil_pathString(threadData, _inPath, _OMC_LIT9, 1 /* true */, 0 /* false */));
          tmp19 = stringAppend(tmp18,_OMC_LIT5);
          tmp20 = stringAppend(tmp19,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _inRef)));
          tmp21 = stringAppend(tmp20,_OMC_LIT6);
          fputs(omc_string_data(tmp21),stdout);
          goto goto_2;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_search(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRefs, modelica_string _inName, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inGraph;
    tmp4_2 = _inRefs;
    tmp4_3 = _inMsg;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _rest has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          
          _r = tmpMeta6;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _r, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          
          _rest = tmpMeta9;
          _g = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_FLookup_search(threadData, _g, _rest, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_3, 1);
          
          /* Pattern matching succeeded */
          tmp11 = stringAppend(_OMC_LIT11,_inName);
          tmp12 = stringAppend(tmp11,_OMC_LIT5);
          tmp13 = stringAppend(tmp12,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, listHead(_inRefs))));
          tmp14 = stringAppend(tmp13,_OMC_LIT6);
          fputs(omc_string_data(tmp14),stdout);
          goto goto_2;
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_FLookup_id(threadData_t *threadData, modelica_metatype _inGraph, modelica_metatype _inRef, modelica_string _inName, modelica_metatype _inOptions, modelica_metatype _inMsg, modelica_metatype *out_outRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outRef = NULL;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outRef has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inGraph;
    tmp4_2 = _inOptions;
    tmp4_3 = _inMsg;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _g has no default value.
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          _r = omc_FNode_child(threadData, _inRef, _OMC_LIT12);

          _r = omc_FNode_child(threadData, _r, _inName);
          tmpMeta[0+0] = _g;
          tmpMeta[0+1] = _r;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_boolean tmp8;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 4);
          tmp7 = omc_unbox_integer(tmpMeta6);
          if (0 /* false */ != tmp7) goto tmp3_end;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_FNode_isRefImplicitScope(threadData, _inRef);
          if (1 /* true */ != tmp8) goto goto_2;

          _r = omc_FNode_refOriginalParent(threadData, _inRef);
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _r, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp9;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_FNode_isRefImplicitScope(threadData, _inRef);
          if (0 /* false */ != tmp9) goto goto_2;

          _r = omc_FNode_child(threadData, _inRef, _inName);
          tmpMeta[0+0] = _g;
          tmpMeta[0+1] = _r;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_boolean tmp12;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 2);
          tmp11 = omc_unbox_integer(tmpMeta10);
          if (0 /* false */ != tmp11) goto tmp3_end;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = omc_FNode_isRefImplicitScope(threadData, _inRef);
          if (0 /* false */ != tmp12) goto goto_2;
          tmpMeta[0+0] = omc_FLookup_imp(threadData, _g, _inRef, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_2, 3);
          tmp14 = omc_unbox_integer(tmpMeta13);
          if (0 /* false */ != tmp14) goto tmp3_end;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = omc_FNode_isRefImplicitScope(threadData, _inRef);
          if (0 /* false */ != tmp15) goto goto_2;
          tmpMeta[0+0] = omc_FLookup_ext(threadData, _g, _inRef, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_boolean tmp18;
          modelica_boolean tmp19;
          tmpMeta16 = OMC_BOX_FIELD(tmp4_2, 4);
          tmp17 = omc_unbox_integer(tmpMeta16);
          if (0 /* false */ != tmp17) goto tmp3_end;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_FNode_isRefImplicitScope(threadData, _inRef);
          if (0 /* false */ != tmp18) goto goto_2;

          /* Pattern-matching assignment */
          tmp19 = omc_FNode_isEncapsulated(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (1 /* true */ != tmp19) goto goto_2;

          _r = omc_FNode_top(threadData, _inRef);
          tmpMeta[0+0] = omc_FLookup_id(threadData, _g, _r, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_boolean tmp22;
          modelica_boolean tmp23;
          modelica_boolean tmp24;
          modelica_metatype tmpMeta25;
          tmpMeta20 = OMC_BOX_FIELD(tmp4_2, 4);
          tmp21 = omc_unbox_integer(tmpMeta20);
          if (0 /* false */ != tmp21) goto tmp3_end;
          
          _g = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp22 = omc_FNode_isRefImplicitScope(threadData, _inRef);
          if (0 /* false */ != tmp22) goto goto_2;

          /* Pattern-matching assignment */
          tmp23 = omc_FNode_isEncapsulated(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (0 /* false */ != tmp23) goto goto_2;

          /* Pattern-matching assignment */
          tmp24 = omc_FNode_hasParents(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (1 /* true */ != tmp24) goto goto_2;

          _r = omc_FNode_refOriginalParent(threadData, _inRef);
          tmpMeta25 = mmc_mk_cons(_r, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_FLookup_search(threadData, _g, tmpMeta25, _inName, _inOptions, _inMsg, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_boolean tmp28;
          tmpMeta26 = OMC_BOX_FIELD(tmp4_2, 4);
          tmp27 = omc_unbox_integer(tmpMeta26);
          if (0 /* false */ != tmp27) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp28 = omc_FNode_hasParents(threadData, omc_FNode_fromRef(threadData, _inRef));
          if (0 /* false */ != tmp28) goto goto_2;
          goto goto_2;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta29;
          modelica_string tmp30;
          modelica_string tmp31;
          modelica_string tmp32;
          modelica_string tmp33;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta29 = OMC_BOX_FIELD(tmp4_3, 1);
          
          /* Pattern matching succeeded */
          tmp30 = stringAppend(_OMC_LIT13,_inName);
          tmp31 = stringAppend(tmp30,_OMC_LIT5);
          tmp32 = stringAppend(tmp31,omc_FNode_toPathStr(threadData, omc_FNode_fromRef(threadData, _inRef)));
          tmp33 = stringAppend(tmp32,_OMC_LIT6);
          fputs(omc_string_data(tmp33),stdout);
          goto goto_2;
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
      if (++tmp4 < 9) {
        goto tmp3_top;
      }
      OMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRef) { *out_outRef = _outRef; }
  omc_ret_ = _outGraph;
  return omc_ret_;
}

