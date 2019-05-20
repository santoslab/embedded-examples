#ifndef SIREUM_H_proj_PingPong_Pong_i_Impl
#define SIREUM_H_proj_PingPong_Pong_i_Impl
#include <types.h>

// proj.PingPong.Pong_i_Impl

#define proj_PingPong_Pong_i_Impl_api_(this) ((proj_PingPong_Pong_i_Bridge_Api) &(this)->api)

B proj_PingPong_Pong_i_Impl__eq(proj_PingPong_Pong_i_Impl this, proj_PingPong_Pong_i_Impl other);
static inline B proj_PingPong_Pong_i_Impl__ne(proj_PingPong_Pong_i_Impl this, proj_PingPong_Pong_i_Impl other) {
  return !proj_PingPong_Pong_i_Impl__eq(this, other);
};
void proj_PingPong_Pong_i_Impl_cprint(proj_PingPong_Pong_i_Impl this, B isOut);
void proj_PingPong_Pong_i_Impl_string(String result, StackFrame caller, proj_PingPong_Pong_i_Impl this);

#define proj_PingPong_Pong_i_Impl__is(sf, this) (((proj_PingPong_Pong_i_Impl) this)->type == Tproj_PingPong_Pong_i_Impl)

static inline proj_PingPong_Pong_i_Impl proj_PingPong_Pong_i_Impl__as(StackFrame caller, void *this) {
  if (proj_PingPong_Pong_i_Impl__is(caller, this)) return (proj_PingPong_Pong_i_Impl) this;
  fprintf(stderr, "Invalid case from %s to proj.PingPong.Pong_i_Impl.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void proj_PingPong_Pong_i_Impl_apply(StackFrame caller, proj_PingPong_Pong_i_Impl this, proj_PingPong_Pong_i_Bridge_Api api);

Unit proj_PingPong_Pong_i_Impl_handlepong_inn_(StackFrame caller, proj_PingPong_Pong_i_Impl this, proj_Base_Types_Integer_8 value);

#endif