#include <all.h>

// math_library.Math_Library.Math_Thread_i_Bridge

B math_library_Math_Library_Math_Thread_i_Bridge__eq(math_library_Math_Library_Math_Thread_i_Bridge this, math_library_Math_Library_Math_Thread_i_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  return T;
}

void math_library_Math_Library_Math_Thread_i_Bridge_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge", "string", 0);
  String_string(result, sf, string("Math_Thread_i_Bridge("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  String_string(result, sf, (String) &this->name);
  String_string(result, sf, sep);
  art_DispatchPropertyProtocol_string(result, sf, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string(result, sf, string(")"));
}

void math_library_Math_Library_Math_Thread_i_Bridge_cprint(math_library_Math_Library_Math_Thread_i_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Math_Thread_i_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void math_library_Math_Library_Math_Thread_i_Bridge_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 0;
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(sf, &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewmath_library_Math_Library_Math_Thread_i_Bridge_Api(t_6);
  math_library_Math_Library_Math_Thread_i_Bridge_Api_apply(sf, &t_6, math_library_Math_Library_Math_Thread_i_Bridge_id_(this));
  Type_assign(&this->api, (&t_6), sizeof(struct math_library_Math_Library_Math_Thread_i_Bridge_Api));
  DeclNewmath_library_Math_Library_Math_Thread_i_Impl(t_8);
  math_library_Math_Library_Math_Thread_i_Impl_apply(sf, &t_8, (math_library_Math_Library_Math_Thread_i_Bridge_Api) math_library_Math_Library_Math_Thread_i_Bridge_api_(this));
  DeclNewmath_library_Math_Library_Math_Thread_i_Bridge_EntryPoints(t_7);
  math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_apply(sf, &t_7, math_library_Math_Library_Math_Thread_i_Bridge_id_(this), (math_library_Math_Library_Math_Thread_i_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints));
}