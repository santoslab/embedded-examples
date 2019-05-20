#include <all.h>

// proj.PingPong.Ping_i_Bridge

B proj_PingPong_Ping_i_Bridge__eq(proj_PingPong_Ping_i_Bridge this, proj_PingPong_Ping_i_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (art_Port_B84865__ne((art_Port_B84865) &this->ping_inn, (art_Port_B84865) &other->ping_inn)) return F;
  if (art_Port_B84865__ne((art_Port_B84865) &this->ping_out, (art_Port_B84865) &other->ping_out)) return F;
  return T;
}

void proj_PingPong_Ping_i_Bridge_string(String result, StackFrame caller, proj_PingPong_Ping_i_Bridge this) {
  DeclNewStackFrame(caller, "Ping_i_Bridge.scala", "proj.PingPong.Ping_i_Bridge", "string", 0);
  String_string(result, sf, string("Ping_i_Bridge("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  String_string(result, sf, (String) &this->name);
  String_string(result, sf, sep);
  art_DispatchPropertyProtocol_string(result, sf, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string(result, sf, sep);
  art_Port_B84865_string(result, sf, (art_Port_B84865) &this->ping_inn);
  String_string(result, sf, sep);
  art_Port_B84865_string(result, sf, (art_Port_B84865) &this->ping_out);
  String_string(result, sf, string(")"));
}

void proj_PingPong_Ping_i_Bridge_cprint(proj_PingPong_Ping_i_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Ping_i_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  art_Port_B84865_cprint((art_Port_B84865) &this->ping_inn, isOut);
  String_cprint(sep, isOut);
  art_Port_B84865_cprint((art_Port_B84865) &this->ping_out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_PingPong_Ping_i_Bridge_apply(StackFrame caller, proj_PingPong_Ping_i_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_B84865 ping_inn, art_Port_B84865 ping_out) {
  DeclNewStackFrame(caller, "Ping_i_Bridge.scala", "proj.PingPong.Ping_i_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->ping_inn, ping_inn, sizeof(struct art_Port_B84865));
  Type_assign(&this->ping_out, ping_out, sizeof(struct art_Port_B84865));
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 2;
  Type_assign(&t_1.value[0], proj_PingPong_Ping_i_Bridge_ping_inn_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[1], proj_PingPong_Ping_i_Bridge_ping_out_(this), sizeof(union art_UPort));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 0;
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 1;
  Type_assign(&t_4.value[0], proj_PingPong_Ping_i_Bridge_ping_inn_(this), sizeof(union art_UPort));
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 1;
  Type_assign(&t_5.value[0], proj_PingPong_Ping_i_Bridge_ping_out_(this), sizeof(union art_UPort));
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(sf, &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewproj_PingPong_Ping_i_Bridge_Api(t_6);
  proj_PingPong_Ping_i_Bridge_Api_apply(sf, &t_6, proj_PingPong_Ping_i_Bridge_id_(this), art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_inn_(this)), art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_out_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct proj_PingPong_Ping_i_Bridge_Api));
  DeclNewproj_PingPong_Ping_i_Impl(t_8);
  proj_PingPong_Ping_i_Impl_apply(sf, &t_8, (proj_PingPong_Ping_i_Bridge_Api) proj_PingPong_Ping_i_Bridge_api_(this));
  DeclNewproj_PingPong_Ping_i_Bridge_EntryPoints(t_7);
  proj_PingPong_Ping_i_Bridge_EntryPoints_apply(sf, &t_7, proj_PingPong_Ping_i_Bridge_id_(this), art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_inn_(this)), art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_out_(this)), (proj_PingPong_Ping_i_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct proj_PingPong_Ping_i_Bridge_EntryPoints));
}