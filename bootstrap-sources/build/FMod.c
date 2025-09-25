#include "omc_simulation_settings.h"
#include "FMod.h"
#define _OMC_LIT0_data "component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,10,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "extends "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,8,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "inherited class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,16,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "class extends class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,20,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "constrainedby class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,20,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Duplicate modification of element %s on %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,43,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT6,_OMC_LIT7,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#include "util/modelica.h"

#include "FMod_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_FMod_printModScope(threadData_t *threadData, modelica_metatype _inModScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMod_printModScope,2,0) {(void*) boxptr_FMod_printModScope,0}};
#define boxvar_FMod_printModScope MMC_REFSTRUCTLIT(boxvar_lit_FMod_printModScope)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_FMod_mergeSubModsInSameScope(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2, modelica_metatype _inElementName, modelica_metatype _inModScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMod_mergeSubModsInSameScope,2,0) {(void*) boxptr_FMod_mergeSubModsInSameScope,0}};
#define boxvar_FMod_mergeSubModsInSameScope MMC_REFSTRUCTLIT(boxvar_lit_FMod_mergeSubModsInSameScope)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_FMod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_boolean *out_outFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_FMod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype *out_outFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMod_compactSubMod2,2,0) {(void*) boxptr_FMod_compactSubMod2,0}};
#define boxvar_FMod_compactSubMod2 MMC_REFSTRUCTLIT(boxvar_lit_FMod_compactSubMod2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_FMod_compactSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype _inAccumMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMod_compactSubMod,2,0) {(void*) boxptr_FMod_compactSubMod,0}};
#define boxvar_FMod_compactSubMod MMC_REFSTRUCTLIT(boxvar_lit_FMod_compactSubMod)

