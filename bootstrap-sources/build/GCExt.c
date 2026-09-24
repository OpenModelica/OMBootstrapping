#include "omc_simulation_settings.h"
#include "GCExt.h"
#define _OMC_LIT0_data "GC Profiling Stats: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,20,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "heapsize_full: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,15,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "free_bytes_full: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "unmapped_bytes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,16,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "bytes_allocd_since_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,23,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "allocd_bytes_before_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,24,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "total_allocd_bytes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,20,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "non_gc_bytes: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,14,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "gc_no: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,7,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "markers_m1: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,12,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "bytes_reclaimed_since_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,26,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "reclaimed_bytes_before_gc: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,27,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#include "util/modelica.h"

#include "GCExt_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_GCExt_getProfStats_GC__get__prof__stats__modelica(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GCExt_getProfStats_GC__get__prof__stats__modelica,2,0) {(void*) boxptr_GCExt_getProfStats_GC__get__prof__stats__modelica,0}};
#define boxvar_GCExt_getProfStats_GC__get__prof__stats__modelica MMC_REFSTRUCTLIT(boxvar_lit_GCExt_getProfStats_GC__get__prof__stats__modelica)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_GCExt_getProfStats_GC__get__prof__stats__modelica(threadData_t *threadData)
{
  modelica_metatype _stats_ext;
  modelica_metatype _stats = NULL;
  // _stats has no default value.

  _stats_ext = GC_get_prof_stats_modelica();
  _stats = (modelica_metatype)_stats_ext;
  return _stats;
}

