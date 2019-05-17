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
  this->last = Z8_C(-1);
}

Unit proj_PingPong_Pong_i_Impl_timeTriggered_(StackFrame caller, proj_PingPong_Pong_i_Impl this) {
  DeclNewStackFrame(caller, "Pong_i_Impl.scala", "proj.PingPong.Pong_i_Impl", "timeTriggered", 0);

  sfUpdateLoc(15);
  DeclNewOption_56AFA0(t_0);
  proj_PingPong_Pong_i_Bridge_Api_getpong_inn_((Option_56AFA0) &t_0, sf, proj_PingPong_Pong_i_Impl_api_(this));
  DeclNewOption_56AFA0(t_1);
  Type_assign(&t_1, ((Option_56AFA0) &t_0), sizeof(union Option_56AFA0));
  B match_15 = F;
  if (!match_15) {
    match_15 = T;
    proj_Base_Types_Integer_8 x_16_17;
    match_15 = match_15 && Some_AA0E8F__is(sf, &t_1);
    if (match_15) {
      x_16_17 = (proj_Base_Types_Integer_8) Some_AA0E8F_value_(Some_AA0E8F__as(sf, &t_1));
    }
    if (match_15) {

      sfUpdateLoc(18);
      if (Z8__ne(proj_PingPong_Pong_i_Impl_last_(this), proj_Base_Types_Integer_8_value_(x_16_17))) {

        sfUpdateLoc(19);
        proj_PingPong_Pong_i_Impl_last_a(this,(Z8) proj_Base_Types_Integer_8_value_(x_16_17));

        sfUpdateLoc(23);
        Z8 _x = Z8__add(proj_Base_Types_Integer_8_value_(x_16_17), Z8_C(1));

        sfUpdateLoc(25);
        DeclNewproj_Base_Types_Integer_8(t_2);
        proj_Base_Types_Integer_8_apply(sf, &t_2, _x);
        proj_PingPong_Pong_i_Bridge_Api_setpong_out_(sf, proj_PingPong_Pong_i_Impl_api_(this), (proj_Base_Types_Integer_8) (&t_2));
      }
    }
  }
  if (!match_15) {
    match_15 = T;
    if (match_15) {
    }
  }
  sfAssert(match_15, "Error when pattern matching.");
}