#ifndef SIREUM_H_proj_PingPong_Ping_i_Bridge_EntryPoints
#define SIREUM_H_proj_PingPong_Ping_i_Bridge_EntryPoints
#include <types.h>

// proj.PingPong.Ping_i_Bridge.EntryPoints

#define proj_PingPong_Ping_i_Bridge_EntryPoints_Ping_i_BridgeId_(this) ((this)->Ping_i_BridgeId)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_ping_inn_Id_(this) ((this)->ping_inn_Id)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_ping_out_Id_(this) ((this)->ping_out_Id)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_component_(this) ((proj_PingPong_Ping_i_Impl) &(this)->component)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define proj_PingPong_Ping_i_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B proj_PingPong_Ping_i_Bridge_EntryPoints__eq(proj_PingPong_Ping_i_Bridge_EntryPoints this, proj_PingPong_Ping_i_Bridge_EntryPoints other);
static inline B proj_PingPong_Ping_i_Bridge_EntryPoints__ne(proj_PingPong_Ping_i_Bridge_EntryPoints this, proj_PingPong_Ping_i_Bridge_EntryPoints other) {
  return !proj_PingPong_Ping_i_Bridge_EntryPoints__eq(this, other);
};
void proj_PingPong_Ping_i_Bridge_EntryPoints_cprint(proj_PingPong_Ping_i_Bridge_EntryPoints this, B isOut);
void proj_PingPong_Ping_i_Bridge_EntryPoints_string(String result, StackFrame caller, proj_PingPong_Ping_i_Bridge_EntryPoints this);

#define proj_PingPong_Ping_i_Bridge_EntryPoints__is(sf, this) (((proj_PingPong_Ping_i_Bridge_EntryPoints) this)->type == Tproj_PingPong_Ping_i_Bridge_EntryPoints)

static inline proj_PingPong_Ping_i_Bridge_EntryPoints proj_PingPong_Ping_i_Bridge_EntryPoints__as(StackFrame caller, void *this) {
  if (proj_PingPong_Ping_i_Bridge_EntryPoints__is(caller, this)) return (proj_PingPong_Ping_i_Bridge_EntryPoints) this;
  fprintf(stderr, "Invalid case from %s to proj.PingPong.Ping_i_Bridge.EntryPoints.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void proj_PingPong_Ping_i_Bridge_EntryPoints_apply(StackFrame caller, proj_PingPong_Ping_i_Bridge_EntryPoints this, Z Ping_i_BridgeId, Z ping_inn_Id, Z ping_out_Id, proj_PingPong_Ping_i_Impl component);

Unit proj_PingPong_Ping_i_Bridge_EntryPoints_initialise_(StackFrame caller, proj_PingPong_Ping_i_Bridge_EntryPoints this);

Unit proj_PingPong_Ping_i_Bridge_EntryPoints_compute_(StackFrame caller, proj_PingPong_Ping_i_Bridge_EntryPoints this);

Unit proj_PingPong_Ping_i_Bridge_EntryPoints_finalise_(StackFrame caller, proj_PingPong_Ping_i_Bridge_EntryPoints this);

#endif