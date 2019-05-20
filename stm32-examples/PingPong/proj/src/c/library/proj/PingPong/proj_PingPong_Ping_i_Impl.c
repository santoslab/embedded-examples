#include <all.h>

// proj.PingPong.Ping_i_Impl

B proj_PingPong_Ping_i_Impl__eq(proj_PingPong_Ping_i_Impl this, proj_PingPong_Ping_i_Impl other) {
  if (proj_PingPong_Ping_i_Bridge_Api__ne((proj_PingPong_Ping_i_Bridge_Api) &this->api, (proj_PingPong_Ping_i_Bridge_Api) &other->api)) return F;
  return T;
}

void proj_PingPong_Ping_i_Impl_string(String result, StackFrame caller, proj_PingPong_Ping_i_Impl this) {
  DeclNewStackFrame(caller, "Ping_i_Impl.scala", "proj.PingPong.Ping_i_Impl", "string", 0);
  String_string(result, sf, string("Ping_i_Impl("));
  proj_PingPong_Ping_i_Bridge_Api_string(result, sf, (proj_PingPong_Ping_i_Bridge_Api) &this->api);
  String_string(result, sf, string(")"));
}

void proj_PingPong_Ping_i_Impl_cprint(proj_PingPong_Ping_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Ping_i_Impl("), isOut);
  proj_PingPong_Ping_i_Bridge_Api_cprint((proj_PingPong_Ping_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_PingPong_Ping_i_Impl_apply(StackFrame caller, proj_PingPong_Ping_i_Impl this, proj_PingPong_Ping_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "Ping_i_Impl.scala", "proj.PingPong.Ping_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct proj_PingPong_Ping_i_Bridge_Api));
}

Unit proj_PingPong_Ping_i_Impl_initialise_(StackFrame caller, proj_PingPong_Ping_i_Impl this) {
  DeclNewStackFrame(caller, "Ping_i_Impl.scala", "proj.PingPong.Ping_i_Impl", "initialise", 0);

  sfUpdateLoc(13);
  DeclNewproj_Base_Types_Integer_8(t_0);
  proj_Base_Types_Integer_8_apply(sf, &t_0, Z8_C(0));
  proj_PingPong_Ping_i_Bridge_Api_sendping_out_(sf, proj_PingPong_Ping_i_Impl_api_(this), (proj_Base_Types_Integer_8) (&t_0));

  sfUpdateLoc(16);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 0;
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 1;
  t_2.value[0] = art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_out_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)));
  art_Art_sendOutput(sf, (IS_82ABD8) (&t_1), (IS_82ABD8) (&t_2));
}

Unit proj_PingPong_Ping_i_Impl_handleping_inn_(StackFrame caller, proj_PingPong_Ping_i_Impl this, proj_Base_Types_Integer_8 value) {
  DeclNewStackFrame(caller, "Ping_i_Impl.scala", "proj.PingPong.Ping_i_Impl", "handleping_inn", 0);

  sfUpdateLoc(20);
  DeclNewString(t_0);
  String_string((String) &t_0, sf, string("Received "));
  proj_Base_Types_Integer_8_string((String) &t_0, sf, value);
  String_string((String) &t_0, sf, string(""));
  proj_PingPong_Ping_i_Bridge_Api_logInfo_(sf, proj_PingPong_Ping_i_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(22);
  proj_PingPong_PingExt_blinkRedLED(sf, proj_Base_Types_Integer_8_value_(value));

  sfUpdateLoc(24);
  Z8 _x = Z8__add(proj_Base_Types_Integer_8_value_(value), Z8_C(1));

  sfUpdateLoc(26);
  DeclNewproj_Base_Types_Integer_8(t_1);
  proj_Base_Types_Integer_8_apply(sf, &t_1, _x);
  proj_PingPong_Ping_i_Bridge_Api_sendping_out_(sf, proj_PingPong_Ping_i_Impl_api_(this), (proj_Base_Types_Integer_8) (&t_1));
}