DLLModelDirection
modelica_metatype omc_GCExt_getProfStats(threadData_t *threadData)
{
  modelica_metatype _stats = NULL;
  modelica_integer _heapsize_full;
  modelica_integer _free_bytes_full;
  modelica_integer _unmapped_bytes;
  modelica_integer _bytes_allocd_since_gc;
  modelica_integer _allocd_bytes_before_gc;
  modelica_integer _non_gc_bytes;
  modelica_integer _gc_no;
  modelica_integer _markers_m1;
  modelica_integer _bytes_reclaimed_since_gc;
  modelica_integer _reclaimed_bytes_before_gc;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stats has no default value.
  // _heapsize_full has no default value.
  // _free_bytes_full has no default value.
  // _unmapped_bytes has no default value.
  // _bytes_allocd_since_gc has no default value.
  // _allocd_bytes_before_gc has no default value.
  // _non_gc_bytes has no default value.
  // _gc_no has no default value.
  // _markers_m1 has no default value.
  // _bytes_reclaimed_since_gc has no default value.
  // _reclaimed_bytes_before_gc has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_GCExt_getProfStats_GC__get__prof__stats__modelica(threadData);
  tmpMeta2 = OMC_BOX_FIELD(tmpMeta1, 1);
  tmp3 = omc_unbox_integer(tmpMeta2);
  tmpMeta4 = OMC_BOX_FIELD(tmpMeta1, 2);
  tmp5 = omc_unbox_integer(tmpMeta4);
  tmpMeta6 = OMC_BOX_FIELD(tmpMeta1, 3);
  tmp7 = omc_unbox_integer(tmpMeta6);
  tmpMeta8 = OMC_BOX_FIELD(tmpMeta1, 4);
  tmp9 = omc_unbox_integer(tmpMeta8);
  tmpMeta10 = OMC_BOX_FIELD(tmpMeta1, 5);
  tmp11 = omc_unbox_integer(tmpMeta10);
  tmpMeta12 = OMC_BOX_FIELD(tmpMeta1, 6);
  tmp13 = omc_unbox_integer(tmpMeta12);
  tmpMeta14 = OMC_BOX_FIELD(tmpMeta1, 7);
  tmp15 = omc_unbox_integer(tmpMeta14);
  tmpMeta16 = OMC_BOX_FIELD(tmpMeta1, 8);
  tmp17 = omc_unbox_integer(tmpMeta16);
  tmpMeta18 = OMC_BOX_FIELD(tmpMeta1, 9);
  tmp19 = omc_unbox_integer(tmpMeta18);
  tmpMeta20 = OMC_BOX_FIELD(tmpMeta1, 10);
  tmp21 = omc_unbox_integer(tmpMeta20);
  _heapsize_full = tmp3  /* pattern as ty=Integer */;
  _free_bytes_full = tmp5  /* pattern as ty=Integer */;
  _unmapped_bytes = tmp7  /* pattern as ty=Integer */;
  _bytes_allocd_since_gc = tmp9  /* pattern as ty=Integer */;
  _allocd_bytes_before_gc = tmp11  /* pattern as ty=Integer */;
  _non_gc_bytes = tmp13  /* pattern as ty=Integer */;
  _gc_no = tmp15  /* pattern as ty=Integer */;
  _markers_m1 = tmp17  /* pattern as ty=Integer */;
  _bytes_reclaimed_since_gc = tmp19  /* pattern as ty=Integer */;
  _reclaimed_bytes_before_gc = tmp21  /* pattern as ty=Integer */;

  tmpMeta22 = omc_mk_box11(3, &GCExt_ProfStats_PROFSTATS__desc, omc_mk_integer(_heapsize_full), omc_mk_integer(_free_bytes_full), omc_mk_integer(_unmapped_bytes), omc_mk_integer(_bytes_allocd_since_gc), omc_mk_integer(_allocd_bytes_before_gc), omc_mk_integer(_non_gc_bytes), omc_mk_integer(_gc_no), omc_mk_integer(_markers_m1), omc_mk_integer(_bytes_reclaimed_since_gc), omc_mk_integer(_reclaimed_bytes_before_gc));
  _stats = tmpMeta22;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _stats;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_GCExt_profStatsStr(threadData_t *threadData, modelica_metatype _stats, modelica_string _head, modelica_string _delimiter)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stats;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_string tmp6;
          modelica_string tmp7;
          modelica_string tmp8;
          modelica_string tmp9;
          modelica_string tmp10;
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          modelica_string tmp15;
          modelica_string tmp16;
          modelica_string tmp17;
          modelica_string tmp18;
          modelica_string tmp19;
          modelica_string tmp20;
          modelica_string tmp21;
          modelica_string tmp22;
          modelica_string tmp23;
          modelica_string tmp24;
          modelica_string tmp25;
          modelica_string tmp26;
          modelica_string tmp27;
          modelica_string tmp28;
          modelica_string tmp29;
          modelica_string tmp30;
          modelica_string tmp31;
          modelica_string tmp32;
          modelica_string tmp33;
          modelica_string tmp34;
          modelica_string tmp35;
          modelica_string tmp36;
          modelica_string tmp37;
          modelica_string tmp38;
          
          /* Pattern matching succeeded */
          tmp6 = stringAppend(_head,_delimiter);
          tmp7 = stringAppend(tmp6,_OMC_LIT2);
          tmp8 = stringAppend(tmp7,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 2)))));
          tmp9 = stringAppend(tmp8,_delimiter);
          tmp10 = stringAppend(tmp9,_OMC_LIT3);
          tmp11 = stringAppend(tmp10,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 3)))));
          tmp12 = stringAppend(tmp11,_delimiter);
          tmp13 = stringAppend(tmp12,_OMC_LIT4);
          tmp14 = stringAppend(tmp13,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 4)))));
          tmp15 = stringAppend(tmp14,_delimiter);
          tmp16 = stringAppend(tmp15,_OMC_LIT5);
          tmp17 = stringAppend(tmp16,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 5)))));
          tmp18 = stringAppend(tmp17,_delimiter);
          tmp19 = stringAppend(tmp18,_OMC_LIT6);
          tmp20 = stringAppend(tmp19,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 6)))));
          tmp21 = stringAppend(tmp20,_delimiter);
          tmp22 = stringAppend(tmp21,_OMC_LIT7);
          tmp23 = stringAppend(tmp22,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 5))) + (omc_unbox_integer((OMC_BOX_FIELD(_stats, 6))))));
          tmp24 = stringAppend(tmp23,_delimiter);
          tmp25 = stringAppend(tmp24,_OMC_LIT8);
          tmp26 = stringAppend(tmp25,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 7)))));
          tmp27 = stringAppend(tmp26,_delimiter);
          tmp28 = stringAppend(tmp27,_OMC_LIT9);
          tmp29 = stringAppend(tmp28,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 8)))));
          tmp30 = stringAppend(tmp29,_delimiter);
          tmp31 = stringAppend(tmp30,_OMC_LIT10);
          tmp32 = stringAppend(tmp31,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 9)))));
          tmp33 = stringAppend(tmp32,_delimiter);
          tmp34 = stringAppend(tmp33,_OMC_LIT11);
          tmp35 = stringAppend(tmp34,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 10)))));
          tmp36 = stringAppend(tmp35,_delimiter);
          tmp37 = stringAppend(tmp36,_OMC_LIT12);
          tmp38 = stringAppend(tmp37,intString(omc_unbox_integer((OMC_BOX_FIELD(_stats, 11)))));
          tmp1 = tmp38;
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

