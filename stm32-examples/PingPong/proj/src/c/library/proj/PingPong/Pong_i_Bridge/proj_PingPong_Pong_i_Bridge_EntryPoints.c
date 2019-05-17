#include <all.h>

// proj.PingPong.Pong_i_Bridge.EntryPoints

B proj_PingPong_Pong_i_Bridge_EntryPoints__eq(proj_PingPong_Pong_i_Bridge_EntryPoints this, proj_PingPong_Pong_i_Bridge_EntryPoints other) {
  if (Z__ne(this->Pong_i_BridgeId, other->Pong_i_BridgeId)) return F;
  if (Z__ne(this->pong_inn_Id, other->pong_inn_Id)) return F;
  if (Z__ne(this->pong_out_Id, other->pong_out_Id)) return F;
  if (proj_PingPong_Pong_i_Impl__ne((proj_PingPong_Pong_i_Impl) &this->component, (proj_PingPong_Pong_i_Impl) &other->component)) return F;
  return T;
}

void proj_PingPong_Pong_i_Bridge_EntryPoints_string(String result, StackFrame caller, proj_PingPong_Pong_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.EntryPoints", "string", 0);
  String_string(result, sf, string("EntryPoints("));
  String sep = string(", ");
  Z_string(result, sf, this->Pong_i_BridgeId);
  String_string(result, sf, sep);
  Z_string(result, sf, this->pong_inn_Id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->pong_out_Id);
  String_string(result, sf, sep);
  proj_PingPong_Pong_i_Impl_string(result, sf, (proj_PingPong_Pong_i_Impl) &this->component);
  String_string(result, sf, string(")"));
}

void proj_PingPong_Pong_i_Bridge_EntryPoints_cprint(proj_PingPong_Pong_i_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->Pong_i_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->pong_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->pong_out_Id, isOut);
  String_cprint(sep, isOut);
  proj_PingPong_Pong_i_Impl_cprint((proj_PingPong_Pong_i_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_PingPong_Pong_i_Bridge_EntryPoints_apply(StackFrame caller, proj_PingPong_Pong_i_Bridge_EntryPoints this, Z Pong_i_BridgeId, Z pong_inn_Id, Z pong_out_Id, proj_PingPong_Pong_i_Impl component) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.EntryPoints", "apply", 0);
  this->Pong_i_BridgeId = Pong_i_BridgeId;
  this->pong_inn_Id = pong_inn_Id;
  this->pong_out_Id = pong_out_Id;
  Type_assign(&this->component, component, sizeof(struct proj_PingPong_Pong_i_Impl));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 1;
  t_0.value[0] = proj_PingPong_Pong_i_Bridge_EntryPoints_pong_inn_Id_(this);
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 0;
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 1;
  t_2.value[0] = proj_PingPong_Pong_i_Bridge_EntryPoints_pong_out_Id_(this);
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 0;
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit proj_PingPong_Pong_i_Bridge_EntryPoints_initialise_(StackFrame caller, proj_PingPong_Pong_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(101);
  proj_PingPong_Pong_i_Impl_initialise_(sf, proj_PingPong_Pong_i_Bridge_EntryPoints_component_(this));
}

Unit proj_PingPong_Pong_i_Bridge_EntryPoints_compute_(StackFrame caller, proj_PingPong_Pong_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(105);
  art_Art_receiveInput(sf, (IS_82ABD8) proj_PingPong_Pong_i_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) proj_PingPong_Pong_i_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(106);
  proj_PingPong_Pong_i_Impl_timeTriggered_(sf, proj_PingPong_Pong_i_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(107);
  art_Art_sendOutput(sf, (IS_82ABD8) proj_PingPong_Pong_i_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) proj_PingPong_Pong_i_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit proj_PingPong_Pong_i_Bridge_EntryPoints_finalise_(StackFrame caller, proj_PingPong_Pong_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(123);
  proj_PingPong_Pong_i_Impl_finalise_(sf, proj_PingPong_Pong_i_Bridge_EntryPoints_component_(this));
}