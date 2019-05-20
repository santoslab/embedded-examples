#include <all.h>

// proj.PingPong.Pong_i_Impl

B proj_PingPong_Pong_i_Impl__eq(proj_PingPong_Pong_i_Impl this, proj_PingPong_Pong_i_Impl other) {
  if (proj_PingPong_Pong_i_Bridge_Api__ne((proj_PingPong_Pong_i_Bridge_Api) &this->api, (proj_PingPong_Pong_i_Bridge_Api) &other->api)) return F;
  return T;
}

void proj_PingPong_Pong_i_Impl_string(String result, StackFrame caller, proj_PingPong_Pong_i_Impl this) {
  DeclNewStackFrame(caller, "Pong_i_Impl.scala", "proj.PingPong.Pong_i_Impl", "string", 0);
  String_string(result, sf, string("Pong_i_Impl("));
  proj_PingPong_Pong_i_Bridge_Api_string(result, sf, (proj_PingPong_Pong_i_Bridge_Api) &this->api);
  String_string(result, sf, string(")"));
}

void proj_PingPong_Pong_i_Impl_cprint(proj_PingPong_Pong_i_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Pong_i_Impl("), isOut);
  proj_PingPong_Pong_i_Bridge_Api_cprint((proj_PingPong_Pong_i_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_PingPong_Pong_i_Impl_apply(StackFrame caller, proj_PingPong_Pong_i_Impl this, proj_PingPong_Pong_i_Bridge_Api api) {
  DeclNewStackFrame(caller, "Pong_i_Impl.scala", "proj.PingPong.Pong_i_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct proj_PingPong_Pong_i_Bridge_Api));
}

Unit proj_PingPong_Pong_i_Impl_handlepong_inn_(StackFrame caller, proj_PingPong_Pong_i_Impl this, proj_Base_Types_Integer_8 value) {
  DeclNewStackFrame(caller, "Pong_i_Impl.scala", "proj.PingPong.Pong_i_Impl", "handlepong_inn", 0);

  sfUpdateLoc(13);
  DeclNewString(t_0);
  String_string((String) &t_0, sf, string("Received "));
  proj_Base_Types_Integer_8_string((String) &t_0, sf, value);
  String_string((String) &t_0, sf, string(""));
  proj_PingPong_Pong_i_Bridge_Api_logInfo_(sf, proj_PingPong_Pong_i_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(15);
  proj_PingPong_PongExt_blinkBlueLED(sf, proj_Base_Types_Integer_8_value_(value));

  sfUpdateLoc(17);
  Z8 _x = Z8__add(proj_Base_Types_Integer_8_value_(value), Z8_C(1));

  sfUpdateLoc(19);
  DeclNewproj_Base_Types_Integer_8(t_1);
  proj_Base_Types_Integer_8_apply(sf, &t_1, _x);
  proj_PingPong_Pong_i_Bridge_Api_sendpong_out_(sf, proj_PingPong_Pong_i_Impl_api_(this), (proj_Base_Types_Integer_8) (&t_1));
}