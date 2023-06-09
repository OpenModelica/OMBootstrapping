#ifdef OMC_BASE_FILE
#define OMC_FILE OMC_BASE_FILE
#else
#define OMC_FILE "DoubleEnded.c"
#endif
#include "omc_simulation_settings.h"
#include "DoubleEnded.h"
#include "util/modelica.h"
#include "DoubleEnded_includes.h"
DLLExport
modelica_metatype omc_DoubleEnded_mapFoldNoCopy(threadData_t *threadData, modelica_metatype _delst, modelica_fnptr _inMapFunc, modelica_metatype __omcQ_24in_5Farg)
{
modelica_metatype _arg = NULL;
modelica_metatype _element = NULL;
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_arg = __omcQ_24in_5Farg;
_lst = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
while(1)
{
if(!(!listEmpty(_lst))) break;
_element = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), listGet(_lst, ((modelica_integer) 1)), _arg ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, listGet(_lst, ((modelica_integer) 1)), _arg ,&_arg);
listSetFirst(_lst, _element);
tmpMeta1 = _lst;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_lst = tmpMeta3;
}
_return: OMC_LABEL_UNUSED
return _arg;
}
DLLExport
void omc_DoubleEnded_mapNoCopy__1(threadData_t *threadData, modelica_metatype _delst, modelica_fnptr _inMapFunc, modelica_metatype _inArg1)
{
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
while(1)
{
if(!(!listEmpty(_lst))) break;
listSetFirst(_lst, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 2))), listGet(_lst, ((modelica_integer) 1)), _inArg1) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inMapFunc), 1)))) (threadData, listGet(_lst, ((modelica_integer) 1)), _inArg1));
tmpMeta1 = _lst;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_lst = tmpMeta3;
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_DoubleEnded_clear(threadData_t *threadData, modelica_metatype _delst)
{
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_lst = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), tmpMeta1);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), tmpMeta2);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(((modelica_integer) 0)));
{
modelica_metatype _l;
for (tmpMeta3 = _lst; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
{
_l = MMC_CAR(tmpMeta3);
omc_GCExt_free(threadData, _l);
}
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_DoubleEnded_toListNoCopyNoClear(threadData_t *threadData, modelica_metatype _delst)
{
modelica_metatype _res = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_res = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
_return: OMC_LABEL_UNUSED
return _res;
}
DLLExport
modelica_metatype omc_DoubleEnded_toListAndClear(threadData_t *threadData, modelica_metatype _delst, modelica_metatype _prependToList)
{
modelica_metatype _res = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if((mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))))) == ((modelica_integer) 0)))
{
_res = _prependToList;
goto _return;
}
_res = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
if((!listEmpty(_prependToList)))
{
listSetRest(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4)))), _prependToList);
}
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), tmpMeta1);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), tmpMeta2);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(((modelica_integer) 0)));
_return: OMC_LABEL_UNUSED
return _res;
}
DLLExport
void omc_DoubleEnded_push__list__back(threadData_t *threadData, modelica_metatype _delst, modelica_metatype _lst)
{
modelica_integer _length;
modelica_integer _lstLength;
modelica_metatype _tail = NULL;
modelica_metatype _tmp = NULL;
modelica_metatype _t = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_length = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2)))));
_lstLength = listLength(_lst);
if((_lstLength == ((modelica_integer) 0)))
{
goto _return;
}
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(_length + _lstLength));
_t = listGet(_lst, ((modelica_integer) 1));
tmpMeta1 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
_tmp = tmpMeta1;
if((_length == ((modelica_integer) 0)))
{
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), _tmp);
}
else
{
listSetRest(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4)))), _tmp);
}
_tail = _tmp;
{
modelica_metatype _l;
for (tmpMeta2 = listRest(_lst); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
{
_l = MMC_CAR(tmpMeta2);
tmpMeta3 = mmc_mk_cons(_l, MMC_REFSTRUCTLIT(mmc_nil));
_tmp = tmpMeta3;
listSetRest(_tail, _tmp);
_tail = _tmp;
}
}
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), _tail);
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_DoubleEnded_push__back(threadData_t *threadData, modelica_metatype _delst, modelica_metatype _elt)
{
modelica_integer _length;
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_length = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2)))));
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(((modelica_integer) 1) + _length));
if((_length == ((modelica_integer) 0)))
{
tmpMeta1 = mmc_mk_cons(_elt, MMC_REFSTRUCTLIT(mmc_nil));
_lst = tmpMeta1;
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), _lst);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), _lst);
goto _return;
}
tmpMeta2 = mmc_mk_cons(_elt, MMC_REFSTRUCTLIT(mmc_nil));
_lst = tmpMeta2;
listSetRest(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4)))), _lst);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), _lst);
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_DoubleEnded_push__list__front(threadData_t *threadData, modelica_metatype _delst, modelica_metatype _lst)
{
modelica_integer _length;
modelica_integer _lstLength;
modelica_metatype _work = NULL;
modelica_metatype _oldHead = NULL;
modelica_metatype _tmp = NULL;
modelica_metatype _head = NULL;
modelica_metatype _t = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_length = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2)))));
_lstLength = listLength(_lst);
if((_lstLength == ((modelica_integer) 0)))
{
goto _return;
}
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(_length + _lstLength));
tmpMeta1 = _lst;
if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
tmpMeta2 = MMC_CAR(tmpMeta1);
tmpMeta3 = MMC_CDR(tmpMeta1);
_t = tmpMeta2;
_tmp = tmpMeta3;
tmpMeta4 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
_head = tmpMeta4;
_oldHead = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), _head);
{
modelica_metatype _l;
for (tmpMeta5 = _tmp; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
{
_l = MMC_CAR(tmpMeta5);
tmpMeta6 = mmc_mk_cons(_l, MMC_REFSTRUCTLIT(mmc_nil));
_work = tmpMeta6;
listSetRest(_head, _work);
_head = _work;
}
}
if((_length == ((modelica_integer) 0)))
{
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), _head);
}
else
{
listSetRest(_head, _oldHead);
}
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
void omc_DoubleEnded_push__front(threadData_t *threadData, modelica_metatype _delst, modelica_metatype _elt)
{
modelica_integer _length;
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_length = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2)))));
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(((modelica_integer) 1) + _length));
if((_length == ((modelica_integer) 0)))
{
tmpMeta1 = mmc_mk_cons(_elt, MMC_REFSTRUCTLIT(mmc_nil));
_lst = tmpMeta1;
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), _lst);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), _lst);
goto _return;
}
_lst = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
tmpMeta2 = mmc_mk_cons(_elt, _lst);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), tmpMeta2);
_return: OMC_LABEL_UNUSED
return;
}
DLLExport
modelica_metatype omc_DoubleEnded_currentBackCell(threadData_t *threadData, modelica_metatype _delst)
{
modelica_metatype _last = NULL;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_last = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))));
_return: OMC_LABEL_UNUSED
return _last;
}
DLLExport
modelica_metatype omc_DoubleEnded_pop__front(threadData_t *threadData, modelica_metatype _delst)
{
modelica_metatype _elt = NULL;
modelica_integer _length;
modelica_metatype _lst = NULL;
modelica_boolean tmp1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_length = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2)))));
tmp1 = (_length > ((modelica_integer) 0));
if (1 != tmp1) MMC_THROW_INTERNAL();
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2))), mmc_mk_integer(((modelica_integer) -1) + _length));
if((_length == ((modelica_integer) 1)))
{
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), tmpMeta2);
tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 4))), tmpMeta3);
goto _return;
}
tmpMeta4 = omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))));
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_elt = tmpMeta5;
_lst = tmpMeta6;
omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 3))), _lst);
_return: OMC_LABEL_UNUSED
return _elt;
}
DLLExport
modelica_integer omc_DoubleEnded_length(threadData_t *threadData, modelica_metatype _delst)
{
modelica_integer _length;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
_length = mmc_unbox_integer(omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_delst), 2)))));
_return: OMC_LABEL_UNUSED
return _length;
}
modelica_metatype boxptr_DoubleEnded_length(threadData_t *threadData, modelica_metatype _delst)
{
modelica_integer _length;
modelica_metatype out_length;
_length = omc_DoubleEnded_length(threadData, _delst);
out_length = mmc_mk_icon(_length);
return out_length;
}
DLLExport
modelica_metatype omc_DoubleEnded_empty(threadData_t *threadData, modelica_metatype _dummy)
{
modelica_metatype _delst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta3 = mmc_mk_box4(3, &DoubleEnded_MutableList_LIST__desc, omc_Mutable_create(threadData, mmc_mk_integer(((modelica_integer) 0))), omc_Mutable_create(threadData, tmpMeta1), omc_Mutable_create(threadData, tmpMeta2));
_delst = tmpMeta3;
_return: OMC_LABEL_UNUSED
return _delst;
}
DLLExport
modelica_metatype omc_DoubleEnded_fromList(threadData_t *threadData, modelica_metatype _lst)
{
modelica_metatype _delst = NULL;
modelica_metatype _head = NULL;
modelica_metatype _tail = NULL;
modelica_metatype _tmp = NULL;
modelica_integer _length;
modelica_metatype _t = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
modelica_metatype tmpMeta3;
modelica_metatype tmpMeta4;
modelica_metatype tmpMeta5;
modelica_metatype tmpMeta6;
modelica_metatype tmpMeta7;
modelica_metatype tmpMeta8;
modelica_metatype tmpMeta9;
modelica_metatype tmpMeta10;
modelica_metatype tmpMeta11;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
if(listEmpty(_lst))
{
tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
tmpMeta3 = mmc_mk_box4(3, &DoubleEnded_MutableList_LIST__desc, omc_Mutable_create(threadData, mmc_mk_integer(((modelica_integer) 0))), omc_Mutable_create(threadData, tmpMeta1), omc_Mutable_create(threadData, tmpMeta2));
_delst = tmpMeta3;
goto _return;
}
tmpMeta4 = _lst;
if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
tmpMeta5 = MMC_CAR(tmpMeta4);
tmpMeta6 = MMC_CDR(tmpMeta4);
_t = tmpMeta5;
_tmp = tmpMeta6;
tmpMeta7 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
_head = tmpMeta7;
_tail = _head;
_length = ((modelica_integer) 1);
{
modelica_metatype _l;
for (tmpMeta8 = _tmp; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
{
_l = MMC_CAR(tmpMeta8);
tmpMeta9 = mmc_mk_cons(_l, MMC_REFSTRUCTLIT(mmc_nil));
_tmp = tmpMeta9;
listSetRest(_tail, _tmp);
_tail = _tmp;
_length = ((modelica_integer) 1) + _length;
}
}
tmpMeta11 = mmc_mk_box4(3, &DoubleEnded_MutableList_LIST__desc, omc_Mutable_create(threadData, mmc_mk_integer(_length)), omc_Mutable_create(threadData, _head), omc_Mutable_create(threadData, _tail));
_delst = tmpMeta11;
_return: OMC_LABEL_UNUSED
return _delst;
}
DLLExport
modelica_metatype omc_DoubleEnded_new(threadData_t *threadData, modelica_metatype _first)
{
modelica_metatype _delst = NULL;
modelica_metatype _lst = NULL;
modelica_metatype tmpMeta1;
modelica_metatype tmpMeta2;
MMC_SO();
_tailrecursive: OMC_LABEL_UNUSED
tmpMeta1 = mmc_mk_cons(_first, MMC_REFSTRUCTLIT(mmc_nil));
_lst = tmpMeta1;
tmpMeta2 = mmc_mk_box4(3, &DoubleEnded_MutableList_LIST__desc, omc_Mutable_create(threadData, mmc_mk_integer(((modelica_integer) 1))), omc_Mutable_create(threadData, _lst), omc_Mutable_create(threadData, _lst));
_delst = tmpMeta2;
_return: OMC_LABEL_UNUSED
return _delst;
}
