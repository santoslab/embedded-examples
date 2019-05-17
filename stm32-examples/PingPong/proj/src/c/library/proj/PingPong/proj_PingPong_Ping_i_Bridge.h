#ifndef SIREUM_H_proj_PingPong_Ping_i_Bridge
#define SIREUM_H_proj_PingPong_Ping_i_Bridge
#include <types.h>

// proj.PingPong.Ping_i_Bridge

#define proj_PingPong_Ping_i_Bridge_id_(this) ((this)->id)
#define proj_PingPong_Ping_i_Bridge_name_(this) ((String) &(this)->name)
#define proj_PingPong_Ping_i_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define proj_PingPong_Ping_i_Bridge_ping_inn_(this) ((art_Port_B84865) &(this)->ping_inn)
#define proj_PingPong_Ping_i_Bridge_ping_out_(this) ((art_Port_B84865) &(this)->ping_out)
#define proj_PingPong_Ping_i_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define proj_PingPong_Ping_i_Bridge_api_(this) ((proj_PingPong_Ping_i_Bridge_Api) &(this)->api)
#define proj_PingPong_Ping_i_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B proj_PingPong_Ping_i_Bridge__eq(proj_PingPong_Ping_i_Bridge this, proj_PingPong_Ping_i_Bridge other);
static inline B proj_PingPong_Ping_i_Bridge__ne(proj_PingPong_Ping_i_Bridge this, proj_PingPong_Ping_i_Bridge other) {
  return !proj_PingPong_Ping_i_Bridge__eq(this, other);
};
void proj_PingPong_Ping_i_Bridge_cprint(proj_PingPong_Ping_i_Bridge this, B isOut);
void proj_PingPong_Ping_i_Bridge_string(String result, StackFrame caller, proj_PingPong_Ping_i_Bridge this);

#define proj_PingPong_Ping_i_Bridge__is(sf, this) (((proj_PingPong_Ping_i_Bridge) this)->type == Tproj_PingPong_Ping_i_Bridge)

static inline proj_PingPong_Ping_i_Bridge proj_PingPong_Ping_i_Bridge__as(StackFrame caller, void *this) {
  if (proj_PingPong_Ping_i_Bridge__is(caller, this)) return (proj_PingPong_Ping_i_Bridge) this;
  fprintf(stderr, "Invalid case from %s to proj.PingPong.Ping_i_Bridge.", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void proj_PingPong_Ping_i_Bridge_apply(StackFrame caller, proj_PingPong_Ping_i_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_B84865 ping_inn, art_Port_B84865 ping_out);

#endif