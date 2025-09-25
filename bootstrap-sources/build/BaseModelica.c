#include "omc_simulation_settings.h"
#include "BaseModelica.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,4,3) {&BaseModelica_OutputFormat_OUTPUT__FORMAT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "baseModelicaOptions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,19,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "moveBindings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,12,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Moves movable binding equations to normal equations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,52,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,0) {_OMC_LIT4,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "scalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,9,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Fully scalarize the Base Modelica model."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,40,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,0) {_OMC_LIT8,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,1) {_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,1) {_OMC_LIT7,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,1) {_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Enables optional Base Modelica options."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,39,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(154)),_OMC_LIT1,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT3,_OMC_LIT15,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,11,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,38,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT19,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "scalarized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,10,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "partiallyScalarized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,19,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "nonScalarized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,13,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "withRecords"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,11,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "withoutRecords"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,14,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "baseModelicaFormat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,18,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,1) {_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {_OMC_LIT26,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,1) {_OMC_LIT25,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,1) {_OMC_LIT24,_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,1) {_OMC_LIT23,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,1) {_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Formatting options for Base Modelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,36,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(153)),_OMC_LIT28,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT3,_OMC_LIT35,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#include "util/modelica.h"

#include "BaseModelica_includes.h"



DLLDirection
modelica_metatype omc_BaseModelica_formatFromFlags(threadData_t *threadData)
{
  modelica_metatype _format = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _format = _OMC_LIT0;
  if((!omc_Flags_isSet(threadData, _OMC_LIT22)))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = mmc_mk_integer(3);
    _format = tmpMeta1;
  }
  else
  {
    if(omc_Flags_isConfigFlagSet(threadData, _OMC_LIT18, _OMC_LIT8))
    {
      tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
      memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[2] = mmc_mk_integer(1);
      _format = tmpMeta2;

      tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(5));
      memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[3] = mmc_mk_integer(2);
      _format = tmpMeta3;
    }
  }

  {
    modelica_metatype _option;
    for (tmpMeta4 = omc_Flags_getConfigStringList(threadData, _OMC_LIT38); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _option = MMC_CAR(tmpMeta4);
      { /* match expression */
        modelica_string tmp7_1;
        tmp7_1 = _option;
        {
          volatile mmc_switch_type tmp7;
          int tmp8;
          tmp7 = 0;
          for (; tmp7 < 6; tmp7++) {
            switch (MMC_SWITCH_CAST(tmp7)) {
            case 0: {
              modelica_metatype tmpMeta9;
              if (10 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
              /* Pattern matching succeeded */
              tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = mmc_mk_integer(1);
              _format = tmpMeta9;
              goto tmp6_done;
            }
            case 1: {
              modelica_metatype tmpMeta10;
              if (19 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
              /* Pattern matching succeeded */
              tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = mmc_mk_integer(2);
              _format = tmpMeta10;
              goto tmp6_done;
            }
            case 2: {
              modelica_metatype tmpMeta11;
              if (13 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
              /* Pattern matching succeeded */
              tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = mmc_mk_integer(3);
              _format = tmpMeta11;
              goto tmp6_done;
            }
            case 3: {
              modelica_metatype tmpMeta12;
              if (11 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
              /* Pattern matching succeeded */
              tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = mmc_mk_integer(1);
              _format = tmpMeta12;
              goto tmp6_done;
            }
            case 4: {
              modelica_metatype tmpMeta13;
              if (14 != MMC_STRLEN(tmp7_1) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmp7_1)) != 0) goto tmp6_end;
              /* Pattern matching succeeded */
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = mmc_mk_integer(2);
              _format = tmpMeta13;
              goto tmp6_done;
            }
            case 5: {
              
              /* Pattern matching succeeded */
              goto tmp6_done;
            }
            }
            goto tmp6_end;
            tmp6_end: ;
          }
          goto goto_5;
          goto_5:;
          MMC_THROW_INTERNAL();
          goto tmp6_done;
          tmp6_done:;
        }
      }
      ;
    }
  }

  tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_format), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = mmc_mk_boolean(omc_Flags_isConfigFlagSet(threadData, _OMC_LIT18, _OMC_LIT4));
  _format = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _format;
}

