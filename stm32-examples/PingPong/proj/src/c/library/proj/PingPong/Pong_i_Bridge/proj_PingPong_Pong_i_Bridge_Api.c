#include <all.h>

// proj.PingPong.Pong_i_Bridge.Api

B proj_PingPong_Pong_i_Bridge_Api__eq(proj_PingPong_Pong_i_Bridge_Api this, proj_PingPong_Pong_i_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->pong_inn_Id, other->pong_inn_Id)) return F;
  if (Z__ne(this->pong_out_Id, other->pong_out_Id)) return F;
  return T;
}

void proj_PingPong_Pong_i_Bridge_Api_string(String result, StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.Api", "string", 0);
  String_string(result, sf, string("Api("));
  String sep = string(", ");
  Z_string(result, sf, this->id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->pong_inn_Id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->pong_out_Id);
  String_string(result, sf, string(")"));
}

void proj_PingPong_Pong_i_Bridge_Api_cprint(proj_PingPong_Pong_i_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->pong_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->pong_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void proj_PingPong_Pong_i_Bridge_Api_apply(StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this, Z id, Z pong_inn_Id, Z pong_out_Id) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.Api", "apply", 0);
  this->id = id;
  this->pong_inn_Id = pong_inn_Id;
  this->pong_out_Id = pong_out_Id;
}

void proj_PingPong_Pong_i_Bridge_Api_getpong_inn_(Option_56AFA0 result, StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.Api", "getpong_inn", 0);

  sfUpdateLoc(60);
  DeclNewOption_56AFA0(_value);
  Option_56AFA0 value = (Option_56AFA0) &_value;
  DeclNewOption_8E9F45(t_0);
  art_Art_getValue((Option_8E9F45) &t_0, sf, proj_PingPong_Pong_i_Bridge_Api_pong_inn_Id_(this));
  DeclNewOption_8E9F45(t_1);
  Type_assign(&t_1, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  B match_60 = F;
  if (!match_60) {
    match_60 = T;
    proj_Base_Types_Integer_8 v_61_48;
    match_60 = match_60 && Some_D29615__is(sf, &t_1);
    if (match_60) {
      match_60 = match_60 && proj_Base_Types_Integer_8_Payload__is(sf, Some_D29615_value_(Some_D29615__as(sf, &t_1)));
      if (match_60) {
        v_61_48 = (proj_Base_Types_Integer_8) proj_Base_Types_Integer_8_Payload_value_(proj_Base_Types_Integer_8_Payload__as(sf, Some_D29615_value_(Some_D29615__as(sf, &t_1))));
      }
    }
    if (match_60) {
      DeclNewSome_AA0E8F(t_2);
      Some_AA0E8F_apply(sf, &t_2, (proj_Base_Types_Integer_8) v_61_48);
      Type_assign(value, (&t_2), sizeof(struct Some_AA0E8F));
    }
  }
  if (!match_60) {
    match_60 = T;
    if (match_60) {
      DeclNewNone_0A8767(t_3);
      None_0A8767_apply(sf, &t_3);
      Type_assign(value, (&t_3), sizeof(struct None_0A8767));
    }
  }
  sfAssert(match_60, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_56AFA0));
}

Unit proj_PingPong_Pong_i_Bridge_Api_setpong_out_(StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this, proj_Base_Types_Integer_8 value) {
  DeclNewStackFrame(caller, "Pong_i_Bridge.scala", "proj.PingPong.Pong_i_Bridge.Api", "setpong_out", 0);

  sfUpdateLoc(68);
  DeclNewproj_Base_Types_Integer_8_Payload(t_0);
  proj_Base_Types_Integer_8_Payload_apply(sf, &t_0, (proj_Base_Types_Integer_8) value);
  art_Art_putValue(sf, proj_PingPong_Pong_i_Bridge_Api_pong_out_Id_(this), (art_DataContent) (&t_0));
}