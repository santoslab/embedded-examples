#include <all.h>

B building_control_TempSensor_i_App_initialized_ = F;

union art_Bridge_EntryPoints _building_control_TempSensor_i_App_entryPoints;

void building_control_TempSensor_i_App_init(STACK_FRAME_ONLY) {
  if (building_control_TempSensor_i_App_initialized_) return;
  building_control_TempSensor_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "<init>", 0);
  Type_assign(&_building_control_TempSensor_i_App_entryPoints, building_control_BuildingControl_TempSensor_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
}

art_Bridge_EntryPoints building_control_TempSensor_i_App_entryPoints(STACK_FRAME_ONLY) {
  building_control_TempSensor_i_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_building_control_TempSensor_i_App_entryPoints;
}

Z building_control_TempSensor_i_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "main", 0);

  sfUpdateLoc(26);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(27);
    DeclNewOption_882048(t_0);
    Z_apply(&t_0, IS_948B60_at(args, Z_C(0)));
    Z n = Option_882048_get_(SF (&t_0));
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
  Z appPortId = building_control_IPCPorts_TempSensor_i_App(SF_LAST);

  sfUpdateLoc(34);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(35);
  building_control_PlatformNix_initialise(SF seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(37);
  building_control_TempSensor_i_App_initialize(SF seed);

  sfUpdateLoc(39);
  DeclNewTuple2_D0E3BB(t_3);
  building_control_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_3, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_4 = ((Tuple2_D0E3BB) &t_3);

  sfUpdateLoc(41);
  art_Bridge_EntryPoints_initialise_(SF building_control_TempSensor_i_App_entryPoints(SF_LAST));

  sfUpdateLoc(43);
  DeclNewTuple2_D0E3BB(t_5);
  building_control_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_5, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(45);
  String_cprint(string("TempSensor_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(47);
  building_control_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(49);
  B terminated = F;

  sfUpdateLoc(50);
  B t_50_5 = (!terminated);
  while(t_50_5) {

    sfUpdateLoc(51);
    DeclNewOption_02FA6D(t_7);
    building_control_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_7, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(52);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(53);
      building_control_TempSensor_i_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(55);
      terminated = T;
    }

    sfUpdateLoc(50);
    t_50_5 = (!terminated);
  }

  sfUpdateLoc(58);
  building_control_TempSensor_i_App_exit(SF_LAST);
  return Z_C(0);
}

Unit building_control_TempSensor_i_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "atExit", 0);

  sfUpdateLoc(69);
  building_control_TempSensor_i_App_exit(SF_LAST);
}

Unit building_control_TempSensor_i_App_initialize(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "initialize", 0);

  sfUpdateLoc(15);
  DeclNewNone_76463B(t_0);
  None_76463B_apply(SF &t_0);
  building_control_PlatformNix_initialise(SF seed, (Option_882048) (&t_0));

  sfUpdateLoc(16);
  art_Art_run(SF (art_ArchitectureDescription) building_control_Arch_ad(SF_LAST));
}

Unit building_control_TempSensor_i_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "compute", 0);

  sfUpdateLoc(20);
  art_Bridge_EntryPoints_compute_(SF building_control_TempSensor_i_App_entryPoints(SF_LAST));

  sfUpdateLoc(21);
  building_control_Process_sleep(SF Z_C(1000));
}

Unit building_control_TempSensor_i_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_App.scala", "building_control.TempSensor_i_App", "exit", 0);

  sfUpdateLoc(64);
  art_Bridge_EntryPoints_finalise_(SF building_control_BuildingControl_TempSensor_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tempSensor(SF_LAST)));

  sfUpdateLoc(65);
  building_control_PlatformNix_finalise(SF_LAST);
}