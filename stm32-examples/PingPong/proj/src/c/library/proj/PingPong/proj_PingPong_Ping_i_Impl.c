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
  this->last = Z8_C(-1);
}

Unit proj_PingPong_Ping_i_Impl_initialise_(StackFrame caller, proj_PingPong_Ping_i_Impl this) {
  DeclNewStackFrame(caller, "Ping_i_Impl.scala", "proj.PingPong.Ping_i_Impl", "initialise", 0);

  sfUpdateLoc(14);
  DeclNewproj_Base_Types_Integer_8(t_0);
  proj_Base_Types_Integer_8_apply(sf, &t_0, Z8_C(0));
  proj_PingPong_Ping_i_Bridge_Api_setping_out_(sf, proj_PingPong_Ping_i_Impl_api_(this), (proj_Base_Types_Integer_8) (&t_0));

  sfUpdateLoc(17);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 0;
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 1;
  t_2.value[0] = art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_out_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)));
  art_Art_sendOutput(sf, (IS_82ABD8) (&t_1), (IS_82ABD8) (&t_2));
}

Unit proj_PingPong_Ping_i_Impl_timeTriggered_(StackFrame caller, proj_PingPong_Ping_i_Impl this) {
  DeclNewStackFrame(caller, "Ping_i_Impl.scala", "proj.PingPong.Ping_i_Impl", "timeTriggered", 0);

  sfUpdateLoc(22);
  DeclNewOption_56AFA0(t_0);
  proj_PingPong_Ping_i_Bridge_Api_getping_inn_((Option_56AFA0) &t_0, sf, proj_PingPong_Ping_i_Impl_api_(this));
  DeclNewOption_56AFA0(t_1);
  Type_assign(&t_1, ((Option_56AFA0) &t_0), sizeof(union Option_56AFA0));
  B match_22 = F;
  if (!match_22) {
    match_22 = T;
    proj_Base_Types_Integer_8 x_23_17;
    match_22 = match_22 && Some_AA0E8F__is(sf, &t_1);
    if (match_22) {
      x_23_17 = (proj_Base_Types_Integer_8) Some_AA0E8F_value_(Some_AA0E8F__as(sf, &t_1));
    }
    if (match_22) {

      sfUpdateLoc(25);
      if (Z8__ne(proj_PingPong_Ping_i_Impl_last_(this), proj_Base_Types_Integer_8_value_(x_23_17))) {

        sfUpdateLoc(26);
        proj_PingPong_Ping_i_Impl_last_a(this,(Z8) proj_Base_Types_Integer_8_value_(x_23_17));

        sfUpdateLoc(30);
        Z8 _x = Z8__add(proj_Base_Types_Integer_8_value_(x_23_17), Z8_C(1));

        sfUpdateLoc(32);
        DeclNewproj_Base_Types_Integer_8(t_2);
        proj_Base_Types_Integer_8_apply(sf, &t_2, _x);
        proj_PingPong_Ping_i_Bridge_Api_setping_out_(sf, proj_PingPong_Ping_i_Impl_api_(this), (proj_Base_Types_Integer_8) (&t_2));
      }
    }
  }
  if (!match_22) {
    match_22 = T;
    if (match_22) {
    }
  }
  sfAssert(match_22, "Error when pattern matching.");
}