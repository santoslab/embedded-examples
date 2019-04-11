#include <all.h>

// math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints

B math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints__eq(math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints other) {
  if (Z__ne(this->Math_Thread_i_BridgeId, other->Math_Thread_i_BridgeId)) return F;
  if (math_library_Math_Library_Math_Thread_i_Impl__ne((math_library_Math_Library_Math_Thread_i_Impl) &this->component, (math_library_Math_Library_Math_Thread_i_Impl) &other->component)) return F;
  return T;
}

void math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_string(String result, StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints", "string", 0);
  String_string(result, sf, string("EntryPoints("));
  String sep = string(", ");
  Z_string(result, sf, this->Math_Thread_i_BridgeId);
  String_string(result, sf, sep);
  math_library_Math_Library_Math_Thread_i_Impl_string(result, sf, (math_library_Math_Library_Math_Thread_i_Impl) &this->component);
  String_string(result, sf, string(")"));
}

void math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_cprint(math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->Math_Thread_i_BridgeId, isOut);
  String_cprint(sep, isOut);
  math_library_Math_Library_Math_Thread_i_Impl_cprint((math_library_Math_Library_Math_Thread_i_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_apply(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this, Z Math_Thread_i_BridgeId, math_library_Math_Library_Math_Thread_i_Impl component) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints", "apply", 0);
  this->Math_Thread_i_BridgeId = Math_Thread_i_BridgeId;
  Type_assign(&this->component, component, sizeof(struct math_library_Math_Library_Math_Thread_i_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 0;
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 0;
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_initialise_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(76);
  math_library_Math_Library_Math_Thread_i_Impl_initialise_(sf, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_component_(this));
}

Unit math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_compute_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(80);
  art_Art_receiveInput(sf, (IS_82ABD8) math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(81);
  math_library_Math_Library_Math_Thread_i_Impl_timeTriggered_(sf, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(82);
  art_Art_sendOutput(sf, (IS_82ABD8) math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_finalise_(StackFrame caller, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Math_Thread_i_Bridge.scala", "math_library.Math_Library.Math_Thread_i_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(98);
  math_library_Math_Library_Math_Thread_i_Impl_finalise_(sf, math_library_Math_Library_Math_Thread_i_Bridge_EntryPoints_component_(this));
}