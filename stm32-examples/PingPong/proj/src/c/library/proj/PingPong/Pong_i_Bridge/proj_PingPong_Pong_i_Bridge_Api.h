#ifndef SIREUM_H_proj_PingPong_Pong_i_Bridge_Api
#define SIREUM_H_proj_PingPong_Pong_i_Bridge_Api
#include <types.h>

// proj.PingPong.Pong_i_Bridge.Api

#define proj_PingPong_Pong_i_Bridge_Api_id_(this) ((this)->id)
#define proj_PingPong_Pong_i_Bridge_Api_pong_inn_Id_(this) ((this)->pong_inn_Id)
#define proj_PingPong_Pong_i_Bridge_Api_pong_out_Id_(this) ((this)->pong_out_Id)

B proj_PingPong_Pong_i_Bridge_Api__eq(proj_PingPong_Pong_i_Bridge_Api this, proj_PingPong_Pong_i_Bridge_Api other);
static inline B proj_PingPong_Pong_i_Bridge_Api__ne(proj_PingPong_Pong_i_Bridge_Api this, proj_PingPong_Pong_i_Bridge_Api other) {
  return !proj_PingPong_Pong_i_Bridge_Api__eq(this, other);
};
void proj_PingPong_Pong_i_Bridge_Api_cprint(proj_PingPong_Pong_i_Bridge_Api this, B isOut);
void proj_PingPong_Pong_i_Bridge_Api_string(String result, StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this);

#define proj_PingPong_Pong_i_Bridge_Api__is(sf, this) (((proj_PingPong_Pong_i_Bridge_Api) this)->type == Tproj_PingPong_Pong_i_Bridge_Api)

static inline proj_PingPong_Pong_i_Bridge_Api proj_PingPong_Pong_i_Bridge_Api__as(StackFrame caller, void *this) {
  if (proj_PingPong_Pong_i_Bridge_Api__is(caller, this)) return (proj_PingPong_Pong_i_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to proj.PingPong.Pong_i_Bridge.Api.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void proj_PingPong_Pong_i_Bridge_Api_apply(StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this, Z id, Z pong_inn_Id, Z pong_out_Id);

Unit proj_PingPong_Pong_i_Bridge_Api_logInfo_(StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this, String msg);

Unit proj_PingPong_Pong_i_Bridge_Api_sendpong_out_(StackFrame caller, proj_PingPong_Pong_i_Bridge_Api this, proj_Base_Types_Integer_8 value);

#endif