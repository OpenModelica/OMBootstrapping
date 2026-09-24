#include "omc_simulation_settings.h"
#include "ContainerImage.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Port specified without host."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,28,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Failed to get host and port of image reference."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,47,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Failed to parse container image name '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,38,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "'\\''"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Failed to parse container host '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,32,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Failed to get name of image reference."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,38,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "@"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "_signature.log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,14,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Can't verify signature of container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,43,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "' without `cosign` from sigstore."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,33,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "cosign verify "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,14,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data " --certificate-identity=https://github.com/OpenModelica/openmodelica-crossbuild/.github/workflows/publish.yml@refs/tags/v1.27.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,127,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data " --certificate-oidc-issuer=https://token.actions.githubusercontent.com"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,70,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Failed to verify signature of container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,47,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "cosign_version.log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,18,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "cosign version"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,14,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Can't find `cosign` from sigstore in PATH. Signatures of container images can't be verified."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,92,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Install cosign from https://github.com/sigstore/cosign to verify and automatically download container images."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,109,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "_inspect.log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,12,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "docker image inspect "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,21,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "docker pull "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,12,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "_pull.log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,9,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Failed to pull container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,32,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Using container registry \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,26,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "\". Make sure you trust the registry."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,36,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "docker.io"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,9,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "ghcr.io"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,7,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Container image \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,17,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\" is an external image. Make sure you trust the image."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,54,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "openmodelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,12,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "\" is not a known OpenModelica image."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,36,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "crossbuild"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,10,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "\" is not tested for this OpenModelica version."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,46,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "v1.27.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,7,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "\" has unknown digest \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,22,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\"."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,2,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "Check https://github.com/OpenModelica/openmodelica-crossbuild/pkgs/container/crossbuild/ for available cross-build images managed by OpenModelica."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,146,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "\" has no digest. That shouldn't be possible."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,44,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "sha256:5289cb061e29168b201f6f707a9343a18fb76b4f7e421ed9614104a78129a49c"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,71,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "_manifest.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,14,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "docker manifest inspect "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,24,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data " -v"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,3,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "Failed to retrieve manifest of container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,48,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Descriptor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,10,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,12) {&JSON_NULL__desc,}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,17,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "' is a multi-platform image, which isn't supported for cross compilation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,73,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "Use a reference to a single platform image, e.g. one of the images listed by `docker manifest inspect "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,102,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "`."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,2,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "Failed to retrieve manifest descriptor of container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,59,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "digest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,6,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "Failed to retrieve digest SHA from manifest of container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,64,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Retrieve digest 256-SHA has unexpected format: '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,48,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "sha256:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,7,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Failed to parse container image '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,33,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Failed to parse container image reference with arguments \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,58,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,1,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#include "util/modelica.h"

#include "ContainerImage_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_hostToString(threadData_t *threadData, modelica_metatype _image);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ContainerImage_hostToString,2,0) {(void*) boxptr_ContainerImage_hostToString,0}};
#define boxvar_ContainerImage_hostToString MMC_REFSTRUCTLIT(boxvar_lit_ContainerImage_hostToString)
PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_parseContainerRepository(threadData_t *threadData, modelica_string _repositoryString, modelica_metatype *out_tag);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ContainerImage_parseContainerRepository,2,0) {(void*) boxptr_ContainerImage_parseContainerRepository,0}};
#define boxvar_ContainerImage_parseContainerRepository MMC_REFSTRUCTLIT(boxvar_lit_ContainerImage_parseContainerRepository)
PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_quoteForShell(threadData_t *threadData, modelica_string _str);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ContainerImage_quoteForShell,2,0) {(void*) boxptr_ContainerImage_quoteForShell,0}};
#define boxvar_ContainerImage_quoteForShell MMC_REFSTRUCTLIT(boxvar_lit_ContainerImage_quoteForShell)
PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_parseContainerHostPort(threadData_t *threadData, modelica_string _host_and_port, modelica_metatype *out_port);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ContainerImage_parseContainerHostPort,2,0) {(void*) boxptr_ContainerImage_parseContainerHostPort,0}};
#define boxvar_ContainerImage_parseContainerHostPort MMC_REFSTRUCTLIT(boxvar_lit_ContainerImage_parseContainerHostPort)

PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_hostToString(threadData_t *threadData, modelica_metatype _image)
{
  modelica_string _hostPortStr = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hostPortStr = _OMC_LIT0;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _image;
    {
      modelica_string _hostStr = NULL;
      modelica_string _portStr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _hostStr has no default value.
      // _portStr has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_string tmp10;
          modelica_string tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 2);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 3);
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = OMC_BOX_FIELD(tmpMeta8, 1);
          
          _hostStr = tmpMeta7;
          _portStr = tmpMeta9;
          /* Pattern matching succeeded */
          tmp10 = stringAppend(_hostStr,_OMC_LIT1);
          tmp11 = stringAppend(tmp10,_portStr);
          tmp1 = tmp11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 2);
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = OMC_BOX_FIELD(tmpMeta12, 1);
          tmpMeta14 = OMC_BOX_FIELD(tmp4_1, 3);
          if (!optionNone(tmpMeta14)) goto tmp3_end;
          
          _hostStr = tmpMeta13;
          /* Pattern matching succeeded */
          tmp1 = _hostStr;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta15 = OMC_BOX_FIELD(tmp4_1, 2);
          if (!optionNone(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp4_1, 3);
          if (optionNone(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = OMC_BOX_FIELD(tmpMeta16, 1);
          
          /* Pattern matching succeeded */
          omc_Error_addCompilerError(threadData, _OMC_LIT2);
          goto goto_2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta18 = OMC_BOX_FIELD(tmp4_1, 2);
          if (!optionNone(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = OMC_BOX_FIELD(tmp4_1, 3);
          if (!optionNone(tmpMeta19)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_Error_addCompilerError(threadData, _OMC_LIT3);
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
  omc_string_store(&(_hostPortStr), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hostPortStr;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_parseContainerRepository(threadData_t *threadData, modelica_string _repositoryString, modelica_metatype *out_tag)
{
  modelica_string _repository = NULL;
  modelica_metatype _tag = NULL;
  modelica_string tmp1_c0 __attribute__((unused)) = 0;
  modelica_string omc_ret_;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _repository has no default value.
  // _tag has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Util_stringSplitAtChar(threadData, _repositoryString, _OMC_LIT1);
    {
      modelica_string _repository_str = NULL;
      modelica_string _tag_str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repository_str has no default value.
      // _tag_str has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          _repository_str = tmpMeta6;
          _tag_str = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1_c0 = _repository_str;
          tmpMeta[0+1] = mmc_mk_some(_tag_str);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          _repository_str = tmpMeta10;
          /* Pattern matching succeeded */
          tmp1_c0 = _repository_str;
          tmpMeta[0+1] = mmc_mk_none();
          goto tmp3_done;
        }
        case 2: {
          modelica_string tmp12;
          modelica_string tmp13;
          
          /* Pattern matching succeeded */
          tmp12 = stringAppend(_OMC_LIT4,_repositoryString);
          tmp13 = stringAppend(tmp12,_OMC_LIT5);
          omc_Error_addCompilerError(threadData, tmp13);
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
  _repository = tmp1_c0;
  _tag = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tag) { *out_tag = _tag; }
  omc_ret_ = _repository;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_quoteForShell(threadData_t *threadData, modelica_string _str)
{
  modelica_string _quoted = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _quoted has no default value.
  tmp1 = stringAppend(_OMC_LIT6,omc_System_stringReplace(threadData, _str, _OMC_LIT6, _OMC_LIT7));
  tmp2 = stringAppend(tmp1,_OMC_LIT6);
  omc_string_store(&(_quoted), tmp2);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _quoted;
  return omc_ret_;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_ContainerImage_parseContainerHostPort(threadData_t *threadData, modelica_string _host_and_port, modelica_metatype *out_port)
{
  modelica_string _host = NULL;
  modelica_metatype _port = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _host has no default value.
  _port = mmc_mk_none();
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Util_stringSplitAtChar(threadData, _host_and_port, _OMC_LIT1);
    {
      modelica_string _host_str = NULL;
      modelica_string _port_str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _host_str has no default value.
      // _port_str has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          _host_str = tmpMeta6;
          _port_str = tmpMeta8;
          /* Pattern matching succeeded */
          _port = mmc_mk_some(_port_str);
          tmp1 = _host_str;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          _host_str = tmpMeta10;
          /* Pattern matching succeeded */
          tmp1 = _host_str;
          goto tmp3_done;
        }
        case 2: {
          modelica_string tmp12;
          modelica_string tmp13;
          
          /* Pattern matching succeeded */
          tmp12 = stringAppend(_OMC_LIT8,_host_and_port);
          tmp13 = stringAppend(tmp12,_OMC_LIT5);
          omc_Error_addCompilerError(threadData, tmp13);
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
  omc_string_store(&(_host), tmp1);
  _return: OMC_LABEL_UNUSED
  if (out_port) { *out_port = _port; }
  omc_ret_ = _host;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_ContainerImage_nameToString(threadData_t *threadData, modelica_metatype _image)
{
  modelica_string _name = NULL;
  modelica_string tmp1 = 0;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _name = _OMC_LIT0;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _image;
    {
      modelica_string _namespace_str = NULL;
      modelica_string _repository = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _namespace_str has no default value.
      // _repository has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_string tmp9;
          modelica_string tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 4);
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmpMeta6, 1);
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _namespace_str = tmpMeta7;
          _repository = tmpMeta8;
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_namespace_str,_OMC_LIT9);
          tmp10 = stringAppend(tmp9,_repository);
          tmp1 = tmp10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta11 = OMC_BOX_FIELD(tmp4_1, 4);
          if (!optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = OMC_BOX_FIELD(tmp4_1, 5);
          
          _repository = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = _repository;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addCompilerError(threadData, _OMC_LIT10);
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
  omc_string_store(&(_name), tmp1);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _name;
  return omc_ret_;
}

DLLModelDirection
modelica_string omc_ContainerImage_toString(threadData_t *threadData, modelica_metatype _image, modelica_boolean _useDigest)
{
  modelica_string _imageString = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imageString = _OMC_LIT0;
  omc_string_store(&(_imageString), omc_ContainerImage_hostToString(threadData, _image));

  if((!(stringEqual(_imageString, _OMC_LIT0))))
  {
    tmp1 = stringAppend(_imageString,_OMC_LIT9);
    omc_string_store(&(_imageString), tmp1);
  }

  tmp2 = stringAppend(_imageString,omc_ContainerImage_nameToString(threadData, _image));
  omc_string_store(&(_imageString), tmp2);

  if((_useDigest && isSome((OMC_BOX_FIELD(_image, 7)))))
  {
    tmp3 = stringAppend(_imageString,_OMC_LIT11);
    tmp4 = stringAppend(tmp3,omc_Util_getOption(threadData, (OMC_BOX_FIELD(_image, 7))));
    omc_string_store(&(_imageString), tmp4);
  }
  else
  {
    if(isSome((OMC_BOX_FIELD(_image, 6))))
    {
      tmp5 = stringAppend(_imageString,_OMC_LIT1);
      tmp6 = stringAppend(tmp5,omc_Util_getOption(threadData, (OMC_BOX_FIELD(_image, 6))));
      omc_string_store(&(_imageString), tmp6);
    }
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _imageString;
  return omc_ret_;
}
modelica_metatype boxptr_ContainerImage_toString(threadData_t *threadData, modelica_metatype _image, modelica_metatype _useDigest)
{
  modelica_integer tmp1;
  modelica_string _imageString = NULL;
  tmp1 = omc_unbox_integer(_useDigest);
  _imageString = omc_ContainerImage_toString(threadData, _image, tmp1);
  /* skip box _imageString; String */
  return _imageString;
}

DLLModelDirection
void omc_ContainerImage_assertSignature(threadData_t *threadData, modelica_metatype _image)
{
  modelica_string _cosignLogFile = NULL;
  modelica_string _cmd = NULL;
  modelica_string _imageName = NULL;
  modelica_string _imageReference = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_string tmp8;
  modelica_string tmp9;
  modelica_string tmp10;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cosignLogFile has no default value.
  // _cmd has no default value.
  _imageName = omc_ContainerImage_toString(threadData, _image, 0 /* false */);
  _imageReference = omc_ContainerImage_toString(threadData, _image, 1 /* true */);
  tmp1 = stringAppend((OMC_BOX_FIELD(_image, 5)),_OMC_LIT12);
  omc_string_store(&(_cosignLogFile), tmp1);

  if(omc_System_regularFileExists(threadData, _cosignLogFile))
  {
    omc_System_removeFile(threadData, _cosignLogFile);
  }

  if((!omc_ContainerImage_isCosignAvailable(threadData)))
  {
    tmp2 = stringAppend(_OMC_LIT13,_imageName);
    tmp3 = stringAppend(tmp2,_OMC_LIT14);
    omc_Error_addCompilerError(threadData, tmp3);

    OMC_THROW_INTERNAL();
  }

  tmp4 = stringAppend(_OMC_LIT15,omc_ContainerImage_quoteForShell(threadData, _imageReference));
  tmp5 = stringAppend(tmp4,_OMC_LIT16);
  tmp6 = stringAppend(tmp5,_OMC_LIT17);
  omc_string_store(&(_cmd), tmp6);

  tmp7 = stringAppend(_cmd,_OMC_LIT18);
  omc_System_appendFile(threadData, _cosignLogFile, tmp7);

  if((omc_System_systemCall(threadData, _cmd, _cosignLogFile) != ((modelica_integer) 0)))
  {
    tmp8 = stringAppend(_OMC_LIT19,_imageName);
    tmp9 = stringAppend(tmp8,_OMC_LIT5);
    omc_Error_addCompilerError(threadData, tmp9);

    tmp10 = stringAppend(omc_System_readFile(threadData, _cosignLogFile),_OMC_LIT18);
    omc_Error_addCompilerNotification(threadData, tmp10);

    omc_System_removeFile(threadData, _cosignLogFile);

    OMC_THROW_INTERNAL();
  }

  omc_System_removeFile(threadData, _cosignLogFile);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_boolean omc_ContainerImage_isCosignAvailable(threadData_t *threadData)
{
  modelica_boolean _hasCosign;
  modelica_string _cosignLogFile = NULL;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasCosign has no default value.
  _cosignLogFile = _OMC_LIT20;
  if(omc_System_regularFileExists(threadData, _cosignLogFile))
  {
    omc_System_removeFile(threadData, _cosignLogFile);
  }

  _hasCosign = (omc_System_systemCall(threadData, _OMC_LIT21, _cosignLogFile) == ((modelica_integer) 0));

  if((!_hasCosign))
  {
    omc_Error_addCompilerWarning(threadData, _OMC_LIT22);

    omc_Error_addCompilerNotification(threadData, _OMC_LIT23);
  }

  if(omc_System_regularFileExists(threadData, _cosignLogFile))
  {
    omc_System_removeFile(threadData, _cosignLogFile);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _hasCosign;
  return omc_ret_;
}
modelica_metatype boxptr_ContainerImage_isCosignAvailable(threadData_t *threadData)
{
  modelica_boolean _hasCosign;
  modelica_metatype out_hasCosign;
  _hasCosign = omc_ContainerImage_isCosignAvailable(threadData);
  out_hasCosign = omc_mk_icon(_hasCosign);
  return out_hasCosign;
}

DLLModelDirection
modelica_boolean omc_ContainerImage_isAvailableLocally(threadData_t *threadData, modelica_metatype _image)
{
  modelica_boolean _isAvailable;
  modelica_string _inspectLogFile = NULL;
  modelica_string _imageName = NULL;
  modelica_string _cmd = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isAvailable has no default value.
  // _inspectLogFile has no default value.
  _imageName = omc_ContainerImage_toString(threadData, _image, 1 /* true */);
  // _cmd has no default value.
  tmp1 = stringAppend((OMC_BOX_FIELD(_image, 5)),_OMC_LIT24);
  omc_string_store(&(_inspectLogFile), tmp1);

  if(omc_System_regularFileExists(threadData, _inspectLogFile))
  {
    omc_System_removeFile(threadData, _inspectLogFile);
  }

  tmp2 = stringAppend(_OMC_LIT25,omc_ContainerImage_quoteForShell(threadData, _imageName));
  omc_string_store(&(_cmd), tmp2);

  _isAvailable = (omc_System_systemCall(threadData, _cmd, _inspectLogFile) == ((modelica_integer) 0));

  if(omc_System_regularFileExists(threadData, _inspectLogFile))
  {
    omc_System_removeFile(threadData, _inspectLogFile);
  }
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _isAvailable;
  return omc_ret_;
}
modelica_metatype boxptr_ContainerImage_isAvailableLocally(threadData_t *threadData, modelica_metatype _image)
{
  modelica_boolean _isAvailable;
  modelica_metatype out_isAvailable;
  _isAvailable = omc_ContainerImage_isAvailableLocally(threadData, _image);
  out_isAvailable = omc_mk_icon(_isAvailable);
  return out_isAvailable;
}

DLLModelDirection
modelica_string omc_ContainerImage_pullCommand(threadData_t *threadData, modelica_metatype _image)
{
  modelica_string _cmd = NULL;
  modelica_string tmp1;
  modelica_string omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = stringAppend(_OMC_LIT26,omc_ContainerImage_quoteForShell(threadData, omc_ContainerImage_toString(threadData, _image, 0 /* false */)));
  _cmd = tmp1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _cmd;
  return omc_ret_;
}

DLLModelDirection
void omc_ContainerImage_pull(threadData_t *threadData, modelica_metatype _image)
{
  modelica_string _pullLogFile = NULL;
  modelica_string _imageName = NULL;
  modelica_string _cmd = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pullLogFile has no default value.
  _imageName = omc_ContainerImage_toString(threadData, _image, 0 /* false */);
  // _cmd has no default value.
  tmp1 = stringAppend((OMC_BOX_FIELD(_image, 5)),_OMC_LIT27);
  omc_string_store(&(_pullLogFile), tmp1);

  tmp2 = stringAppend(_OMC_LIT26,omc_ContainerImage_quoteForShell(threadData, _imageName));
  omc_string_store(&(_cmd), tmp2);

  if((omc_System_systemCall(threadData, _cmd, _pullLogFile) != ((modelica_integer) 0)))
  {
    tmp3 = stringAppend(_OMC_LIT28,_imageName);
    tmp4 = stringAppend(tmp3,_OMC_LIT5);
    omc_Error_addCompilerError(threadData, tmp4);

    tmp5 = stringAppend(omc_System_readFile(threadData, _pullLogFile),_OMC_LIT18);
    omc_Error_addCompilerNotification(threadData, tmp5);

    omc_System_removeFile(threadData, _pullLogFile);

    OMC_THROW_INTERNAL();
  }

  tmp6 = stringAppend(omc_System_readFile(threadData, _pullLogFile),_OMC_LIT18);
  omc_Error_addCompilerNotification(threadData, tmp6);

  omc_System_removeFile(threadData, _pullLogFile);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLModelDirection
modelica_boolean omc_ContainerImage_isTrustedOpenModelicaImage(threadData_t *threadData, modelica_metatype _image, modelica_boolean *out_hasKnownDigest)
{
  modelica_boolean _isOpenModelicaImage;
  modelica_boolean _hasKnownDigest;
  modelica_boolean _isKnownHost;
  modelica_boolean _isKnownNamespace;
  modelica_boolean _isKnownTag;
  modelica_string _host = NULL;
  modelica_boolean tmp1 = 0;
  modelica_boolean tmp11 = 0;
  modelica_boolean tmp19 = 0;
  modelica_boolean tmp26 = 0;
  modelica_boolean tmp34 = 0;
  modelica_boolean omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isOpenModelicaImage = 0 /* false */;
  _hasKnownDigest = 0 /* false */;
  // _isKnownHost has no default value.
  // _isKnownNamespace has no default value.
  // _isKnownTag has no default value.
  // _host has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = (OMC_BOX_FIELD(_image, 2));
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = OMC_BOX_FIELD(tmp4_1, 1);
          if (9 != omc_string_len(tmpMeta6) || strcmp(omc_string_data(_OMC_LIT31), omc_string_data(tmpMeta6)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta7 = OMC_BOX_FIELD(tmp4_1, 1);
          if (7 != omc_string_len(tmpMeta7) || strcmp(omc_string_data(_OMC_LIT32), omc_string_data(tmpMeta7)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_string tmp9;
          modelica_string tmp10;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = OMC_BOX_FIELD(tmp4_1, 1);
          _host = tmpMeta8;
          /* Pattern matching succeeded */
          tmp9 = stringAppend(_OMC_LIT29,_host);
          tmp10 = stringAppend(tmp9,_OMC_LIT30);
          omc_Error_addCompilerWarning(threadData, tmp10);
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
  _isKnownHost = tmp1;

  { /* match expression */
    modelica_metatype tmp14_1;modelica_boolean tmp14_2;
    tmp14_1 = (OMC_BOX_FIELD(_image, 4));
    tmp14_2 = _isKnownHost;
    {
      volatile mmc_switch_type tmp14;
      int tmp15;
      tmp14 = 0;
      for (; tmp14 < 3; tmp14++) {
        switch (MMC_SWITCH_CAST(tmp14)) {
        case 0: {
          modelica_metatype tmpMeta16;
          if (1 /* true */ != tmp14_2) goto tmp13_end;
          if (optionNone(tmp14_1)) goto tmp13_end;
          tmpMeta16 = OMC_BOX_FIELD(tmp14_1, 1);
          if (12 != omc_string_len(tmpMeta16) || strcmp(omc_string_data(_OMC_LIT35), omc_string_data(tmpMeta16)) != 0) goto tmp13_end;
          /* Pattern matching succeeded */
          tmp11 = 1 /* true */;
          goto tmp13_done;
        }
        case 1: {
          modelica_string tmp17;
          modelica_string tmp18;
          if (1 /* true */ != tmp14_2) goto tmp13_end;
          
          /* Pattern matching succeeded */
          tmp17 = stringAppend(_OMC_LIT33,omc_ContainerImage_toString(threadData, _image, 0 /* false */));
          tmp18 = stringAppend(tmp17,_OMC_LIT34);
          omc_Error_addCompilerWarning(threadData, tmp18);
          tmp11 = 0 /* false */;
          goto tmp13_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp11 = 0 /* false */;
          goto tmp13_done;
        }
        }
        goto tmp13_end;
        tmp13_end: ;
      }
      goto goto_12;
      goto_12:;
      OMC_THROW_INTERNAL();
      goto tmp13_done;
      tmp13_done:;
    }
  }
  _isKnownNamespace = tmp11;

  { /* match expression */
    modelica_metatype tmp22_1;modelica_boolean tmp22_2;
    tmp22_1 = (OMC_BOX_FIELD(_image, 5));
    tmp22_2 = _isKnownNamespace;
    {
      volatile mmc_switch_type tmp22;
      int tmp23;
      tmp22 = 0;
      for (; tmp22 < 3; tmp22++) {
        switch (MMC_SWITCH_CAST(tmp22)) {
        case 0: {
          if (1 /* true */ != tmp22_2) goto tmp21_end;
          if (10 != omc_string_len(tmp22_1) || strcmp(omc_string_data(_OMC_LIT37), omc_string_data(tmp22_1)) != 0) goto tmp21_end;
          /* Pattern matching succeeded */
          tmp19 = 1 /* true */;
          goto tmp21_done;
        }
        case 1: {
          modelica_string tmp24;
          modelica_string tmp25;
          if (1 /* true */ != tmp22_2) goto tmp21_end;
          
          /* Pattern matching succeeded */
          tmp24 = stringAppend(_OMC_LIT33,omc_ContainerImage_toString(threadData, _image, 0 /* false */));
          tmp25 = stringAppend(tmp24,_OMC_LIT36);
          omc_Error_addCompilerWarning(threadData, tmp25);
          tmp19 = 0 /* false */;
          goto tmp21_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp19 = 0 /* false */;
          goto tmp21_done;
        }
        }
        goto tmp21_end;
        tmp21_end: ;
      }
      goto goto_20;
      goto_20:;
      OMC_THROW_INTERNAL();
      goto tmp21_done;
      tmp21_done:;
    }
  }
  _isOpenModelicaImage = tmp19;

  { /* match expression */
    modelica_metatype tmp29_1;modelica_boolean tmp29_2;
    tmp29_1 = (OMC_BOX_FIELD(_image, 6));
    tmp29_2 = _isOpenModelicaImage;
    {
      volatile mmc_switch_type tmp29;
      int tmp30;
      tmp29 = 0;
      for (; tmp29 < 3; tmp29++) {
        switch (MMC_SWITCH_CAST(tmp29)) {
        case 0: {
          modelica_metatype tmpMeta31;
          if (1 /* true */ != tmp29_2) goto tmp28_end;
          if (optionNone(tmp29_1)) goto tmp28_end;
          tmpMeta31 = OMC_BOX_FIELD(tmp29_1, 1);
          if (7 != omc_string_len(tmpMeta31) || strcmp(omc_string_data(_OMC_LIT39), omc_string_data(tmpMeta31)) != 0) goto tmp28_end;
          /* Pattern matching succeeded */
          tmp26 = 1 /* true */;
          goto tmp28_done;
        }
        case 1: {
          modelica_string tmp32;
          modelica_string tmp33;
          if (1 /* true */ != tmp29_2) goto tmp28_end;
          
          /* Pattern matching succeeded */
          tmp32 = stringAppend(_OMC_LIT33,omc_ContainerImage_toString(threadData, _image, 0 /* false */));
          tmp33 = stringAppend(tmp32,_OMC_LIT38);
          omc_Error_addCompilerWarning(threadData, tmp33);
          tmp26 = 0 /* false */;
          goto tmp28_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp26 = 0 /* false */;
          goto tmp28_done;
        }
        }
        goto tmp28_end;
        tmp28_end: ;
      }
      goto goto_27;
      goto_27:;
      OMC_THROW_INTERNAL();
      goto tmp28_done;
      tmp28_done:;
    }
  }
  _isKnownTag = tmp26;

  { /* match expression */
    modelica_metatype tmp37_1;modelica_boolean tmp37_2;
    tmp37_1 = (OMC_BOX_FIELD(_image, 7));
    tmp37_2 = _isKnownTag;
    {
      modelica_string _digest = NULL;
      volatile mmc_switch_type tmp37;
      int tmp38;
      // _digest has no default value.
      tmp37 = 0;
      for (; tmp37 < 4; tmp37++) {
        switch (MMC_SWITCH_CAST(tmp37)) {
        case 0: {
          modelica_metatype tmpMeta39;
          if (1 /* true */ != tmp37_2) goto tmp36_end;
          if (optionNone(tmp37_1)) goto tmp36_end;
          tmpMeta39 = OMC_BOX_FIELD(tmp37_1, 1);
          if (71 != omc_string_len(tmpMeta39) || strcmp(omc_string_data(_OMC_LIT44), omc_string_data(tmpMeta39)) != 0) goto tmp36_end;
          /* Pattern matching succeeded */
          tmp34 = 1 /* true */;
          goto tmp36_done;
        }
        case 1: {
          modelica_metatype tmpMeta40;
          modelica_string tmp41;
          modelica_string tmp42;
          modelica_string tmp43;
          modelica_string tmp44;
          if (1 /* true */ != tmp37_2) goto tmp36_end;
          if (optionNone(tmp37_1)) goto tmp36_end;
          tmpMeta40 = OMC_BOX_FIELD(tmp37_1, 1);
          _digest = tmpMeta40;
          /* Pattern matching succeeded */
          tmp41 = stringAppend(_OMC_LIT33,omc_ContainerImage_toString(threadData, _image, 0 /* false */));
          tmp42 = stringAppend(tmp41,_OMC_LIT40);
          tmp43 = stringAppend(tmp42,_digest);
          tmp44 = stringAppend(tmp43,_OMC_LIT41);
          omc_Error_addCompilerWarning(threadData, tmp44);

          omc_Error_addCompilerNotification(threadData, _OMC_LIT42);
          tmp34 = 0 /* false */;
          goto tmp36_done;
        }
        case 2: {
          modelica_string tmp45;
          modelica_string tmp46;
          if (1 /* true */ != tmp37_2) goto tmp36_end;
          if (!optionNone(tmp37_1)) goto tmp36_end;
          /* Pattern matching succeeded */
          tmp45 = stringAppend(_OMC_LIT33,omc_ContainerImage_toString(threadData, _image, 0 /* false */));
          tmp46 = stringAppend(tmp45,_OMC_LIT43);
          omc_Error_addCompilerError(threadData, tmp46);
          goto goto_35;
          goto tmp36_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp34 = 0 /* false */;
          goto tmp36_done;
        }
        }
        goto tmp36_end;
        tmp36_end: ;
      }
      goto goto_35;
      goto_35:;
      OMC_THROW_INTERNAL();
      goto tmp36_done;
      tmp36_done:;
    }
  }
  _hasKnownDigest = tmp34;
  _return: OMC_LABEL_UNUSED
  if (out_hasKnownDigest) { *out_hasKnownDigest = _hasKnownDigest; }
  omc_ret_ = _isOpenModelicaImage;
  return omc_ret_;
}
modelica_metatype boxptr_ContainerImage_isTrustedOpenModelicaImage(threadData_t *threadData, modelica_metatype _image, modelica_metatype *out_hasKnownDigest)
{
  modelica_boolean _hasKnownDigest;
  modelica_boolean _isOpenModelicaImage;
  modelica_metatype out_isOpenModelicaImage;
  _isOpenModelicaImage = omc_ContainerImage_isTrustedOpenModelicaImage(threadData, _image, &_hasKnownDigest);
  out_isOpenModelicaImage = omc_mk_icon(_isOpenModelicaImage);
  if (out_hasKnownDigest) { *out_hasKnownDigest = omc_mk_icon(_hasKnownDigest); }
  return out_isOpenModelicaImage;
}

DLLModelDirection
modelica_metatype omc_ContainerImage_getDigestSha(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fimage)
{
  modelica_metatype _image = NULL;
  modelica_string _imageName = NULL;
  modelica_string _cmd = NULL;
  modelica_string _manifestFile = NULL;
  modelica_metatype _manifest = NULL;
  modelica_metatype _descriptor = NULL;
  modelica_metatype _digest = NULL;
  modelica_string _digest_sha256_str = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  modelica_string tmp4;
  modelica_string tmp5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta17;
  modelica_string tmp21 = 0;
  modelica_string tmp28;
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _image = __omcQ_24in_5Fimage;
  _imageName = omc_ContainerImage_toString(threadData, _image, 0 /* false */);
  // _cmd has no default value.
  // _manifestFile has no default value.
  // _manifest has no default value.
  // _descriptor has no default value.
  // _digest has no default value.
  // _digest_sha256_str has no default value.
  tmp1 = stringAppend((OMC_BOX_FIELD(_image, 5)),_OMC_LIT45);
  omc_string_store(&(_manifestFile), tmp1);

  if(omc_System_regularFileExists(threadData, _manifestFile))
  {
    omc_System_removeFile(threadData, _manifestFile);
  }

  tmp2 = stringAppend(_OMC_LIT46,omc_ContainerImage_quoteForShell(threadData, _imageName));
  tmp3 = stringAppend(tmp2,_OMC_LIT47);
  omc_string_store(&(_cmd), tmp3);

  if((omc_System_systemCall(threadData, _cmd, _manifestFile) != ((modelica_integer) 0)))
  {
    tmp4 = stringAppend(_OMC_LIT48,_imageName);
    tmp5 = stringAppend(tmp4,_OMC_LIT5);
    omc_Error_addCompilerError(threadData, tmp5);

    tmp6 = stringAppend(omc_System_readFile(threadData, _manifestFile),_OMC_LIT18);
    omc_Error_addCompilerNotification(threadData, tmp6);

    omc_System_removeFile(threadData, _manifestFile);

    OMC_THROW_INTERNAL();
  }

  _manifest = omc_JSON_parseFile(threadData, _manifestFile);

  { /* match expression */
    modelica_metatype tmp10_1;
    tmp10_1 = _manifest;
    {
      int tmp10;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp10_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_JSON_getOrDefault(threadData, _manifest, _OMC_LIT49, _OMC_LIT50);
          goto tmp9_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta7 = omc_JSON_getOrDefault(threadData, _manifest, _OMC_LIT49, _OMC_LIT50);
          goto tmp9_done;
        }
        case 5: {
          modelica_string tmp11;
          modelica_string tmp12;
          modelica_string tmp13;
          modelica_string tmp14;
          
          /* Pattern matching succeeded */
          tmp11 = stringAppend(_OMC_LIT51,_imageName);
          tmp12 = stringAppend(tmp11,_OMC_LIT52);
          omc_Error_addCompilerError(threadData, tmp12);

          tmp13 = stringAppend(_OMC_LIT53,_imageName);
          tmp14 = stringAppend(tmp13,_OMC_LIT54);
          omc_Error_addCompilerNotification(threadData, tmp14);

          omc_System_removeFile(threadData, _manifestFile);
          goto goto_8;
          goto tmp9_done;
        }
        default:
        tmp9_default: OMC_LABEL_UNUSED; {
          modelica_string tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          tmp15 = stringAppend(_OMC_LIT55,_imageName);
          tmp16 = stringAppend(tmp15,_OMC_LIT5);
          omc_Error_addCompilerError(threadData, tmp16);

          omc_System_removeFile(threadData, _manifestFile);
          goto goto_8;
          goto tmp9_done;
        }
        }
        goto tmp9_end;
        tmp9_end: ;
      }
      goto goto_8;
      goto_8:;
      OMC_THROW_INTERNAL();
      goto tmp9_done;
      tmp9_done:;
    }
  }
  _descriptor = tmpMeta7;

  { /* match expression */
    modelica_metatype tmp20_1;
    tmp20_1 = _descriptor;
    {
      int tmp20;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp20_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta17 = omc_JSON_getOrDefault(threadData, _descriptor, _OMC_LIT56, _OMC_LIT50);
          goto tmp19_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta17 = omc_JSON_getOrDefault(threadData, _descriptor, _OMC_LIT56, _OMC_LIT50);
          goto tmp19_done;
        }
        default:
        tmp19_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta17 = _OMC_LIT50;
          goto tmp19_done;
        }
        }
        goto tmp19_end;
        tmp19_end: ;
      }
      goto goto_18;
      goto_18:;
      OMC_THROW_INTERNAL();
      goto tmp19_done;
      tmp19_done:;
    }
  }
  _digest = tmpMeta17;

  { /* match expression */
    modelica_metatype tmp24_1;
    tmp24_1 = _digest;
    {
      volatile mmc_switch_type tmp24;
      int tmp25;
      tmp24 = 0;
      for (; tmp24 < 2; tmp24++) {
        switch (MMC_SWITCH_CAST(tmp24)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp24_1,4,1) == 0) goto tmp23_end;
          
          /* Pattern matching succeeded */
          tmp21 = (OMC_BOX_FIELD(_digest, 2));
          goto tmp23_done;
        }
        case 1: {
          modelica_string tmp26;
          modelica_string tmp27;
          
          /* Pattern matching succeeded */
          tmp26 = stringAppend(_OMC_LIT57,_imageName);
          tmp27 = stringAppend(tmp26,_OMC_LIT5);
          omc_Error_addCompilerError(threadData, tmp27);

          omc_System_removeFile(threadData, _manifestFile);
          goto goto_22;
          goto tmp23_done;
        }
        }
        goto tmp23_end;
        tmp23_end: ;
      }
      goto goto_22;
      goto_22:;
      OMC_THROW_INTERNAL();
      goto tmp23_done;
      tmp23_done:;
    }
  }
  omc_string_store(&(_digest_sha256_str), tmp21);

  if((!omc_StringUtil_startsWith(threadData, _digest_sha256_str, _OMC_LIT59)))
  {
    tmp28 = stringAppend(_OMC_LIT58,_digest_sha256_str);
    tmp29 = stringAppend(tmp28,_OMC_LIT5);
    omc_Error_addCompilerError(threadData, tmp29);

    omc_System_removeFile(threadData, _manifestFile);

    OMC_THROW_INTERNAL();
  }

  tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(8));
  memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_image), 8*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[7] = mmc_mk_some(_digest_sha256_str);
  _image = tmpMeta30;

  omc_System_removeFile(threadData, _manifestFile);
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _image;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ContainerImage_parseContainerReference(threadData_t *threadData, modelica_string _containerReference)
{
  modelica_metatype _image = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _image has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_Util_stringSplitAtChar(threadData, _containerReference, _OMC_LIT9);
    {
      modelica_string _host_and_port = NULL;
      modelica_string _host = NULL;
      modelica_metatype _port = NULL;
      modelica_string _namespace = NULL;
      modelica_string _repository_and_tag = NULL;
      modelica_string _repository = NULL;
      modelica_metatype _tag = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _host_and_port has no default value.
      // _host has no default value.
      // _port has no default value.
      // _namespace has no default value.
      // _repository_and_tag has no default value.
      // _repository has no default value.
      // _tag has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          if (!listEmpty(tmpMeta11)) goto tmp3_end;
          _host_and_port = tmpMeta6;
          _namespace = tmpMeta8;
          _repository_and_tag = tmpMeta10;
          /* Pattern matching succeeded */
          _host = omc_ContainerImage_parseContainerHostPort(threadData, _host_and_port ,&_port);

          _repository = omc_ContainerImage_parseContainerRepository(threadData, _repository_and_tag ,&_tag);
          tmpMeta12 = omc_mk_box7(3, &ContainerImage_CONTAINER__IMAGE__desc, mmc_mk_some(_host), _port, mmc_mk_some(_namespace), _repository, _tag, mmc_mk_none());
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          _namespace = tmpMeta13;
          _repository_and_tag = tmpMeta15;
          /* Pattern matching succeeded */
          _repository = omc_ContainerImage_parseContainerRepository(threadData, _repository_and_tag ,&_tag);
          tmpMeta17 = omc_mk_box7(3, &ContainerImage_CONTAINER__IMAGE__desc, mmc_mk_none(), mmc_mk_none(), mmc_mk_some(_namespace), _repository, _tag, mmc_mk_none());
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta19)) goto tmp3_end;
          _repository_and_tag = tmpMeta18;
          /* Pattern matching succeeded */
          _repository = omc_ContainerImage_parseContainerRepository(threadData, _repository_and_tag ,&_tag);
          tmpMeta20 = omc_mk_box7(3, &ContainerImage_CONTAINER__IMAGE__desc, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _repository, _tag, mmc_mk_none());
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 3: {
          modelica_string tmp21;
          modelica_string tmp22;
          
          /* Pattern matching succeeded */
          tmp21 = stringAppend(_OMC_LIT60,_containerReference);
          tmp22 = stringAppend(tmp21,_OMC_LIT5);
          omc_Error_addCompilerError(threadData, tmp22);
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
  _image = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  omc_ret_ = _image;
  return omc_ret_;
}

DLLModelDirection
modelica_metatype omc_ContainerImage_parseWithArgs(threadData_t *threadData, modelica_metatype _containerReferenceWithArgs, modelica_metatype *out_arguments)
{
  modelica_metatype _image = NULL;
  modelica_metatype _arguments = NULL;
  modelica_string tmp1;
  modelica_string tmp2;
  modelica_metatype omc_ret_;
  OMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _image has no default value.
  // _arguments has no default value.
  if(listEmpty(_containerReferenceWithArgs))
  {
    tmp1 = stringAppend(_OMC_LIT61,stringDelimitList(_containerReferenceWithArgs, _OMC_LIT62));
    tmp2 = stringAppend(tmp1,_OMC_LIT41);
    omc_Error_addCompilerError(threadData, tmp2);

    OMC_THROW_INTERNAL();
  }

  _image = omc_ContainerImage_parseContainerReference(threadData, listHead(_containerReferenceWithArgs));

  _arguments = listRest(_containerReferenceWithArgs);
  _return: OMC_LABEL_UNUSED
  if (out_arguments) { *out_arguments = _arguments; }
  omc_ret_ = _image;
  return omc_ret_;
}

