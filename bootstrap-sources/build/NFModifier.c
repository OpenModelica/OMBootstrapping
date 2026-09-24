#include "omc_simulation_settings.h"
#include "NFModifier.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Duplicate modification of element %s on %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,43,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Trying to override final element %s with modifier '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,55,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NFModifier.Modifier.toFlatString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,32,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,3,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "= "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,2,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,2,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,17,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Mod.mergeMod failed on unknown mod."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,35,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,1) {_OMC_LIT17,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20,0.0);
#define _OMC_LIT20 MMC_REFREALLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,5) {&NFModifier_Modifier_NOMOD__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,3) {&SCode_Final_FINAL__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,4) {&SCode_Each_NOT__EACH__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,7) {&SCode_Mod_NOMOD__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,10,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,6,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "extends "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,8,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,5) {&NFModifier_ModTable_Tree_EMPTY__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,7,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,5,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,7,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,4,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,4,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,12,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#include "util/modelica.h"

#include "NFModifier_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_mergeLocal(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_string _name, modelica_metatype _scope, modelica_metatype _prefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_mergeLocal,2,0) {(void*) boxptr_NFModifier_Modifier_mergeLocal,0}};
#define boxvar_NFModifier_Modifier_mergeLocal MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_mergeLocal)
PROTECTED_FUNCTION_STATIC void omc_NFModifier_Modifier_checkFinalOverride(threadData_t *threadData, modelica_metatype _innerFinal, modelica_metatype _outerMod, modelica_metatype _innerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_checkFinalOverride,2,0) {(void*) boxptr_NFModifier_Modifier_checkFinalOverride,0}};
#define boxvar_NFModifier_Modifier_checkFinalOverride MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_checkFinalOverride)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_integer _confidence);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_metatype _confidence);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_createSubMod,2,0) {(void*) boxptr_NFModifier_Modifier_createSubMod,0}};
#define boxvar_NFModifier_Modifier_createSubMod MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_createSubMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_balance,2,0) {(void*) boxptr_NFModifier_ModTable_balance,0}};
#define boxvar_NFModifier_ModTable_balance MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_calculateBalance,2,0) {(void*) boxptr_NFModifier_ModTable_calculateBalance,0}};
#define boxvar_NFModifier_ModTable_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_height,2,0) {(void*) boxptr_NFModifier_ModTable_height,0}};
#define boxvar_NFModifier_ModTable_height MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_printTreeStr2,2,0) {(void*) boxptr_NFModifier_ModTable_printTreeStr2,0}};
#define boxvar_NFModifier_ModTable_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_referenceEqOrEmpty,2,0) {(void*) boxptr_NFModifier_ModTable_referenceEqOrEmpty,0}};
#define boxvar_NFModifier_ModTable_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateLeft,2,0) {(void*) boxptr_NFModifier_ModTable_rotateLeft,0}};
#define boxvar_NFModifier_ModTable_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateRight,2,0) {(void*) boxptr_NFModifier_ModTable_rotateRight,0}};
#define boxvar_NFModifier_ModTable_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateRight)

