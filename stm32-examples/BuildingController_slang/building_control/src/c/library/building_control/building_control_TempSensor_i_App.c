#include <all.h>

B building_control_TempSensor_i_App_initialized_ = F;

union art_Bridge_EntryPoints _building_control_TempSensor_i_App_entryPoints;

void building_control_TempSensor_i_App_init(StackFrame caller) {
  if (building_control_TempSensor_i_App_initialized_) return;
  building_control_TempSensor_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "<init>", 0);
  Type_assign(&_building_control_TempSensor_i_App_entryPoints, building_control_BuildingControl_TempSensor_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(sf)), sizeof(union art_Bridge_EntryPoints));
}

art_Bridge_EntryPoints building_control_TempSensor_i_App_entryPoints(StackFrame caller) {
  building_control_TempSensor_i_App_init(caller);
  return (art_Bridge_EntryPoints) &_building_control_TempSensor_i_App_entryPoints;
}

Z building_control_TempSensor_i_App_main(StackFrame caller, IS_948B60 args) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "main", 0);

  sfUpdateLoc(26);
  Z seed;
  if (Z__eq(IS_948B60_size(sf, args), Z_C(1))) {

    sfUpdateLoc(27);
    DeclNewOption_882048(t_0);
    Z_apply(&t_0, IS_948B60_at(args, Z_C(0)));
    Z n = Option_882048_get_(sf, (&t_0));
    Z t_1;
    if (Z__eq(n, Z_C(0))) {
      t_1 = Z_C(1);
    } else {
      t_1 = n;
    }
    seed = t_1;
  } else {
    seed = Z_C(1);
  }

  sfUpdateLoc(33);
  Z appPortId = building_control_IPCPorts_TempSensor_i_App(sf);

  sfUpdateLoc(34);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(sf, &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(35);
  building_control_PlatformNix_initialise(sf, seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(37);
  building_control_TempSensor_i_App_initialize(sf, seed);

  sfUpdateLoc(39);
  DeclNewTuple2_D0E3BB(t_3);
  building_control_PlatformNix_receive((Tuple2_D0E3BB) &t_3, sf, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_4 = ((Tuple2_D0E3BB) &t_3);

  sfUpdateLoc(41);
  art_Bridge_EntryPoints_initialise_(sf, building_control_TempSensor_i_App_entryPoints(sf));

  sfUpdateLoc(43);
  DeclNewTuple2_D0E3BB(t_5);
  building_control_PlatformNix_receive((Tuple2_D0E3BB) &t_5, sf, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(45);
  String_cprint(string("TempSensor_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(47);
  building_control_ArtNix_timeDispatch(sf);

  sfUpdateLoc(49);
  B terminated = F;

  sfUpdateLoc(50);
  B t_50_5 = (!terminated);
  while(t_50_5) {

    sfUpdateLoc(51);
    DeclNewOption_02FA6D(t_7);
    building_control_PlatformNix_receiveAsync((Option_02FA6D) &t_7, sf, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(52);
    if (Option_02FA6D_isEmpty_(sf, termOpt)) {

      sfUpdateLoc(53);
      building_control_TempSensor_i_App_compute(sf);
    } else {

      sfUpdateLoc(55);
      terminated = T;
    }

    sfUpdateLoc(50);
    t_50_5 = (!terminated);
  }

  sfUpdateLoc(58);
  building_control_TempSensor_i_App_exit(sf);
  return Z_C(0);
}

Unit building_control_TempSensor_i_App_atExit(StackFrame caller) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "atExit", 0);

  sfUpdateLoc(69);
  building_control_TempSensor_i_App_exit(sf);
}

Unit building_control_TempSensor_i_App_initialize(StackFrame caller, Z seed) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "initialize", 0);

  sfUpdateLoc(15);
  DeclNewNone_76463B(t_0);
  None_76463B_apply(sf, &t_0);
  building_control_PlatformNix_initialise(sf, seed, (Option_882048) (&t_0));

  sfUpdateLoc(16);
  art_Art_run(sf, (art_ArchitectureDescription) building_control_Arch_ad(sf));
}

Unit building_control_TempSensor_i_App_compute(StackFrame caller) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "compute", 0);

  sfUpdateLoc(20);
  art_Bridge_EntryPoints_compute_(sf, building_control_TempSensor_i_App_entryPoints(sf));

  sfUpdateLoc(21);
  building_control_Process_sleep(sf, Z_C(1000));
}

Unit building_control_TempSensor_i_App_exit(StackFrame caller) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "exit", 0);

  sfUpdateLoc(64);
  art_Bridge_EntryPoints_finalise_(sf, building_control_BuildingControl_TempSensor_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(sf)));

  sfUpdateLoc(65);
  building_control_PlatformNix_finalise(sf);
}