PROTECTED_FUNCTION_STATIC modelica_string omc_FMod_printModScope(threadData_t *threadData, modelica_metatype _inModScope)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inModScope;
    {
      modelica_string _name = NULL;
      modelica_metatype _path = NULL;
      int tmp4;
      // _name has no default value.
      // _path has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _name = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT0,_name);
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _path = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT1,omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT2, 1 /* true */, 0 /* false */));
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _path = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT3,omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT2, 1 /* true */, 0 /* false */));
          tmp1 = tmpMeta10;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _name = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT4,_name);
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _path = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(_OMC_LIT5,omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT2, 1 /* true */, 0 /* false */));
          tmp1 = tmpMeta14;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_FMod_mergeSubModsInSameScope(threadData_t *threadData, modelica_metatype _inMod1, modelica_metatype _inMod2, modelica_metatype _inElementName, modelica_metatype _inModScope)
{
  modelica_metatype _outMod = NULL;
  modelica_string _scope = NULL;
  modelica_string _name = NULL;
  modelica_metatype _submods = NULL;
  modelica_metatype _info1 = NULL;
  modelica_metatype _info2 = NULL;
  modelica_metatype _mod1 = NULL;
  modelica_metatype _mod2 = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMod has no default value.
  // _scope has no default value.
  // _name has no default value.
  // _submods has no default value.
  // _info1 has no default value.
  // _info2 has no default value.
  _mod1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod1), 3)));
  _mod2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod2), 3)));
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _submods = omc_List_fold2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), boxvar_FMod_compactSubMod, _inModScope, _inElementName, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))));
          tmpMeta7 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 3))), _submods, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 7))));
          tmpMeta8 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod1), 2))), tmpMeta7);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmpMeta9)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _submods = omc_List_fold2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), boxvar_FMod_compactSubMod, _inModScope, _inElementName, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))));
          tmpMeta10 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 3))), _submods, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 7))));
          tmpMeta11 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMod2), 2))), tmpMeta10);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _info1 = omc_SCodeUtil_getModifierInfo(threadData, _mod1);

          _info2 = omc_SCodeUtil_getModifierInfo(threadData, _mod2);

          _scope = omc_FMod_printModScope(threadData, _inModScope);

          _name = stringDelimitList(listReverse(_inElementName), _OMC_LIT2);

          tmpMeta12 = mmc_mk_cons(_name, mmc_mk_cons(_scope, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta13 = mmc_mk_cons(_info2, mmc_mk_cons(_info1, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT10, tmpMeta12, tmpMeta13);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outMod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_FMod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_boolean *out_outFound)
{
  modelica_metatype _outMod = NULL;
  modelica_boolean _outFound;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMod has no default value.
  // _outFound has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExistingMod;
    tmp4_2 = _inNewMod;
    {
      modelica_string _name1 = NULL;
      modelica_string _name2 = NULL;
      modelica_metatype _submod = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name1 has no default value.
      // _name2 has no default value.
      // _submod has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _name1 = tmpMeta6;
          _name2 = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (stringEqual(_name1, _name2));
          if (0 /* false */ != tmp8) goto goto_2;
          tmpMeta[0+0] = _inExistingMod;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _name1 = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_name1, _inName);
          _submod = omc_FMod_mergeSubModsInSameScope(threadData, _inExistingMod, _inNewMod, tmpMeta10, _inModScope);
          tmpMeta[0+0] = _submod;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outMod = tmpMeta[0+0];
  _outFound = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outMod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_FMod_compactSubMod2(threadData_t *threadData, modelica_metatype _inExistingMod, modelica_metatype _inNewMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outMod = NULL;
  _outMod = omc_FMod_compactSubMod2(threadData, _inExistingMod, _inNewMod, _inModScope, _inName, &_outFound);
  /* skip box _outMod; SCode.SubMod */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outMod;
}

static modelica_metatype closure0_FMod_compactSubMod2(threadData_t *thData, modelica_metatype closure, modelica_metatype inExistingMod, modelica_metatype tmp3)
{
  modelica_metatype inNewMod = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inModScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype inName = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_FMod_compactSubMod2(thData, inExistingMod, inNewMod, inModScope, inName, tmp3);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_FMod_compactSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_metatype _inModScope, modelica_metatype _inName, modelica_metatype _inAccumMods)
{
  modelica_metatype _outSubMods = NULL;
  modelica_string _name = NULL;
  modelica_metatype _submods = NULL;
  modelica_boolean _found;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubMods has no default value.
  // _name has no default value.
  // _submods has no default value.
  // _found has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inSubMod;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _name = tmpMeta2;

  tmpMeta4 = mmc_mk_box3(0, _inSubMod, _inModScope, _inName);
  _submods = omc_List_findMap(threadData, _inAccumMods, (modelica_fnptr) mmc_mk_box2(0,closure0_FMod_compactSubMod2,tmpMeta4) ,&_found);

  _outSubMods = omc_List_consOnTrue(threadData, (!_found), _inSubMod, _submods);
  _return: OMC_LABEL_UNUSED
  return _outSubMods;
}

DLLDirection
modelica_metatype omc_FMod_compactSubMods(threadData_t *threadData, modelica_metatype _inSubMods, modelica_metatype _inModScope)
{
  modelica_metatype _outSubMods = NULL;
  modelica_metatype _submods = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubMods has no default value.
  // _submods has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _submods = omc_List_fold2(threadData, _inSubMods, boxvar_FMod_compactSubMod, _inModScope, tmpMeta1, tmpMeta2);

  _outSubMods = listReverse(_submods);
  _return: OMC_LABEL_UNUSED
  return _outSubMods;
}

DLLDirection
modelica_metatype omc_FMod_apply(threadData_t *threadData, modelica_metatype _inTargetRef, modelica_metatype _inModRef, modelica_metatype _inGraph, modelica_metatype *out_outNodeRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outNodeRef = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outNodeRef has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inTargetRef;
    tmp4_2 = _inGraph;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _g;
          tmpMeta[0+1] = _r;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outNodeRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outNodeRef) { *out_outNodeRef = _outNodeRef; }
  return _outGraph;
}

DLLDirection
modelica_metatype omc_FMod_merge(threadData_t *threadData, modelica_metatype _inParentRef, modelica_metatype _inOuterModRef, modelica_metatype _inInnerModRef, modelica_metatype _inGraph, modelica_metatype *out_outMergedModRef)
{
  modelica_metatype _outGraph = NULL;
  modelica_metatype _outMergedModRef = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outGraph has no default value.
  // _outMergedModRef has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inParentRef;
    tmp4_2 = _inGraph;
    {
      modelica_metatype _r = NULL;
      modelica_metatype _g = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r has no default value.
      // _g has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _r = tmp4_1;
          _g = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _g;
          tmpMeta[0+1] = _r;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outGraph = tmpMeta[0+0];
  _outMergedModRef = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outMergedModRef) { *out_outMergedModRef = _outMergedModRef; }
  return _outGraph;
}

