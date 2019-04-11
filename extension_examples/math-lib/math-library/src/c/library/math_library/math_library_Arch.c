#include <all.h>

B math_library_Arch_initialized_ = F;

struct math_library_Math_Library_Math_Thread_i_Bridge _math_library_Arch_Math_System_i_Instance_mp_mt;
struct art_ArchitectureDescription _math_library_Arch_ad;

void math_library_Arch_init(StackFrame caller) {
  if (math_library_Arch_initialized_) return;
  math_library_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "math_library.Arch", "<init>", 0);
  DeclNewart_DispatchPropertyProtocol_Periodic(t_1);
  art_DispatchPropertyProtocol_Periodic_apply(sf, &t_1, Z_C(1000));
  DeclNewmath_library_Math_Library_Math_Thread_i_Bridge(t_0);
  math_library_Math_Library_Math_Thread_i_Bridge_apply(sf, &t_0, Z_C(0), (String) string("Math_System_i_Instance_mp_mt"), (art_DispatchPropertyProtocol) (&t_1));
  Type_assign(&_math_library_Arch_Math_System_i_Instance_mp_mt, (&t_0), sizeof(struct math_library_Math_Library_Math_Thread_i_Bridge));
  STATIC_ASSERT(1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  DeclNewMS_852149(t_3);
  t_3.size = (int8_t) 1;
  Type_assign(&t_3.value[0], math_library_Arch_Math_System_i_Instance_mp_mt(sf), sizeof(union art_Bridge));
  STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_4);
  t_4.size = (int8_t) 0;
  DeclNewart_ArchitectureDescription(t_2);
  art_ArchitectureDescription_apply(sf, &t_2, (MS_852149) (&t_3), (IS_08117A) (&t_4));
  Type_assign(&_math_library_Arch_ad, (&t_2), sizeof(struct art_ArchitectureDescription));
}

math_library_Math_Library_Math_Thread_i_Bridge math_library_Arch_Math_System_i_Instance_mp_mt(StackFrame caller) {
  math_library_Arch_init(caller);
  return (math_library_Math_Library_Math_Thread_i_Bridge) &_math_library_Arch_Math_System_i_Instance_mp_mt;
}

art_ArchitectureDescription math_library_Arch_ad(StackFrame caller) {
  math_library_Arch_init(caller);
  return (art_ArchitectureDescription) &_math_library_Arch_ad;
}