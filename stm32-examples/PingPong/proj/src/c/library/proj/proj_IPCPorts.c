#include <all.h>

B proj_IPCPorts_initialized_ = F;

Z _proj_IPCPorts_Ping_i_App;
Z _proj_IPCPorts_Pong_i_App;
Z _proj_IPCPorts_Main;

void proj_IPCPorts_init(StackFrame caller) {
  if (proj_IPCPorts_initialized_) return;
  proj_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "proj.IPCPorts", "<init>", 0);
  _proj_IPCPorts_Ping_i_App = Z_C(4);
  _proj_IPCPorts_Pong_i_App = Z_C(5);
  _proj_IPCPorts_Main = Z_C(6);
}

Z proj_IPCPorts_Ping_i_App(StackFrame caller) {
  proj_IPCPorts_init(caller);
  return _proj_IPCPorts_Ping_i_App;
}

Z proj_IPCPorts_Pong_i_App(StackFrame caller) {
  proj_IPCPorts_init(caller);
  return _proj_IPCPorts_Pong_i_App;
}

Z proj_IPCPorts_Main(StackFrame caller) {
  proj_IPCPorts_init(caller);
  return _proj_IPCPorts_Main;
}