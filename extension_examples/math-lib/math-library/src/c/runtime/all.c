#include <all.h>
#include <errno.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TTuple2_EC3B57: return Tuple2_EC3B57__eq((Tuple2_EC3B57) t1, (Tuple2_EC3B57) t2);
    case TTuple2_D0E3BB: return Tuple2_D0E3BB__eq((Tuple2_D0E3BB) t1, (Tuple2_D0E3BB) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_82ABD8: return IS_82ABD8__eq((IS_82ABD8) t1, (IS_82ABD8) t2);
    case TIS_08117A: return IS_08117A__eq((IS_08117A) t1, (IS_08117A) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TMNone_2A2E1D: return MNone_2A2E1D__eq((MNone_2A2E1D) t1, (MNone_2A2E1D) t2);
    case TMS_7CE7BD: return MS_7CE7BD__eq((MS_7CE7BD) t1, (MS_7CE7BD) t2);
    case TMS_E444B2: return MS_E444B2__eq((MS_E444B2) t1, (MS_E444B2) t2);
    case TMS_94FFA9: return MS_94FFA9__eq((MS_94FFA9) t1, (MS_94FFA9) t2);
    case TMS_2590FE: return MS_2590FE__eq((MS_2590FE) t1, (MS_2590FE) t2);
    case TMS_F55A18: return MS_F55A18__eq((MS_F55A18) t1, (MS_F55A18) t2);
    case TMS_852149: return MS_852149__eq((MS_852149) t1, (MS_852149) t2);
    case TMSome_D3D128: return MSome_D3D128__eq((MSome_D3D128) t1, (MSome_D3D128) t2);
    case TNone_76463B: return None_76463B__eq((None_76463B) t1, (None_76463B) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TNone_39BC5F: return None_39BC5F__eq((None_39BC5F) t1, (None_39BC5F) t2);
    case TSome_488F47: return Some_488F47__eq((Some_488F47) t1, (Some_488F47) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TSome_3E197E: return Some_3E197E__eq((Some_3E197E) t1, (Some_3E197E) t2);
    case Tart_ArchitectureDescription: return art_ArchitectureDescription__eq((art_ArchitectureDescription) t1, (art_ArchitectureDescription) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_DispatchPropertyProtocol_Sporadic: return art_DispatchPropertyProtocol_Sporadic__eq((art_DispatchPropertyProtocol_Sporadic) t1, (art_DispatchPropertyProtocol_Sporadic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: return math_library_Math_Library_Math_Thread_i_Bridge__eq((math_library_Math_Library_Math_Thread_i_Bridge) t1, (math_library_Math_Library_Math_Thread_i_Bridge) t2);
    case Tmath_library_Math_Library_Math_Thread_i_Bridge_Api: return math_library_Math_Library_Math_Thread_i_Bridge_Api__eq((math_library_Math_Library_Math_Thread_i_Bridge_Api) t1, (math_library_Math_Library_Math_Thread_i_Bridge_Api) t2);
    case Tmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints: return math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints__eq((math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints) t1, (math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints) t2);
    case Tmath_library_Math_Library_Math_Thread_i_Impl: return math_library_Math_Library_Math_Thread_i_Impl__eq((math_library_Math_Library_Math_Thread_i_Impl) t1, (math_library_Math_Library_Math_Thread_i_Impl) t2);
    case TString: return String__eq((String) t1, (String) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TTuple2_EC3B57: Tuple2_EC3B57_cprint((Tuple2_EC3B57) this, isOut); return;
    case TTuple2_D0E3BB: Tuple2_D0E3BB_cprint((Tuple2_D0E3BB) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_82ABD8: IS_82ABD8_cprint((IS_82ABD8) this, isOut); return;
    case TIS_08117A: IS_08117A_cprint((IS_08117A) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TMNone_2A2E1D: MNone_2A2E1D_cprint((MNone_2A2E1D) this, isOut); return;
    case TMS_7CE7BD: MS_7CE7BD_cprint((MS_7CE7BD) this, isOut); return;
    case TMS_E444B2: MS_E444B2_cprint((MS_E444B2) this, isOut); return;
    case TMS_94FFA9: MS_94FFA9_cprint((MS_94FFA9) this, isOut); return;
    case TMS_2590FE: MS_2590FE_cprint((MS_2590FE) this, isOut); return;
    case TMS_F55A18: MS_F55A18_cprint((MS_F55A18) this, isOut); return;
    case TMS_852149: MS_852149_cprint((MS_852149) this, isOut); return;
    case TMSome_D3D128: MSome_D3D128_cprint((MSome_D3D128) this, isOut); return;
    case TNone_76463B: None_76463B_cprint((None_76463B) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TNone_39BC5F: None_39BC5F_cprint((None_39BC5F) this, isOut); return;
    case TSome_488F47: Some_488F47_cprint((Some_488F47) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TSome_3E197E: Some_3E197E_cprint((Some_3E197E) this, isOut); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_cprint((art_ArchitectureDescription) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_cprint((art_DispatchPropertyProtocol_Sporadic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: math_library_Math_Library_Math_Thread_i_Bridge_cprint((math_library_Math_Library_Math_Thread_i_Bridge) this, isOut); return;
    case Tmath_library_Math_Library_Math_Thread_i_Bridge_Api: math_library_Math_Library_Math_Thread_i_Bridge_Api_cprint((math_library_Math_Library_Math_Thread_i_Bridge_Api) this, isOut); return;
    case Tmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints: math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_cprint((math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints) this, isOut); return;
    case Tmath_library_Math_Library_Math_Thread_i_Impl: math_library_Math_Library_Math_Thread_i_Impl_cprint((math_library_Math_Library_Math_Thread_i_Impl) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string(String result, StackFrame caller, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TTuple2_EC3B57: Tuple2_EC3B57_string(result, caller, (Tuple2_EC3B57) this); return;
    case TTuple2_D0E3BB: Tuple2_D0E3BB_string(result, caller, (Tuple2_D0E3BB) this); return;
    case TIS_948B60: IS_948B60_string(result, caller, (IS_948B60) this); return;
    case TIS_82ABD8: IS_82ABD8_string(result, caller, (IS_82ABD8) this); return;
    case TIS_08117A: IS_08117A_string(result, caller, (IS_08117A) this); return;
    case TIS_820232: IS_820232_string(result, caller, (IS_820232) this); return;
    case TMNone_2A2E1D: MNone_2A2E1D_string(result, caller, (MNone_2A2E1D) this); return;
    case TMS_7CE7BD: MS_7CE7BD_string(result, caller, (MS_7CE7BD) this); return;
    case TMS_E444B2: MS_E444B2_string(result, caller, (MS_E444B2) this); return;
    case TMS_94FFA9: MS_94FFA9_string(result, caller, (MS_94FFA9) this); return;
    case TMS_2590FE: MS_2590FE_string(result, caller, (MS_2590FE) this); return;
    case TMS_F55A18: MS_F55A18_string(result, caller, (MS_F55A18) this); return;
    case TMS_852149: MS_852149_string(result, caller, (MS_852149) this); return;
    case TMSome_D3D128: MSome_D3D128_string(result, caller, (MSome_D3D128) this); return;
    case TNone_76463B: None_76463B_string(result, caller, (None_76463B) this); return;
    case TNone_964667: None_964667_string(result, caller, (None_964667) this); return;
    case TNone_39BC5F: None_39BC5F_string(result, caller, (None_39BC5F) this); return;
    case TSome_488F47: Some_488F47_string(result, caller, (Some_488F47) this); return;
    case TSome_D29615: Some_D29615_string(result, caller, (Some_D29615) this); return;
    case TSome_3E197E: Some_3E197E_string(result, caller, (Some_3E197E) this); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_string(result, caller, (art_ArchitectureDescription) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string(result, caller, (art_Bridge_Ports) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string(result, caller, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_string(result, caller, (art_DispatchPropertyProtocol_Sporadic) this); return;
    case Tart_Empty: art_Empty_string(result, caller, (art_Empty) this); return;
    case Tmath_library_Math_Library_Math_Thread_i_Bridge: math_library_Math_Library_Math_Thread_i_Bridge_string(result, caller, (math_library_Math_Library_Math_Thread_i_Bridge) this); return;
    case Tmath_library_Math_Library_Math_Thread_i_Bridge_Api: math_library_Math_Library_Math_Thread_i_Bridge_Api_string(result, caller, (math_library_Math_Library_Math_Thread_i_Bridge_Api) this); return;
    case Tmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints: math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_string(result, caller, (math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints) this); return;
    case Tmath_library_Math_Library_Math_Thread_i_Impl: math_library_Math_Library_Math_Thread_i_Impl_string(result, caller, (math_library_Math_Library_Math_Thread_i_Impl) this); return;
    case TString: String_string(result, caller, (String) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Z_apply(Option_882048 result, String s) {
  char *endptr;
  errno = 0;
  long long n = strtoll(s->value, &endptr, 0);
  if (errno) {
    errno = 0;
    Type_assign(result, &((struct None_76463B) { .type = TNone_76463B }), sizeof(struct None_76463B));
    return;
  }
  if (&s->value[s->size] - endptr == 0 && INT64_MIN <= n && n <= INT64_MAX)
    Type_assign(result, &((struct Some_488F47) { .type = TSome_488F47, .value = (Z) n }), sizeof(struct Some_488F47));
  else Type_assign(result, &((struct None_76463B) { .type = TNone_76463B }), sizeof(struct None_76463B));
}