void omc_GCExt_setMaxHeapSize(threadData_t *threadData, modelica_real _sz)
{
  double _sz_ext;
  _sz_ext = (double) _sz;
  GC_set_max_heap_size_dbl(_sz_ext);
  return;
}
void boxptr_GCExt_setMaxHeapSize(threadData_t *threadData, modelica_metatype _sz)
{
  modelica_real tmp1;
  tmp1 = omc_unbox_real(_sz);
  omc_GCExt_setMaxHeapSize(threadData, tmp1);
  return;
}

void omc_GCExt_setForceUnmapOnGcollect(threadData_t *threadData, modelica_boolean _forceUnmap)
{
  int _forceUnmap_ext;
  _forceUnmap_ext = (int) _forceUnmap;
  GC_set_force_unmap_on_gcollect(_forceUnmap_ext);
  return;
}
void boxptr_GCExt_setForceUnmapOnGcollect(threadData_t *threadData, modelica_metatype _forceUnmap)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_forceUnmap);
  omc_GCExt_setForceUnmapOnGcollect(threadData, tmp1);
  return;
}

modelica_boolean omc_GCExt_getForceUnmapOnGcollect(threadData_t *threadData)
{
  int _res_ext;
  modelica_boolean _res;
  // _res has no default value.

  _res_ext = GC_get_force_unmap_on_gcollect();
  _res = (modelica_boolean)_res_ext;
  return _res;
}
modelica_metatype boxptr_GCExt_getForceUnmapOnGcollect(threadData_t *threadData)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_GCExt_getForceUnmapOnGcollect(threadData);
  out_res = omc_mk_icon(_res);
  return out_res;
}

void omc_GCExt_setFreeSpaceDivisor(threadData_t *threadData, modelica_integer _divisor)
{
  int _divisor_ext;
  _divisor_ext = (int) _divisor;
  GC_set_free_space_divisor(_divisor_ext);
  return;
}
void boxptr_GCExt_setFreeSpaceDivisor(threadData_t *threadData, modelica_metatype _divisor)
{
  modelica_integer tmp1;
  tmp1 = omc_unbox_integer(_divisor);
  omc_GCExt_setFreeSpaceDivisor(threadData, tmp1);
  return;
}

modelica_boolean omc_GCExt_expandHeap(threadData_t *threadData, modelica_real _sz)
{
  double _sz_ext;
  int _success_ext;
  modelica_boolean _success;
  // _success has no default value.
  _sz_ext = (double) _sz;
  _success_ext = GC_expand_hp_dbl(_sz_ext);
  _success = (modelica_boolean)_success_ext;
  return _success;
}
modelica_metatype boxptr_GCExt_expandHeap(threadData_t *threadData, modelica_metatype _sz)
{
  modelica_real tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = omc_unbox_real(_sz);
  _success = omc_GCExt_expandHeap(threadData, tmp1);
  out_success = omc_mk_icon(_success);
  return out_success;
}

void omc_GCExt_free(threadData_t *threadData, modelica_metatype _data)
{
  modelica_metatype _data_ext;
  _data_ext = (modelica_metatype) _data;
  omc_GC_free_ext(_data_ext);
  return;
}

void omc_GCExt_disable(threadData_t *threadData)
{

  GC_disable();
  return;
}

void omc_GCExt_enable(threadData_t *threadData)
{

  GC_enable();
  return;
}

void omc_GCExt_gcollectAndUnmap(threadData_t *threadData)
{

  GC_gcollect_and_unmap();
  return;
}

void omc_GCExt_gcollect(threadData_t *threadData)
{

  GC_gcollect();
  return;
}

