#include <all.h>

// proj.PingPong.Ping_i_Bridge.Api

B proj_PingPong_Ping_i_Bridge_Api__eq(proj_PingPong_Ping_i_Bridge_Api this, proj_PingPong_Ping_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->ping_inn_Id, other->ping_inn_Id)) return F;
  if (Z__ne(this->ping_out_Id, other->ping_out_Id)) return F;
  return T;
}

void proj_PingPong_Ping_i_Bridge_Api_string(String result, StackFrame caller, proj_PingPong_Ping_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "Ping_i_Bridge.scala", "proj.PingPong.Ping_i_Bridge.Api", "string", 0);
  String_string(result, sf, string("Api("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->ping_inn_Id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->ping_out_Id);
  String_string(result, sf, string(")"));
}

void proj_PingPong_Ping_i_Bridge_Api_cprint(proj_PingPong_Ping_i_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->ping_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->ping_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_PingPong_Ping_i_Bridge_Api_apply(StackFrame caller, proj_PingPong_Ping_i_Bridge_Api this, Z id, Z ping_inn_Id, Z ping_out_Id) {
  DeclNewStackFrame(caller, "Ping_i_Bridge.scala", "proj.PingPong.Ping_i_Bridge.Api", "apply", 0);
  this->id = id;
  this->ping_inn_Id = ping_inn_Id;
  this->ping_out_Id = ping_out_Id;
}

Unit proj_PingPong_Ping_i_Bridge_Api_sendping_out_(StackFrame caller, proj_PingPong_Ping_i_Bridge_Api this, proj_Base_Types_Integer_8 value) {
  DeclNewStackFrame(caller, "Ping_i_Bridge.scala", "proj.PingPong.Ping_i_Bridge.Api", "sendping_out", 0);

  sfUpdateLoc(67);
  DeclNewproj_Base_Types_Integer_8_Payload(t_0);
  proj_Base_Types_Integer_8_Payload_apply(sf, &t_0, (proj_Base_Types_Integer_8) value);
  art_Art_putValue(sf, proj_PingPong_Ping_i_Bridge_Api_ping_out_Id_(this), (art_DataContent) (&t_0));
}

Unit proj_PingPong_Ping_i_Bridge_Api_logInfo_(StackFrame caller, proj_PingPong_Ping_i_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "Ping_i_Bridge.scala", "proj.PingPong.Ping_i_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(72);
  art_Art_logInfo(sf, proj_PingPong_Ping_i_Bridge_Api_id_(this), (String) msg);
}