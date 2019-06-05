#include <all.h>

B building_control_IPCPorts_initialized_ = F;

Z _building_control_IPCPorts_TempSensor_i_App;
Z _building_control_IPCPorts_Fan_i_App;
Z _building_control_IPCPorts_TempControl_i_App;
Z _building_control_IPCPorts_Main;

void building_control_IPCPorts_init(StackFrame caller) {
  if (building_control_IPCPorts_initialized_) return;
  building_control_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "building_control.IPCPorts", "<init>", 0);
  _building_control_IPCPorts_TempSensor_i_App = Z_C(4);
  _building_control_IPCPorts_Fan_i_App = Z_C(5);
  _building_control_IPCPorts_TempControl_i_App = Z_C(6);
  _building_control_IPCPorts_Main = Z_C(7);
}

Z building_control_IPCPorts_TempSensor_i_App(StackFrame caller) {
  building_control_IPCPorts_init(caller);
  return _building_control_IPCPorts_TempSensor_i_App;
}

Z building_control_IPCPorts_Fan_i_App(StackFrame caller) {
  building_control_IPCPorts_init(caller);
  return _building_control_IPCPorts_Fan_i_App;
}

Z building_control_IPCPorts_TempControl_i_App(StackFrame caller) {
  building_control_IPCPorts_init(caller);
  return _building_control_IPCPorts_TempControl_i_App;
}

Z building_control_IPCPorts_Main(StackFrame caller) {
  building_control_IPCPorts_init(caller);
  return _building_control_IPCPorts_Main;
}