static modelica_metatype closure0_NFModifier_Modifier_mergeLocal(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1, modelica_metatype mod2, modelica_string name)
{
  modelica_metatype scope = OMC_BOX_FIELD(closure, 1);
  modelica_metatype prefix = OMC_BOX_FIELD(closure, 2);
  return boxptr_NFModifier_Modifier_mergeLocal(thData, mod1, mod2, name, scope, prefix);
}static modelica_metatype closure1_NFModifier_Modifier_mergeLocal(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1, modelica_metatype mod2, modelica_string name)
{
  modelica_metatype scope = OMC_BOX_FIELD(closure, 1);
  modelica_metatype prefix = OMC_BOX_FIELD(closure, 2);
  return boxptr_NFModifier_Modifier_mergeLocal(thData, mod1, mod2, name, scope, prefix);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_mergeLocal(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_string _name, modelica_metatype _scope, modelica_metatype _prefix)
{
  modelica_metatype _mod = NULL;
  modelica_string _comp_name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  // _comp_name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _mod1;
    tmp4_2 = _mod2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_2, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons((OMC_BOX_FIELD(_mod1, 2)), _prefix);
          tmpMeta8 = omc_mk_box2(0, _scope, tmpMeta9);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_mod1), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFModifier_ModTable_join(threadData, (OMC_BOX_FIELD(_mod1, 6)), (OMC_BOX_FIELD(_mod2, 6)), (modelica_fnptr) omc_mk_box2(0,closure0_NFModifier_Modifier_mergeLocal,tmpMeta8));
          _mod1 = tmpMeta7;
          tmpMeta1 = _mod1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons((OMC_BOX_FIELD(_mod1, 2)), _prefix);
          tmpMeta12 = omc_mk_box2(0, _scope, tmpMeta13);
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_mod2), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[6] = omc_NFModifier_ModTable_join(threadData, (OMC_BOX_FIELD(_mod2, 6)), (OMC_BOX_FIELD(_mod1, 6)), (modelica_fnptr) omc_mk_box2(0,closure1_NFModifier_Modifier_mergeLocal,tmpMeta12));
          _mod2 = tmpMeta11;
          tmpMeta1 = _mod2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(omc_NFModifier_Modifier_name(threadData, _mod1), _prefix);
          omc_string_store(&(_comp_name), stringDelimitList(listReverse(tmpMeta14), _OMC_LIT1));

          tmpMeta15 = mmc_mk_cons(_comp_name, mmc_mk_cons(omc_NFModifier_ModifierScope_toString(threadData, _scope), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta16 = mmc_mk_cons(omc_NFModifier_Modifier_info(threadData, _mod1), mmc_mk_cons(omc_NFModifier_Modifier_info(threadData, _mod2), MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT5, tmpMeta15, tmpMeta16);
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC void omc_NFModifier_Modifier_checkFinalOverride(threadData_t *threadData, modelica_metatype _innerFinal, modelica_metatype _outerMod, modelica_metatype _innerInfo)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _innerFinal;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,0) == 0) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons(omc_NFModifier_Modifier_name(threadData, _outerMod), mmc_mk_cons(omc_NFModifier_Modifier_toString(threadData, _outerMod, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta6 = mmc_mk_cons(omc_NFModifier_Modifier_info(threadData, _outerMod), mmc_mk_cons(_innerInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT7, tmpMeta5, tmpMeta6);
          goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = omc_NFModifier_Modifier_create(threadData, (OMC_BOX_FIELD(_subMod, 3)), (OMC_BOX_FIELD(_subMod, 2)), _modScope, _scope, _confidence);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _mod = NULL;
  tmp1 = omc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_createSubMod(threadData, _subMod, _modScope, _scope, tmp1);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

DLLModelDirection
modelica_string omc_NFModifier_Modifier_toFlatString(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_boolean _printName)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT8, _OMC_LIT9);

  _s = omc_NFModifier_Modifier_toFlatStream(threadData, _mod, _format, _s, _printName);

  omc_string_store(&(_str), omc_IOStream_string(threadData, _s));

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _str;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_toFlatString(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_metatype _printName)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = omc_unbox_integer(_printName);
  _str = omc_NFModifier_Modifier_toFlatString(threadData, _mod, _format, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_toFlatStream(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs, modelica_boolean _printName)
{
  modelica_metatype _s = NULL;
  modelica_metatype _submods = NULL;
  modelica_string _binding_sep = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _submods has no default value.
  // _binding_sep has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if(_printName)
          {
            _s = omc_IOStream_append(threadData, _s, (OMC_BOX_FIELD(_mod, 2)));
          }

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _submods = omc_NFModifier_ModTable_listValues(threadData, (OMC_BOX_FIELD(_mod, 6)), tmpMeta5);

          if((!listEmpty(_submods)))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT12);

            _s = omc_NFModifier_Modifier_toFlatStreamList(threadData, _submods, _format, _s, _OMC_LIT13);

            _s = omc_IOStream_append(threadData, _s, _OMC_LIT14);

            omc_string_store(&(_binding_sep), _OMC_LIT10);
          }
          else
          {
            omc_string_store(&(_binding_sep), (_printName?_OMC_LIT10:_OMC_LIT11));
          }

          _s = omc_IOStream_append(threadData, _s, omc_NFBinding_toFlatString(threadData, (OMC_BOX_FIELD(_mod, 5)), _format, _binding_sep));
          goto tmp2_done;
        }
        case 1: {
          
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
  omc_ret_ = _s;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_toFlatStream(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs, modelica_metatype _printName)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = omc_unbox_integer(_printName);
  _s = omc_NFModifier_Modifier_toFlatStream(threadData, _mod, _format, __omcQ_24in_5Fs, tmp1);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_toFlatStreamList(threadData_t *threadData, modelica_metatype _modifiers, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs, modelica_string _delimiter)
{
  modelica_metatype _s = NULL;
  modelica_metatype _mods = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _mods = _modifiers;
  if(listEmpty(_mods))
  {
    goto _return;
  }

  while(1)
  {
    if(!1 /* true */) break;
    _s = omc_NFModifier_Modifier_toFlatStream(threadData, listHead(_mods), _format, _s, 1 /* true */);

    _mods = listRest(_mods);

    if(listEmpty(_mods))
    {
      break;
    }
    else
    {
      _s = omc_IOStream_append(threadData, _s, _delimiter);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _s;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NFModifier_Modifier_toString(threadData_t *threadData, modelica_metatype _mod, modelica_boolean _printName)
{
  modelica_string _string = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _string has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      modelica_metatype _submods = NULL;
      modelica_string _subs_str = NULL;
      modelica_string _binding_str = NULL;
      modelica_string _binding_sep = NULL;
      int tmp4;
      // _submods has no default value.
      // _subs_str has no default value.
      // _binding_str has no default value.
      // _binding_sep has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_boolean tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _submods = omc_NFModifier_ModTable_listValues(threadData, (OMC_BOX_FIELD(_mod, 6)), tmpMeta5);

          if((!listEmpty(_submods)))
          {
            {
              modelica_metatype __omcQ_24tmpVar3;
              modelica_metatype* tmp7;
              modelica_metatype tmpMeta8;
              modelica_string __omcQ_24tmpVar2;
              modelica_integer tmp9;
              modelica_metatype _s_loopVar = 0;
              modelica_metatype _s;
              _s_loopVar = _submods;
              tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar3 = tmpMeta8; /* defaultValue */
              tmp7 = &__omcQ_24tmpVar3;
              while(1) {
                tmp9 = 1;
                if (!listEmpty(_s_loopVar)) {
                  _s = MMC_CAR(_s_loopVar);
                  _s_loopVar = MMC_CDR(_s_loopVar);
                  tmp9--;
                }
                if (tmp9 == 0) {
                  __omcQ_24tmpVar2 = omc_NFModifier_Modifier_toString(threadData, _s, 1 /* true */);
                  *tmp7 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                  tmp7 = &MMC_CDR(*tmp7);
                } else if (tmp9 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp7 = mmc_mk_nil();
              tmpMeta6 = __omcQ_24tmpVar3;
            }
            tmp10 = stringAppend(_OMC_LIT12,stringDelimitList(tmpMeta6, _OMC_LIT13));
            tmp11 = stringAppend(tmp10,_OMC_LIT14);
            omc_string_store(&(_subs_str), tmp11);

            omc_string_store(&(_binding_sep), _OMC_LIT10);
          }
          else
          {
            omc_string_store(&(_subs_str), _OMC_LIT0);

            omc_string_store(&(_binding_sep), (_printName?_OMC_LIT10:_OMC_LIT11));
          }

          omc_string_store(&(_binding_str), omc_NFBinding_toString(threadData, (OMC_BOX_FIELD(_mod, 5)), _binding_sep));
          tmp15 = (modelica_boolean)_printName;
          if(tmp15)
          {
            tmp12 = stringAppend((OMC_BOX_FIELD(_mod, 2)),_subs_str);
            tmp13 = stringAppend(tmp12,_binding_str);
            tmp16 = tmp13;
          }
          else
          {
            tmp14 = stringAppend(_subs_str,_binding_str);
            tmp16 = tmp14;
          }
          tmp1 = tmp16;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFInstNode_InstNode_toString(threadData, (OMC_BOX_FIELD(_mod, 4)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
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
  omc_string_store(&(_string), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _string;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_toString(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _printName)
{
  modelica_integer tmp1;
  modelica_string _string = NULL;
  tmp1 = omc_unbox_integer(_printName);
  _string = omc_NFModifier_Modifier_toString(threadData, _mod, tmp1);
  /* skip box _string; String */
  return _string;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_fnptr _func)
{
  modelica_metatype _mod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = omc_NFModifier_ModTable_map(threadData, (OMC_BOX_FIELD(_mod, 6)), ((modelica_fnptr) _func));
          _mod = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          
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
  omc_ret_ = _mod;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NFModifier_Modifier_isFinal(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isFinal;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isFinal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
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
  _isFinal = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isFinal;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_isFinal(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isFinal;
  modelica_metatype out_isFinal;
  _isFinal = omc_NFModifier_Modifier_isFinal(threadData, _mod);
  out_isFinal = omc_mk_icon(_isFinal);
  return out_isFinal;
}

DLLModelDirection
modelica_boolean omc_NFModifier_Modifier_isEach(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEach;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEach has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
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
  _isEach = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isEach;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_isEach(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEach;
  modelica_metatype out_isEach;
  _isEach = omc_NFModifier_Modifier_isEach(threadData, _mod);
  out_isEach = omc_mk_icon(_isEach);
  return out_isEach;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_toList(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_metatype _modList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _modList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_NFModifier_ModTable_listValues(threadData, (OMC_BOX_FIELD(_mod, 6)), tmpMeta6);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta7;
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
  _modList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _modList;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NFModifier_Modifier_isRedeclare(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isRedeclare;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isRedeclare has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          
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
  _isRedeclare = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isRedeclare;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_isRedeclare(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isRedeclare;
  modelica_metatype out_isRedeclare;
  _isRedeclare = omc_NFModifier_Modifier_isRedeclare(threadData, _mod);
  out_isRedeclare = omc_mk_icon(_isRedeclare);
  return out_isRedeclare;
}

DLLModelDirection
modelica_boolean omc_NFModifier_Modifier_isEmpty(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
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
modelica_metatype boxptr_NFModifier_Modifier_isEmpty(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFModifier_Modifier_isEmpty(threadData, _mod);
  out_isEmpty = omc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_setSourceSubMod(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fsubmod, modelica_integer _source, modelica_integer _confidence)
{
  modelica_metatype _submod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _submod = __omcQ_24in_5Fsubmod;
  _submod = omc_NFModifier_Modifier_setSource(threadData, _submod, (modelica_integer)_source, _confidence);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _submod;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_setSourceSubMod(threadData_t *threadData, modelica_metatype _name, modelica_metatype __omcQ_24in_5Fsubmod, modelica_metatype _source, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _submod = NULL;
  tmp1 = omc_unbox_integer(_source);
  tmp2 = omc_unbox_integer(_confidence);
  _submod = omc_NFModifier_Modifier_setSourceSubMod(threadData, _name, __omcQ_24in_5Fsubmod, tmp1, tmp2);
  /* skip box _submod; NFModifier.Modifier */
  return _submod;
}

static modelica_metatype closure2_NFModifier_Modifier_setSourceSubMod(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_submod)
{
  modelica_metatype source = OMC_BOX_FIELD(closure, 1);
  modelica_metatype confidence = OMC_BOX_FIELD(closure, 2);
  return boxptr_NFModifier_Modifier_setSourceSubMod(thData, name, $in_submod, source, confidence);
}
DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_setSource(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_integer _source, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = omc_NFBinding_setConfidence(threadData, _confidence, omc_NFBinding_setSource(threadData, (modelica_integer)_source, (OMC_BOX_FIELD(_mod, 5))));
          _mod = tmpMeta5;

          tmpMeta7 = omc_mk_box2(0, omc_mk_integer((modelica_integer)_source), omc_mk_integer(_confidence));
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[6] = omc_NFModifier_ModTable_map(threadData, (OMC_BOX_FIELD(_mod, 6)), (modelica_fnptr) omc_mk_box2(0,closure2_NFModifier_Modifier_setSourceSubMod,tmpMeta7));
          _mod = tmpMeta6;
          goto tmp2_done;
        }
        case 1: {
          
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
  omc_ret_ = _mod;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_setSource(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _source, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _mod = NULL;
  tmp1 = omc_unbox_integer(_source);
  tmp2 = omc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_setSource(threadData, __omcQ_24in_5Fmod, tmp1, tmp2);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

static modelica_metatype closure3_NFModifier_Modifier_propagateSubMod(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_submod)
{
  modelica_metatype subs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NFModifier_Modifier_propagateSubMod(thData, name, $in_submod, subs);
}
DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_propagateSubMod(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fsubmod, modelica_metatype _subs)
{
  modelica_metatype _submod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _submod = __omcQ_24in_5Fsubmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _submod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          tmpMeta5 = OMC_BOX_FIELD(tmp3_1, 4);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,1,0) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_submod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFBinding_propagate(threadData, (OMC_BOX_FIELD(_submod, 5)), _subs);
          _submod = tmpMeta6;

          tmpMeta8 = omc_mk_box1(0, _subs);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_submod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFModifier_ModTable_map(threadData, (OMC_BOX_FIELD(_submod, 6)), (modelica_fnptr) omc_mk_box2(0,closure3_NFModifier_Modifier_propagateSubMod,tmpMeta8));
          _submod = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,7) == 0) goto tmp2_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp3_1, 3);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_submod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[5] = omc_NFModifier_Modifier_propagateSubMod(threadData, _name, (OMC_BOX_FIELD(_submod, 5)), _subs);
          _submod = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_submod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[8] = listAppend(_subs, (OMC_BOX_FIELD(_submod, 8)));
          _submod = tmpMeta11;
          goto tmp2_done;
        }
        case 2: {
          
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
  omc_ret_ = _submod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_propagateBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _origin, modelica_metatype _parent)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _subs = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  // _subs has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box3(9, &NFSubscript_SPLIT__PROXY__desc, omc_NFInstNode_InstNode_scopeRef(threadData, _origin), omc_NFInstNode_InstNode_scopeRef(threadData, _parent));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          _subs = tmpMeta5;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFBinding_propagate(threadData, (OMC_BOX_FIELD(_mod, 5)), _subs);
          _mod = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          
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
  omc_ret_ = _mod;
  return omc_ret_;
}

static modelica_metatype closure4_NFModifier_Modifier_propagateSubMod(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_submod)
{
  modelica_metatype subs = OMC_BOX_FIELD(closure, 1);
  return boxptr_NFModifier_Modifier_propagateSubMod(thData, name, $in_submod, subs);
}
DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_propagateSubs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _subs)
{
  modelica_metatype _mod = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box1(0, _subs);
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = omc_NFModifier_ModTable_map(threadData, (OMC_BOX_FIELD(_mod, 6)), (modelica_fnptr) omc_mk_box2(0,closure4_NFModifier_Modifier_propagateSubMod,tmpMeta6));
          _mod = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          
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
  omc_ret_ = _mod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_propagate(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _origin, modelica_metatype _parent)
{
  modelica_metatype _outMod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta2 = omc_mk_box3(9, &NFSubscript_SPLIT__PROXY__desc, omc_NFInstNode_InstNode_scopeRef(threadData, _origin), omc_NFInstNode_InstNode_scopeRef(threadData, _parent));
  tmpMeta1 = mmc_mk_cons(tmpMeta2, MMC_REFSTRUCTLIT(mmc_nil));
  _outMod = omc_NFModifier_Modifier_propagateSubs(threadData, _mod, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outMod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_merge(threadData_t *threadData, modelica_metatype _outerMod, modelica_metatype _innerMod, modelica_string _name)
{
  modelica_metatype _mergedMod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mergedMod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _outerMod;
    tmp4_2 = _innerMod;
    {
      modelica_metatype _submods = NULL;
      modelica_metatype _binding = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _submods has no default value.
      // _binding has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _innerMod;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outerMod;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_NFModifier_Modifier_checkFinalOverride(threadData, (OMC_BOX_FIELD(_innerMod, 3)), _outerMod, (OMC_BOX_FIELD(_innerMod, 7)));

          _binding = (omc_NFBinding_isBound(threadData, (OMC_BOX_FIELD(_outerMod, 5)))?(OMC_BOX_FIELD(_outerMod, 5)):(OMC_BOX_FIELD(_innerMod, 5)));

          _submods = omc_NFModifier_ModTable_join(threadData, (OMC_BOX_FIELD(_innerMod, 6)), (OMC_BOX_FIELD(_outerMod, 6)), boxvar_NFModifier_Modifier_merge);
          tmpMeta6 = omc_mk_box7(3, &NFModifier_Modifier_MODIFIER__desc, (OMC_BOX_FIELD(_outerMod, 2)), (OMC_BOX_FIELD(_outerMod, 3)), (OMC_BOX_FIELD(_outerMod, 4)), _binding, _submods, (OMC_BOX_FIELD(_outerMod, 7)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_outerMod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFModifier_Modifier_merge(threadData, (OMC_BOX_FIELD(_outerMod, 5)), _innerMod, _OMC_LIT0);
          _outerMod = tmpMeta7;
          tmpMeta1 = _outerMod;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_innerMod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFModifier_Modifier_merge(threadData, _outerMod, (OMC_BOX_FIELD(_innerMod, 6)), _OMC_LIT0);
          _innerMod = tmpMeta8;
          tmpMeta1 = _innerMod;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmp4_1, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,7) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_2, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = omc_mk_box8(4, &NFModifier_Modifier_REDECLARE__desc, (OMC_BOX_FIELD(_outerMod, 2)), (OMC_BOX_FIELD(_outerMod, 3)), (OMC_BOX_FIELD(_outerMod, 4)), (OMC_BOX_FIELD(_outerMod, 5)), (OMC_BOX_FIELD(_outerMod, 6)), (OMC_BOX_FIELD(_innerMod, 7)), (OMC_BOX_FIELD(_outerMod, 8)));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outerMod;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _innerMod;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT16, _OMC_LIT18);
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
  _mergedMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mergedMod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_setBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype __omcQ_24in_5Fmodifier)
{
  modelica_metatype _modifier = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _modifier = __omcQ_24in_5Fmodifier;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _modifier;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_modifier), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = _binding;
          _modifier = tmpMeta5;
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
  omc_ret_ = _modifier;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_binding(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_modifier, 5));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT19;
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
  _binding = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _binding;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NFModifier_Modifier_hasBinding(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_boolean _hasBinding;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasBinding has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFBinding_isBound(threadData, (OMC_BOX_FIELD(_modifier, 5)));
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
  _hasBinding = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasBinding;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_hasBinding(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_boolean _hasBinding;
  modelica_metatype out_hasBinding;
  _hasBinding = omc_NFModifier_Modifier_hasBinding(threadData, _modifier);
  out_hasBinding = omc_mk_icon(_hasBinding);
  return out_hasBinding;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_info(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_modifier, 7));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstNode_InstNode_info(threadData, (OMC_BOX_FIELD(_modifier, 4)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT21;
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
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _info;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NFModifier_Modifier_name(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_string _name = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (OMC_BOX_FIELD(_modifier, 2));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFInstNode_InstNode_name(threadData, (OMC_BOX_FIELD(_modifier, 4)));
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
  omc_string_store(&(_name), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_lookupModifier(threadData_t *threadData, modelica_string _modName, modelica_metatype _modifier)
{
  modelica_metatype _subMod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subMod has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      OMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFModifier_ModTable_get(threadData, (OMC_BOX_FIELD(_modifier, 6)), _modName);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
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
  _subMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _subMod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_patchElementModFinal(threadData_t *threadData, modelica_metatype _prefixes, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fmod)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  if(omc_SCodeUtil_finalBool(threadData, omc_SCodeUtil_prefixesFinal(threadData, _prefixes)))
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _mod;
      {
        int tmp4;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
          case 3: {
            modelica_metatype tmpMeta5;
            
            /* Pattern matching succeeded */
            tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = _OMC_LIT23;
            _mod = tmpMeta5;
            tmpMeta1 = _mod;
            goto tmp3_done;
          }
          case 4: {
            modelica_metatype tmpMeta6;
            
            /* Pattern matching succeeded */
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_mod), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = _OMC_LIT23;
            _mod = tmpMeta6;
            tmpMeta1 = _mod;
            goto tmp3_done;
          }
          default:
          tmp3_default: OMC_LABEL_UNUSED; {
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            
            /* Pattern matching succeeded */
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta8 = omc_mk_box7(3, &SCode_Mod_MOD__desc, _OMC_LIT23, _OMC_LIT24, tmpMeta7, mmc_mk_none(), mmc_mk_none(), _info);
            tmpMeta1 = tmpMeta8;
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
    _mod = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_fromElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      modelica_metatype _def = NULL;
      modelica_metatype _smod = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _def has no default value.
      // _smod has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box2(5, &NFModifier_ModifierScope_EXTENDS__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, (OMC_BOX_FIELD(_element, 4)), _OMC_LIT0, tmpMeta6, _scope, _confidence);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _smod = omc_NFModifier_Modifier_patchElementModFinal(threadData, (OMC_BOX_FIELD(_element, 3)), (OMC_BOX_FIELD(_element, 9)), (OMC_BOX_FIELD(_element, 6)));
          tmpMeta7 = omc_mk_box2(3, &NFModifier_ModifierScope_COMPONENT__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, _smod, (OMC_BOX_FIELD(_element, 2)), tmpMeta7, _scope, _confidence);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,3) == 0) goto tmp3_end;
          
          _def = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = omc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, (OMC_BOX_FIELD(_def, 3)), (OMC_BOX_FIELD(_element, 2)), tmpMeta9, _scope, _confidence);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,2) == 0) goto tmp3_end;
          
          _def = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = omc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, (OMC_BOX_FIELD(_def, 2)), (OMC_BOX_FIELD(_element, 2)), tmpMeta11, _scope, _confidence);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_fromElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _mod = NULL;
  tmp1 = omc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_fromElement(threadData, _element, _scope, tmp1);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_stripSCodeMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felem, modelica_metatype *out_mod)
{
  modelica_metatype _elem = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elem = __omcQ_24in_5Felem;
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elem;
    {
      modelica_metatype _cdef = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cdef has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 3);
          
          _cdef = tmpMeta6;
          _mod = tmpMeta7;
          /* Pattern matching succeeded */
          if((!omc_SCodeUtil_isEmptyMod(threadData, _mod)))
          {
            tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_cdef), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _OMC_LIT25;
            _cdef = tmpMeta8;

            tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(10));
            memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_elem), 10*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = _cdef;
            _elem = tmpMeta9;
          }
          tmpMeta1 = _mod;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          tmpMeta10 = OMC_BOX_FIELD(tmp4_1, 6);
          
          _mod = tmpMeta10;
          /* Pattern matching succeeded */
          if((!omc_SCodeUtil_isEmptyMod(threadData, _mod)))
          {
            tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(10));
            memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_elem), 10*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[6] = _OMC_LIT25;
            _elem = tmpMeta11;
          }
          tmpMeta1 = _mod;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT25;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_mod) { *out_mod = _mod; }
  omc_ret_ = _elem;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_createConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  // _smod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmpMeta7, 2);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          tmpMeta10 = OMC_BOX_FIELD(tmpMeta9, 3);
          
          _smod = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = omc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, _smod, (OMC_BOX_FIELD(_element, 2)), tmpMeta11, _scope, _confidence);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 3);
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,1) == 0) goto tmp3_end;
          tmpMeta14 = OMC_BOX_FIELD(tmpMeta13, 2);
          if (optionNone(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = OMC_BOX_FIELD(tmpMeta14, 1);
          tmpMeta16 = OMC_BOX_FIELD(tmpMeta15, 3);
          
          _smod = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta17 = omc_mk_box2(3, &NFModifier_ModifierScope_COMPONENT__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, _smod, (OMC_BOX_FIELD(_element, 2)), tmpMeta17, _scope, _confidence);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _mod;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_createConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _mod = NULL;
  tmp1 = omc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_createConstrainingMod(threadData, _element, _scope, tmp1);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

static modelica_metatype closure5_NFModifier_Modifier_mergeLocal(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1, modelica_metatype mod2, modelica_string name)
{
  modelica_metatype scope = OMC_BOX_FIELD(closure, 1);
  modelica_metatype prefix = OMC_BOX_FIELD(closure, 2);
  return boxptr_NFModifier_Modifier_mergeLocal(thData, mod1, mod2, name, scope, prefix);
}
DLLModelDirection
modelica_metatype omc_NFModifier_Modifier_create(threadData_t *threadData, modelica_metatype _mod, modelica_string _name, modelica_metatype _modScope, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _newMod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newMod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      modelica_metatype _submod_lst = NULL;
      modelica_metatype _submod_table = NULL;
      modelica_metatype _binding = NULL;
      modelica_metatype _elem = NULL;
      modelica_boolean _is_each;
      modelica_metatype _node = NULL;
      modelica_metatype _cc_mod = NULL;
      int tmp4;
      // _submod_lst has no default value.
      // _submod_table has no default value.
      // _binding has no default value.
      // _elem has no default value.
      // _is_each has no default value.
      // _node has no default value.
      // _cc_mod has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          _is_each = omc_SCodeUtil_eachBool(threadData, (OMC_BOX_FIELD(_mod, 3)));

          _binding = omc_NFBinding_fromAbsyn(threadData, (OMC_BOX_FIELD(_mod, 5)), _is_each, _scope, _confidence, (OMC_BOX_FIELD(_mod, 7)));

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp9;
            modelica_metatype _m_loopVar = 0;
            modelica_metatype _m;
            _m_loopVar = (OMC_BOX_FIELD(_mod, 4));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar5;
            while(1) {
              tmp9 = 1;
              while (!listEmpty(_m_loopVar)) {
                _m = MMC_CAR(_m_loopVar);
                _m_loopVar = MMC_CDR(_m_loopVar);
                if ((!omc_SCodeUtil_isBreakSubMod(threadData, _m))) {
                  tmp9--;
                  break;
                }
              }
              if (tmp9 == 0) {
                tmpMeta8 = omc_mk_box2(0, (OMC_BOX_FIELD(_m, 2)), omc_NFModifier_Modifier_createSubMod(threadData, _m, _modScope, _scope, _confidence));
                __omcQ_24tmpVar4 = tmpMeta8;
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar5;
          }
          _submod_lst = tmpMeta5;

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = omc_mk_box2(0, _modScope, tmpMeta11);
          _submod_table = omc_NFModifier_ModTable_fromList(threadData, _submod_lst, (modelica_fnptr) omc_mk_box2(0,closure5_NFModifier_Modifier_mergeLocal,tmpMeta10));
          tmpMeta12 = omc_mk_box7(3, &NFModifier_Modifier_MODIFIER__desc, _name, (OMC_BOX_FIELD(_mod, 2)), (OMC_BOX_FIELD(_mod, 3)), _binding, _submod_table, (OMC_BOX_FIELD(_mod, 7)));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmp4_1, 4);
          _elem = tmpMeta13;
          /* Pattern matching succeeded */
          _node = omc_NFInstNode_InstNode_new(threadData, _elem, _scope);

          if(omc_NFInstNode_InstNode_isClass(threadData, _node))
          {
            omc_NFInst_partialInstClass(threadData, _node);
          }

          _cc_mod = omc_NFModifier_Modifier_createConstrainingMod(threadData, _elem, _scope, _confidence);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = omc_mk_box8(4, &NFModifier_Modifier_REDECLARE__desc, (OMC_BOX_FIELD(_mod, 2)), (OMC_BOX_FIELD(_mod, 3)), _node, _OMC_LIT22, _OMC_LIT22, _cc_mod, tmpMeta14);
          tmpMeta1 = tmpMeta15;
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
  _newMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _newMod;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_Modifier_create(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _name, modelica_metatype _modScope, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _newMod = NULL;
  tmp1 = omc_unbox_integer(_confidence);
  _newMod = omc_NFModifier_Modifier_create(threadData, _mod, _name, _modScope, _scope, tmp1);
  /* skip box _newMod; NFModifier.Modifier */
  return _newMod;
}

DLLModelDirection
modelica_string omc_NFModifier_ModifierScope_toString(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_string _string = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _string has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scope;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_string tmp5;
          
          /* Pattern matching succeeded */
          tmp5 = stringAppend(_OMC_LIT26,(OMC_BOX_FIELD(_scope, 2)));
          tmp1 = tmp5;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp6;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_OMC_LIT27,(OMC_BOX_FIELD(_scope, 2)));
          tmp1 = tmp6;
          goto tmp3_done;
        }
        case 5: {
          modelica_string tmp7;
          
          /* Pattern matching succeeded */
          tmp7 = stringAppend(_OMC_LIT28,omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_scope, 2)), _OMC_LIT1, 1 /* true */, 0 /* false */));
          tmp1 = tmp7;
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
  omc_string_store(&(_string), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _string;
  return omc_ret_;
}

DLLModelDirection
modelica_boolean omc_NFModifier_ModifierScope_isClass(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scope;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _res;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_ModifierScope_isClass(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFModifier_ModifierScope_isClass(threadData, _scope);
  out_res = omc_mk_icon(_res);
  return out_res;
}

DLLModelDirection
modelica_string omc_NFModifier_ModifierScope_name(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_string _name = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scope;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (OMC_BOX_FIELD(_scope, 2));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (OMC_BOX_FIELD(_scope, 2));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_AbsynUtil_pathString(threadData, (OMC_BOX_FIELD(_scope, 2)), _OMC_LIT1, 1 /* true */, 0 /* false */);
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
  omc_string_store(&(_name), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModifierScope_fromElement(threadData_t *threadData, modelica_metatype _element)
{
  modelica_metatype _scope = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scope has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = omc_mk_box2(3, &NFModifier_ModifierScope_COMPONENT__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_mk_box2(5, &NFModifier_ModifierScope_EXTENDS__desc, (OMC_BOX_FIELD(_element, 2)));
          tmpMeta1 = tmpMeta7;
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
  _scope = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _scope;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
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
      modelica_string _key = NULL;
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
          tmpMeta5 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _inKey, _inValue);
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
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFModifier_ModTable_add(threadData, (OMC_BOX_FIELD(_tree, 5)), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFModifier_ModTable_add(threadData, (OMC_BOX_FIELD(_tree, 6)), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (OMC_BOX_FIELD(_conflictFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_string)) (OMC_BOX_FIELD(_conflictFunc, 1))) (threadData, (OMC_BOX_FIELD(_conflictFunc, 2)), _inValue, (OMC_BOX_FIELD(_tree, 3)), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string)) (OMC_BOX_FIELD(_conflictFunc, 1))) (threadData, _inValue, (OMC_BOX_FIELD(_tree, 3)), _key);

              if((!referenceEq((OMC_BOX_FIELD(_tree, 3)), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFModifier_ModTable_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _inKey, (OMC_BOX_FIELD(_tree, 2)));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT29);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), _OMC_LIT29, tmpMeta12);
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_NFModifier_ModTable_balance(threadData, _outTree));
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
modelica_metatype omc_NFModifier_ModTable_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
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
modelica_metatype omc_NFModifier_ModTable_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
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
modelica_metatype omc_NFModifier_ModTable_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
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
modelica_metatype omc_NFModifier_ModTable_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
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
modelica_metatype omc_NFModifier_ModTable_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
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

      _tree = omc_NFModifier_ModTable_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn)
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
          tmpMeta5 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _key, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _key, (OMC_BOX_FIELD(_tree, 2)));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFModifier_ModTable_addUpdate(threadData, (OMC_BOX_FIELD(_tree, 5)), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFModifier_ModTable_addUpdate(threadData, (OMC_BOX_FIELD(_tree, 6)), _key, ((modelica_fnptr) _fn));
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFModifier_ModTable_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _key, (OMC_BOX_FIELD(_tree, 2)));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _key, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none()));
            tmpMeta10 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT29);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _key, (OMC_BOX_FIELD(_fn, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, (OMC_BOX_FIELD(_fn, 2)), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (OMC_BOX_FIELD(_fn, 1))) (threadData, mmc_mk_none()));
              tmpMeta12 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), omc_mk_integer(((modelica_integer) 2)), _OMC_LIT29, tmpMeta11);
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_NFModifier_ModTable_balance(threadData, _new_tree));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_balance(threadData_t *threadData, modelica_metatype _inTree)
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
          _lh = omc_NFModifier_ModTable_height(threadData, (OMC_BOX_FIELD(_outTree, 5)));

          _rh = omc_NFModifier_ModTable_height(threadData, (OMC_BOX_FIELD(_outTree, 6)));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_NFModifier_ModTable_calculateBalance(threadData, (OMC_BOX_FIELD(_outTree, 6))) > ((modelica_integer) 0))?omc_NFModifier_ModTable_rotateLeft(threadData, omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outTree, (OMC_BOX_FIELD(_outTree, 5)), omc_NFModifier_ModTable_rotateRight(threadData, (OMC_BOX_FIELD(_outTree, 6))))):omc_NFModifier_ModTable_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_NFModifier_ModTable_calculateBalance(threadData, (OMC_BOX_FIELD(_outTree, 5))) < ((modelica_integer) 0))?omc_NFModifier_ModTable_rotateRight(threadData, omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outTree, omc_NFModifier_ModTable_rotateLeft(threadData, (OMC_BOX_FIELD(_outTree, 5))), (OMC_BOX_FIELD(_outTree, 6)))):omc_NFModifier_ModTable_rotateRight(threadData, _outTree));
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

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
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
          tmp1 = omc_NFModifier_ModTable_height(threadData, (OMC_BOX_FIELD(_inNode, 5))) - omc_NFModifier_ModTable_height(threadData, (OMC_BOX_FIELD(_inNode, 6)));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_NFModifier_ModTable_calculateBalance(threadData, _inNode);
  out_outBalance = omc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
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
      modelica_string _key = NULL;
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
          _outResult = omc_NFModifier_ModTable_fold(threadData, (OMC_BOX_FIELD(_inTree, 5)), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult);
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
          tmpMeta1 = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult);
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
modelica_metatype omc_NFModifier_ModTable_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
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
            _value = omc_NFModifier_ModTable_foldCond(threadData, (OMC_BOX_FIELD(_tree, 5)), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_NFModifier_ModTable_foldCond(threadData, (OMC_BOX_FIELD(_tree, 6)), ((modelica_fnptr) _foldFunc), _value);
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
modelica_metatype omc_NFModifier_ModTable_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
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
          _foldArg1 = omc_NFModifier_ModTable_fold__2(threadData, (OMC_BOX_FIELD(_tree, 5)), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (OMC_BOX_FIELD(_foldFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_foldFunc, 2)), (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_foldFunc, 1))) (threadData, (OMC_BOX_FIELD(_tree, 2)), (OMC_BOX_FIELD(_tree, 3)), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_NFModifier_ModTable_fold__2(threadData, (OMC_BOX_FIELD(_tree, 6)), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
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
void omc_NFModifier_ModTable_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
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
          omc_NFModifier_ModTable_forEach(threadData, (OMC_BOX_FIELD(_tree, 5)), ((modelica_fnptr) _func));

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
modelica_metatype omc_NFModifier_ModTable_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT29;
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

      _tree = omc_NFModifier_ModTable_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _tree;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
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
          tmp1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (OMC_BOX_FIELD(_tree, 2));
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
  omc_string_store(&(_k), tmp1);

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_NFModifier_ModTable_keyCompare(threadData, _key, _k);
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
modelica_metatype omc_NFModifier_ModTable_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
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
          tmp1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (OMC_BOX_FIELD(_tree, 2));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _key;
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
  omc_string_store(&(_k), tmp1);

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_NFModifier_ModTable_keyCompare(threadData, _key, _k);
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
modelica_boolean omc_NFModifier_ModTable_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
{
  modelica_boolean _comp;
  modelica_string _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_string tmp1 = 0;
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
          tmp1 = (OMC_BOX_FIELD(_inTree, 2));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (OMC_BOX_FIELD(_inTree, 2));
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
  omc_string_store(&(_key), tmp1);

  _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _inKey, _key);

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
modelica_metatype boxptr_NFModifier_ModTable_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_NFModifier_ModTable_hasKey(threadData, _inTree, _inKey);
  out_comp = omc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_NFModifier_ModTable_height(threadData, _inNode);
  out_outHeight = omc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLModelDirection
void omc_NFModifier_ModTable_intersection(threadData_t *threadData)
{
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  OMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_boolean omc_NFModifier_ModTable_isEmpty(threadData_t *threadData, modelica_metatype _tree)
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
modelica_metatype boxptr_NFModifier_ModTable_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFModifier_ModTable_isEmpty(threadData, _tree);
  out_isEmpty = omc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
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
          _tree = omc_NFModifier_ModTable_add(threadData, _tree, (OMC_BOX_FIELD(_treeToJoin, 2)), (OMC_BOX_FIELD(_treeToJoin, 3)), ((modelica_fnptr) _conflictFunc));

          _tree = omc_NFModifier_ModTable_join(threadData, _tree, (OMC_BOX_FIELD(_treeToJoin, 5)), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (OMC_BOX_FIELD(_treeToJoin, 6));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFModifier_ModTable_add(threadData, _tree, (OMC_BOX_FIELD(_treeToJoin, 2)), (OMC_BOX_FIELD(_treeToJoin, 3)), ((modelica_fnptr) _conflictFunc));
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
modelica_integer omc_NFModifier_ModTable_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2)
{
  modelica_integer _outResult;
  modelica_integer omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = stringCompare(_inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outResult;
  return omc_ret_;
}
modelica_metatype boxptr_NFModifier_ModTable_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_NFModifier_ModTable_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = omc_mk_icon(_outResult);
  return out_outResult;
}

DLLModelDirection
modelica_string omc_NFModifier_ModTable_keyStr(threadData_t *threadData, modelica_string _inKey)
{
  modelica_string _outString = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  omc_string_store(&(_outString), _inKey);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_string _key = NULL;
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
          _lst = omc_NFModifier_ModTable_listKeys(threadData, (OMC_BOX_FIELD(_tree, 6)), _lst);

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
modelica_metatype omc_NFModifier_ModTable_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFModifier_ModTable_listKeysReverse(threadData, (OMC_BOX_FIELD(_inTree, 5)), _lst);

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
modelica_metatype omc_NFModifier_ModTable_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFModifier_ModTable_listValues(threadData, (OMC_BOX_FIELD(_tree, 6)), _lst);

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
modelica_metatype omc_NFModifier_ModTable_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
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
      modelica_string _key = NULL;
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
          _new_left = omc_NFModifier_ModTable_map(threadData, (OMC_BOX_FIELD(_outTree, 5)), ((modelica_fnptr) _inFunc));

          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value);

          _new_right = omc_NFModifier_ModTable_map(threadData, (OMC_BOX_FIELD(_outTree, 6)), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (OMC_BOX_FIELD(_outTree, 5)))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (OMC_BOX_FIELD(_outTree, 6))))))
          {
            tmpMeta7 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, _key, _new_value, (OMC_BOX_FIELD(_outTree, 4)), _new_left, _new_right);
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
          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value);

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
modelica_metatype omc_NFModifier_ModTable_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
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
      modelica_string _key = NULL;
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
          _new_left = omc_NFModifier_ModTable_mapFold(threadData, (OMC_BOX_FIELD(_outTree, 5)), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_NFModifier_ModTable_mapFold(threadData, (OMC_BOX_FIELD(_outTree, 6)), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (OMC_BOX_FIELD(_outTree, 5)))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (OMC_BOX_FIELD(_outTree, 6))))))
          {
            tmpMeta7 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, _key, _new_value, (OMC_BOX_FIELD(_outTree, 4)), _new_left, _new_right);
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
          _new_value = (OMC_BOX_FIELD(_inFunc, 2)) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, (OMC_BOX_FIELD(_inFunc, 2)), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (OMC_BOX_FIELD(_inFunc, 1))) (threadData, _key, _value, _outResult ,&_outResult);

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
modelica_metatype omc_NFModifier_ModTable_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT29;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NFModifier_ModTable_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
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
          tmp6 = stringAppend(_OMC_LIT12,omc_NFModifier_ModTable_keyStr(threadData, (OMC_BOX_FIELD(_inNode, 2))));
          tmp7 = stringAppend(tmp6,_OMC_LIT13);
          tmp8 = stringAppend(tmp7,omc_NFModifier_ModTable_valueStr(threadData, (OMC_BOX_FIELD(_inNode, 3))));
          tmp9 = stringAppend(tmp8,_OMC_LIT14);
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
          tmp10 = stringAppend(_OMC_LIT12,omc_NFModifier_ModTable_keyStr(threadData, (OMC_BOX_FIELD(_inNode, 2))));
          tmp11 = stringAppend(tmp10,_OMC_LIT13);
          tmp12 = stringAppend(tmp11,omc_NFModifier_ModTable_valueStr(threadData, (OMC_BOX_FIELD(_inNode, 3))));
          tmp13 = stringAppend(tmp12,_OMC_LIT14);
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
modelica_string omc_NFModifier_ModTable_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
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
          tmp1 = _OMC_LIT30;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFModifier_ModTable_printNodeStr(threadData, _inTree);
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
          tmp7 = stringAppend(omc_NFModifier_ModTable_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT0),omc_NFModifier_ModTable_printNodeStr(threadData, _inTree));
          tmp8 = stringAppend(tmp7,_OMC_LIT31);
          tmp9 = stringAppend(tmp8,omc_NFModifier_ModTable_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT0));
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

