#include <all.h>

B building_control_TempControl_i_App_initialized_ = F;

union art_Bridge_EntryPoints _building_control_TempControl_i_App_entryPoints;
Z _building_control_TempControl_i_App_currentTempPortId;
union Option_882048 _building_control_TempControl_i_App_currentTempPortIdOpt;

void building_control_TempControl_i_App_init(StackFrame caller) {
  if (building_control_TempControl_i_App_initialized_) return;
  building_control_TempControl_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "<init>", 0);
  Type_assign(&_building_control_TempControl_i_App_entryPoints, building_control_BuildingControl_TempControl_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(sf)), sizeof(union art_Bridge_EntryPoints));
  _building_control_TempControl_i_App_currentTempPortId = art_Port_C61295_id_(building_control_BuildingControl_TempControl_i_Bridge_currentTemp_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(sf)));
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(sf, &t_0, building_control_TempControl_i_App_currentTempPortId(sf));
  Type_assign(&_building_control_TempControl_i_App_currentTempPortIdOpt, (&t_0), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints building_control_TempControl_i_App_entryPoints(StackFrame caller) {
  building_control_TempControl_i_App_init(caller);
  return (art_Bridge_EntryPoints) &_building_control_TempControl_i_App_entryPoints;
}

Z building_control_TempControl_i_App_currentTempPortId(StackFrame caller) {
  building_control_TempControl_i_App_init(caller);
  return _building_control_TempControl_i_App_currentTempPortId;
}

Option_882048 building_control_TempControl_i_App_currentTempPortIdOpt(StackFrame caller) {
  building_control_TempControl_i_App_init(caller);
  return (Option_882048) &_building_control_TempControl_i_App_currentTempPortIdOpt;
}

Z building_control_TempControl_i_App_main(StackFrame caller, IS_948B60 args) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "main", 0);

  sfUpdateLoc(38);
  Z seed;
  if (Z__eq(IS_948B60_size(sf, args), Z_C(1))) {

    sfUpdateLoc(39);
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

  sfUpdateLoc(45);
  Z appPortId = building_control_IPCPorts_TempControl_i_App(sf);

  sfUpdateLoc(46);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(sf, &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(47);
  building_control_PlatformNix_initialise(sf, seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(49);
  building_control_TempControl_i_App_initialize(sf, seed);

  sfUpdateLoc(51);
  DeclNewTuple2_D0E3BB(t_3);
  building_control_PlatformNix_receive((Tuple2_D0E3BB) &t_3, sf, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_4 = ((Tuple2_D0E3BB) &t_3);

  sfUpdateLoc(53);
  art_Bridge_EntryPoints_initialise_(sf, building_control_TempControl_i_App_entryPoints(sf));

  sfUpdateLoc(55);
  DeclNewTuple2_D0E3BB(t_5);
  building_control_PlatformNix_receive((Tuple2_D0E3BB) &t_5, sf, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(57);
  String_cprint(string("TempControl_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(59);
  building_control_ArtNix_eventDispatch(sf);

  sfUpdateLoc(61);
  B terminated = F;

  sfUpdateLoc(62);
  B t_62_5 = (!terminated);
  while(t_62_5) {

    sfUpdateLoc(63);
    DeclNewOption_02FA6D(t_7);
    building_control_PlatformNix_receiveAsync((Option_02FA6D) &t_7, sf, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(64);
    if (Option_02FA6D_isEmpty_(sf, termOpt)) {

      sfUpdateLoc(65);
      building_control_TempControl_i_App_compute(sf);
    } else {

      sfUpdateLoc(67);
      terminated = T;
    }

    sfUpdateLoc(62);
    t_62_5 = (!terminated);
  }

  sfUpdateLoc(70);
  building_control_TempControl_i_App_exit(sf);
  return Z_C(0);
}

Unit building_control_TempControl_i_App_atExit(StackFrame caller) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "atExit", 0);

  sfUpdateLoc(81);
  building_control_TempControl_i_App_exit(sf);
}

Unit building_control_TempControl_i_App_initialize(StackFrame caller, Z seed) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "initialize", 0);

  sfUpdateLoc(17);
  building_control_PlatformNix_initialise(sf, seed, (Option_882048) building_control_TempControl_i_App_currentTempPortIdOpt(sf));

  sfUpdateLoc(18);
  art_Art_run(sf, (art_ArchitectureDescription) building_control_Arch_ad(sf));
}

Unit building_control_TempControl_i_App_compute(StackFrame caller) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "compute", 0);

  sfUpdateLoc(22);
  B dispatch = F;

  sfUpdateLoc(23);
  DeclNewOption_02FA6D(t_0);
  building_control_PlatformNix_receiveAsync((Option_02FA6D) &t_0, sf, (Option_882048) building_control_TempControl_i_App_currentTempPortIdOpt(sf));
  DeclNewOption_02FA6D(t_1);
  Type_assign(&t_1, ((Option_02FA6D) &t_0), sizeof(union Option_02FA6D));
  B match_23 = F;
  if (!match_23) {
    match_23 = T;
    building_control_Base_Types_Integer_16_Payload v_24_21;
    match_23 = match_23 && Some_E9D1E5__is(sf, &t_1);
    if (match_23) {
      if (match_23) {
        match_23 = match_23 && building_control_Base_Types_Integer_16_Payload__is(sf, Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1))));
        if (match_23) { v_24_21 = (building_control_Base_Types_Integer_16_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1))); }
      }
    }
    if (match_23) {

      sfUpdateLoc(24);
      building_control_ArtNix_updateData(sf, building_control_TempControl_i_App_currentTempPortId(sf), (art_DataContent) v_24_21);

      sfUpdateLoc(24);
      dispatch = T;
    }
  }
  if (!match_23) {
    match_23 = T;
    art_DataContent v_25_21;
    match_23 = match_23 && Some_E9D1E5__is(sf, &t_1);
    if (match_23) {
      if (match_23) {
        v_25_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1)));
      }
    }
    if (match_23) {

      sfUpdateLoc(25);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string((String) &t_4, sf, string("Unexpected payload on port "));
      Z_string((String) &t_4, sf, building_control_TempControl_i_App_currentTempPortId(sf));
      String_string((String) &t_4, sf, string(".  Expecting something of type Base_Types.Integer_16_Payload but received "));
      art_DataContent_string((String) &t_4, sf, v_25_21);
      String_string((String) &t_4, sf, string(""));
      String_string(t_3, sf, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_23) {
    match_23 = T;
    match_23 = match_23 && None_93AA2B__is(sf, &t_1);
    if (match_23) {
    }
    if (match_23) {
    }
  }
  sfAssert(match_23, "Error when pattern matching.");

  sfUpdateLoc(28);
  if (dispatch) {

    sfUpdateLoc(29);
    art_Bridge_EntryPoints_compute_(sf, building_control_TempControl_i_App_entryPoints(sf));

    sfUpdateLoc(30);
    building_control_Process_sleep(sf, Z_C(1000));
  } else {

    sfUpdateLoc(32);
    building_control_Process_sleep(sf, Z_C(10));
  }
}

Unit building_control_TempControl_i_App_exit(StackFrame caller) {
  DeclNewStackFrame(caller, "TempControl_i_App.scala", "building_control.TempControl_i_App", "exit", 0);

  sfUpdateLoc(76);
  art_Bridge_EntryPoints_finalise_(sf, building_control_BuildingControl_TempControl_i_Bridge_entryPoints_(building_control_Arch_BuildingControlDemo_i_Instance_tcp_tempControl(sf)));

  sfUpdateLoc(77);
  building_control_PlatformNix_finalise(sf);
}