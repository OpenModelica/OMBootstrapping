#include "omc_simulation_settings.h"
#include "NFImport.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,6) {&ErrorTypes_Severity_NOTIFICATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "From here:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,10,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(174)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Qualified import name %s already exists in this scope."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,54,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(163)),_OMC_LIT0,_OMC_LIT4,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "%s found in several unqualified import statements."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,50,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(57)),_OMC_LIT0,_OMC_LIT4,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "NFImport.instUnqualified got invalid class tree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,47,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "NFImport.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,11,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT12_6,0.0);
#define _OMC_LIT12_6 MMC_REFREALLIT(_OMC_LIT_STRUCT12_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT11,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(188)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(188)),MMC_IMMEDIATE(MMC_TAGFIXNUM(87)),_OMC_LIT12_6}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#include "util/modelica.h"

#include "NFImport_includes.h"



DLLModelDirection
void omc_NFImport_printImportError(threadData_t *threadData, modelica_metatype _imp1, modelica_metatype _imp2)
{
  modelica_metatype _err_msg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _err_msg has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_Error_addSourceMessage(threadData, _OMC_LIT3, tmpMeta1, omc_NFImport_info(threadData, _imp1));

  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _imp2;
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,3) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta2 = _OMC_LIT6;
          goto tmp4_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,3) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          tmpMeta2 = _OMC_LIT8;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      goto_3:;
      OMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _err_msg = tmpMeta2;

  tmpMeta7 = mmc_mk_cons(omc_NFImport_name(threadData, _imp2), MMC_REFSTRUCTLIT(mmc_nil));
  omc_Error_addSourceMessage(threadData, _err_msg, tmpMeta7, omc_NFImport_info(threadData, _imp2));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_metatype omc_NFImport_instUnqualified(threadData_t *threadData, modelica_metatype _imp, modelica_metatype __omcQ_24in_5Fimps)
{
  modelica_metatype _imps = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _scope = NULL;
  modelica_metatype _tree = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imps = __omcQ_24in_5Fimps;
  // _path has no default value.
  // _node has no default value.
  // _scope has no default value.
  // _tree has no default value.
  // _info has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _imp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,3) == 0) OMC_THROW_INTERNAL();
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 2);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,2,1) == 0) OMC_THROW_INTERNAL();
  tmpMeta3 = OMC_BOX_FIELD(tmpMeta2, 2);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmpMeta5 = OMC_BOX_FIELD(tmpMeta1, 4);
  _path = tmpMeta3;
  _scope = tmpMeta4;
  _info = tmpMeta5;

  _node = omc_NFLookup_lookupImport(threadData, _path, omc_NFInstNode_InstNode_fromCell(threadData, _scope), _info);

  _node = omc_NFInst_instPackage(threadData, _node, ((modelica_integer) 0));

  _tree = omc_NFClass_classTree(threadData, omc_NFInstNode_InstNode_getClass(threadData, _node));

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _tree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_integer tmp21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,3,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _cls;
            for (tmpMeta10 = (OMC_BOX_FIELD(_tree, 3)), tmp15 = arrayLength(tmpMeta10), tmp14 = 1; tmp14 <= tmp15; tmp14++)
            {
              _cls = arrayGet(tmpMeta10,tmp14);
              tmpMeta12 = omc_mk_box4(4, &NFImport_RESOLVED__IMPORT__desc, omc_NFInstNode_InstNode_scopeRef(threadData, _cls), _OMC_LIT9, _info);
              tmpMeta11 = mmc_mk_cons(tmpMeta12, _imps);
              _imps = tmpMeta11;
            }
          }

          {
            modelica_metatype _comp;
            for (tmpMeta16 = (OMC_BOX_FIELD(_tree, 4)), tmp21 = arrayLength(tmpMeta16), tmp20 = 1; tmp20 <= tmp21; tmp20++)
            {
              _comp = arrayGet(tmpMeta16,tmp20);
              tmpMeta18 = omc_mk_box4(4, &NFImport_RESOLVED__IMPORT__desc, omc_NFInstNode_InstNode_scopeRef(threadData, _comp), _OMC_LIT9, _info);
              tmpMeta17 = mmc_mk_cons(tmpMeta18, _imps);
              _imps = tmpMeta17;
            }
          }
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_terminate(threadData, _OMC_LIT10, _OMC_LIT12);
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
  ;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _imps;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFImport_instQualified(threadData_t *threadData, modelica_metatype _imp, modelica_metatype _scope, modelica_metatype _info, modelica_metatype *out_node)
{
  modelica_metatype _outImport = NULL;
  modelica_metatype _node = NULL;
  modelica_string _short_name = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp6 = 0;
  modelica_metatype tmpMeta11;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outImport has no default value.
  // _node has no default value.
  // _short_name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _imp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFLookup_lookupImport(threadData, (OMC_BOX_FIELD(_imp, 3)), _scope, _info);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFLookup_lookupImport(threadData, (OMC_BOX_FIELD(_imp, 2)), _scope, _info);
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
  _node = tmpMeta1;

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _imp;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmp6 = (OMC_BOX_FIELD(_imp, 2));
          goto tmp8_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp6 = _OMC_LIT9;
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
  omc_string_store(&(_short_name), tmp6);

  tmpMeta11 = omc_mk_box4(4, &NFImport_RESOLVED__IMPORT__desc, omc_NFInstNode_InstNode_scopeRef(threadData, _node), _short_name, _info);
  _outImport = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  if (out_node) { *out_node = _node; }
  omc_ret_ = _outImport;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFImport_resolveList(threadData_t *threadData, modelica_metatype _imps)
{
  modelica_metatype _resolvedImps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _resolvedImps = tmpMeta1;
  {
    modelica_metatype _imp;
    for (tmpMeta2 = _imps, tmp16 = arrayLength(tmpMeta2), tmp15 = 1; tmp15 <= tmp16; tmp15++)
    {
      _imp = arrayGet(tmpMeta2,tmp15);
      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          OMC_TRY_INTERNAL(mmc_jumper)
          tmp4_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              /* Pattern matching succeeded */
              omc_NFImport_resolve(threadData, _imp ,NULL ,&_imp);

              { /* match expression */
                modelica_metatype tmp10_1;
                tmp10_1 = _imp;
                {
                  volatile mmc_switch_type tmp10;
                  int tmp11;
                  tmp10 = 0;
                  for (; tmp10 < 2; tmp10++) {
                    switch (MMC_SWITCH_CAST(tmp10)) {
                    case 0: {
                      modelica_metatype tmpMeta12;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,3) == 0) goto tmp9_end;
                      tmpMeta12 = OMC_BOX_FIELD(tmp10_1, 2);
                      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,2,1) == 0) goto tmp9_end;
                      
                      /* Pattern matching succeeded */
                      tmpMeta7 = omc_NFImport_instUnqualified(threadData, _imp, _resolvedImps);
                      goto tmp9_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta13;
                      
                      /* Pattern matching succeeded */
                      tmpMeta13 = mmc_mk_cons(_imp, _resolvedImps);
                      tmpMeta7 = tmpMeta13;
                      goto tmp9_done;
                    }
                    }
                    goto tmp9_end;
                    tmp9_end: ;
                  }
                  goto goto_8;
                  goto_8:;
                  goto goto_3;
                  goto tmp9_done;
                  tmp9_done:;
                }
              }
              _resolvedImps = tmpMeta7;
              goto tmp4_done;
            }
            case 1: {
              /* Pattern matching succeeded */
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          tmp4_done:
          (void)tmp5;
          OMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp4_done2;
          goto_3:;
          OMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp5 < 2) {
            goto tmp4_top;
          }
          OMC_THROW_INTERNAL();
          tmp4_done2:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _resolvedImps;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_NFImport_resolve(threadData_t *threadData, modelica_metatype _imp, modelica_boolean *out_changed, modelica_metatype *out_outImport)
{
  modelica_metatype _node = NULL;
  modelica_boolean _changed;
  modelica_metatype _outImport = NULL;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype omc_ret_;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _node has no default value.
  // _changed has no default value.
  // _outImport has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _imp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _outImport = omc_NFImport_instQualified(threadData, (OMC_BOX_FIELD(_imp, 2)), omc_NFInstNode_InstNode_fromCell(threadData, (OMC_BOX_FIELD(_imp, 3))), (OMC_BOX_FIELD(_imp, 4)) ,&_node);
          tmpMeta[0+0] = _outImport;
          tmpMeta[0+1] = _node;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _imp;
          tmpMeta[0+1] = omc_NFInstNode_InstNode_fromCell(threadData, (OMC_BOX_FIELD(_imp, 2)));
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFImport_printImportError(threadData, (OMC_BOX_FIELD(_imp, 2)), (OMC_BOX_FIELD(_imp, 3)));
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
  _outImport = tmpMeta[0+0];
  _node = tmpMeta[0+1];
  _changed = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_changed) { *out_changed = _changed; }
  if (out_outImport) { *out_outImport = _outImport; }
  omc_ret_ = _node;
  return omc_ret_;
}
modelica_metatype boxptr_NFImport_resolve(threadData_t *threadData, modelica_metatype _imp, modelica_metatype *out_changed, modelica_metatype *out_outImport)
{
  modelica_boolean _changed;
  modelica_metatype _node = NULL;
  _node = omc_NFImport_resolve(threadData, _imp, &_changed, out_outImport);
  /* skip box _node; NFInstNode.InstNode */
  if (out_changed) { *out_changed = omc_mk_icon(_changed); }
  /* skip box _outImport; NFImport */
  return _node;
}

DLLModelDirection
modelica_metatype omc_NFImport_info(threadData_t *threadData, modelica_metatype _imp)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _imp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_imp, 4));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (OMC_BOX_FIELD(_imp, 4));
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
modelica_string omc_NFImport_name(threadData_t *threadData, modelica_metatype _imp)
{
  modelica_string _name = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _imp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_AbsynUtil_importName(threadData, (OMC_BOX_FIELD(_imp, 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFInstNode_InstNode_name(threadData, omc_NFInstNode_InstNode_borrow(threadData, (OMC_BOX_FIELD(_imp, 2))));
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