PROTECTED_FUNCTION_STATIC modelica_string omc_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
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
          tmp5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT32:_OMC_LIT33));
          tmp6 = stringAppend(omc_NFModifier_ModTable_printTreeStr2(threadData, (OMC_BOX_FIELD(_inTree, 5)), 1 /* true */, tmp5),_inIndent);
          tmp7 = stringAppend(tmp6,(_isLeft?_OMC_LIT34:_OMC_LIT35));
          tmp8 = stringAppend(tmp7,_OMC_LIT36);
          tmp9 = stringAppend(tmp8,omc_NFModifier_ModTable_printNodeStr(threadData, _inTree));
          tmp10 = stringAppend(tmp9,_OMC_LIT31);
          tmp11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT33:_OMC_LIT32));
          tmp12 = stringAppend(tmp10,omc_NFModifier_ModTable_printTreeStr2(threadData, (OMC_BOX_FIELD(_inTree, 6)), 0 /* false */, tmp11));
          tmp1 = tmp12;
          goto tmp3_done;
        }
        case 4: {
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          tmp13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT34:_OMC_LIT35));
          tmp14 = stringAppend(tmp13,_OMC_LIT36);
          tmp15 = stringAppend(tmp14,omc_NFModifier_ModTable_printNodeStr(threadData, _inTree));
          tmp16 = stringAppend(tmp15,_OMC_LIT31);
          tmp1 = tmp16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = omc_unbox_integer(_isLeft);
  _outString = omc_NFModifier_ModTable_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFModifier_ModTable_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = omc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
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
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, (OMC_BOX_FIELD(_outNode, 5)), (OMC_BOX_FIELD(_child, 5)));
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, _node, (OMC_BOX_FIELD(_child, 6)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, (OMC_BOX_FIELD(_outNode, 5)), _OMC_LIT29);
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, _node, _OMC_LIT29);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
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
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, (OMC_BOX_FIELD(_child, 6)), (OMC_BOX_FIELD(_outNode, 6)));
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, (OMC_BOX_FIELD(_child, 5)), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 5);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, _OMC_LIT29, (OMC_BOX_FIELD(_outNode, 6)));
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, _OMC_LIT29, _node);
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
modelica_metatype omc_NFModifier_ModTable_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
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
          tmpMeta6 = omc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, (OMC_BOX_FIELD(_orig, 2)), (OMC_BOX_FIELD(_orig, 3)));
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
          tmp8 = (modelica_boolean)(omc_NFModifier_ModTable_referenceEqOrEmpty(threadData, (OMC_BOX_FIELD(_orig, 5)), _left) && omc_NFModifier_ModTable_referenceEqOrEmpty(threadData, (OMC_BOX_FIELD(_orig, 6)), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (OMC_BOX_FIELD(_orig, 2)), (OMC_BOX_FIELD(_orig, 3)), omc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFModifier_ModTable_height(threadData, _left)),(modelica_integer)(omc_NFModifier_ModTable_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = omc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (OMC_BOX_FIELD(_orig, 2)), (OMC_BOX_FIELD(_orig, 3)), omc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFModifier_ModTable_height(threadData, _left)),(modelica_integer)(omc_NFModifier_ModTable_height(threadData, _right)))), _left, _right);
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
modelica_string omc_NFModifier_ModTable_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_string _key = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
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
          tmp1 = (OMC_BOX_FIELD(_tree, 2));
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
          tmp1 = (OMC_BOX_FIELD(_tree, 2));
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
  omc_string_store(&(_key), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _key;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFModifier_ModTable_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_string _key = NULL;
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
          _lst = omc_NFModifier_ModTable_toList(threadData, (OMC_BOX_FIELD(_inTree, 6)), _lst);

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
modelica_metatype omc_NFModifier_ModTable_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_NFModifier_ModTable_add(threadData, _tree, _key, _value, boxvar_NFModifier_ModTable_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outTree;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_NFModifier_ModTable_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  omc_string_store(&(_outString), omc_NFModifier_Modifier_toString(threadData, _inValue, 1 /* true */));
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _outString;
  return omc_ret_;
}

