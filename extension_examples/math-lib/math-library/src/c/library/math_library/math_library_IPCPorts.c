#include <all.h>

B math_library_IPCPorts_initialized_ = F;

Z _math_library_IPCPorts_Math_Thread_i_App;
Z _math_library_IPCPorts_Main;

void math_library_IPCPorts_init(StackFrame caller) {
  if (math_library_IPCPorts_initialized_) return;
  math_library_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "math_library.IPCPorts", "<init>", 0);
  _math_library_IPCPorts_Math_Thread_i_App = Z_C(0);
  _math_library_IPCPorts_Main = Z_C(1);
}

Z math_library_IPCPorts_Math_Thread_i_App(StackFrame caller) {
  math_library_IPCPorts_init(caller);
  return _math_library_IPCPorts_Math_Thread_i_App;
}

Z math_library_IPCPorts_Main(StackFrame caller) {
  math_library_IPCPorts_init(caller);
  return _math_library_IPCPorts_Main;
}