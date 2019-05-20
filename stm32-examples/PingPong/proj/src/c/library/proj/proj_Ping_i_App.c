#include <all.h>

B proj_Ping_i_App_initialized_ = F;

union art_Bridge_EntryPoints _proj_Ping_i_App_entryPoints;
Z _proj_Ping_i_App_appPortId;
union Option_882048 _proj_Ping_i_App_appPortIdOpt;
Z _proj_Ping_i_App_ping_innPortId;
union Option_882048 _proj_Ping_i_App_ping_innPortIdOpt;

void proj_Ping_i_App_init(StackFrame caller) {
  if (proj_Ping_i_App_initialized_) return;
  proj_Ping_i_App_initialized_ = T;
  DeclNewStackFrame(caller, "Ping_i_App.scala", "proj.Ping_i_App", "<init>", 0);
  Type_assign(&_proj_Ping_i_App_entryPoints, proj_PingPong_Ping_i_Bridge_entryPoints_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)), sizeof(union art_Bridge_EntryPoints));
  _proj_Ping_i_App_appPortId = proj_IPCPorts_Ping_i_App(sf);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(sf, &t_0, proj_Ping_i_App_appPortId(sf));
  Type_assign(&_proj_Ping_i_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _proj_Ping_i_App_ping_innPortId = art_Port_B84865_id_(proj_PingPong_Ping_i_Bridge_ping_inn_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(sf, &t_1, proj_Ping_i_App_ping_innPortId(sf));
  Type_assign(&_proj_Ping_i_App_ping_innPortIdOpt, (&t_1), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints proj_Ping_i_App_entryPoints(StackFrame caller) {
  proj_Ping_i_App_init(caller);
  return (art_Bridge_EntryPoints) &_proj_Ping_i_App_entryPoints;
}

Z proj_Ping_i_App_appPortId(StackFrame caller) {
  proj_Ping_i_App_init(caller);
  return _proj_Ping_i_App_appPortId;
}

Option_882048 proj_Ping_i_App_appPortIdOpt(StackFrame caller) {
  proj_Ping_i_App_init(caller);
  return (Option_882048) &_proj_Ping_i_App_appPortIdOpt;
}

Z proj_Ping_i_App_ping_innPortId(StackFrame caller) {
  proj_Ping_i_App_init(caller);
  return _proj_Ping_i_App_ping_innPortId;
}

Option_882048 proj_Ping_i_App_ping_innPortIdOpt(StackFrame caller) {
  proj_Ping_i_App_init(caller);
  return (Option_882048) &_proj_Ping_i_App_ping_innPortIdOpt;
}

Z proj_Ping_i_App_main(StackFrame caller, IS_948B60 args) {
  DeclNewStackFrame(caller, "Ping_i_App.scala", "proj.Ping_i_App", "main", 0);

  sfUpdateLoc(43);
  Z seed;
  if (Z__eq(IS_948B60_size(sf, args), Z_C(1))) {

    sfUpdateLoc(44);
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

  sfUpdateLoc(50);
  proj_Ping_i_App_initialize(sf, seed);

  sfUpdateLoc(52);
  DeclNewTuple2_D0E3BB(t_2);
  proj_PlatformNix_receive((Tuple2_D0E3BB) &t_2, sf, (Option_882048) proj_Ping_i_App_appPortIdOpt(sf));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(54);
  art_Bridge_EntryPoints_initialise_(sf, proj_Ping_i_App_entryPoints(sf));

  sfUpdateLoc(56);
  DeclNewTuple2_D0E3BB(t_4);
  proj_PlatformNix_receive((Tuple2_D0E3BB) &t_4, sf, (Option_882048) proj_Ping_i_App_appPortIdOpt(sf));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(58);
  String_cprint(string("Ping_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(60);
  proj_ArtNix_eventDispatch(sf);

  sfUpdateLoc(62);
  B terminated = F;

  sfUpdateLoc(63);
  B t_63_5 = (!terminated);
  while(t_63_5) {

    sfUpdateLoc(64);
    DeclNewOption_02FA6D(t_6);
    proj_PlatformNix_receiveAsync((Option_02FA6D) &t_6, sf, (Option_882048) proj_Ping_i_App_appPortIdOpt(sf));
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(65);
    if (Option_02FA6D_isEmpty_(sf, termOpt)) {

      sfUpdateLoc(66);
      proj_Ping_i_App_compute(sf);
    } else {

      sfUpdateLoc(68);
      terminated = T;
    }

    sfUpdateLoc(63);
    t_63_5 = (!terminated);
  }

  sfUpdateLoc(71);
  proj_Ping_i_App_exit(sf);
  return Z_C(0);
}

Unit proj_Ping_i_App_atExit(StackFrame caller) {
  DeclNewStackFrame(caller, "Ping_i_App.scala", "proj.Ping_i_App", "atExit", 0);

  sfUpdateLoc(82);
  proj_Ping_i_App_exit(sf);
}

Unit proj_Ping_i_App_initialize(StackFrame caller, Z seed) {
  DeclNewStackFrame(caller, "Ping_i_App.scala", "proj.Ping_i_App", "initialize", 0);

  sfUpdateLoc(21);
  proj_PlatformNix_initialise(sf, seed, (Option_882048) proj_Ping_i_App_appPortIdOpt(sf));

  sfUpdateLoc(22);
  proj_PlatformNix_initialise(sf, seed, (Option_882048) proj_Ping_i_App_ping_innPortIdOpt(sf));

  sfUpdateLoc(23);
  art_Art_run(sf, (art_ArchitectureDescription) proj_Arch_ad(sf));
}

Unit proj_Ping_i_App_compute(StackFrame caller) {
  DeclNewStackFrame(caller, "Ping_i_App.scala", "proj.Ping_i_App", "compute", 0);

  sfUpdateLoc(27);
  B dispatch = F;

  sfUpdateLoc(28);
  DeclNewOption_02FA6D(t_0);
  proj_PlatformNix_receiveAsync((Option_02FA6D) &t_0, sf, (Option_882048) proj_Ping_i_App_ping_innPortIdOpt(sf));
  DeclNewOption_02FA6D(t_1);
  Type_assign(&t_1, ((Option_02FA6D) &t_0), sizeof(union Option_02FA6D));
  B match_28 = F;
  if (!match_28) {
    match_28 = T;
    proj_Base_Types_Integer_8_Payload v_29_21;
    match_28 = match_28 && Some_E9D1E5__is(sf, &t_1);
    if (match_28) {
      if (match_28) {
        match_28 = match_28 && proj_Base_Types_Integer_8_Payload__is(sf, Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1))));
        if (match_28) { v_29_21 = (proj_Base_Types_Integer_8_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1))); }
      }
    }
    if (match_28) {

      sfUpdateLoc(29);
      proj_ArtNix_updateData(sf, proj_Ping_i_App_ping_innPortId(sf), (art_DataContent) v_29_21);

      sfUpdateLoc(29);
      dispatch = T;
    }
  }
  if (!match_28) {
    match_28 = T;
    art_DataContent v_30_21;
    match_28 = match_28 && Some_E9D1E5__is(sf, &t_1);
    if (match_28) {
      if (match_28) {
        v_30_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(sf, &t_1)));
      }
    }
    if (match_28) {

      sfUpdateLoc(30);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string((String) &t_4, sf, string("Unexpected payload on port "));
      Z_string((String) &t_4, sf, proj_Ping_i_App_ping_innPortId(sf));
      String_string((String) &t_4, sf, string(".  Expecting something of type Base_Types.Integer_8_Payload but received "));
      art_DataContent_string((String) &t_4, sf, v_30_21);
      String_string((String) &t_4, sf, string(""));
      String_string(t_3, sf, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_28) {
    match_28 = T;
    match_28 = match_28 && None_93AA2B__is(sf, &t_1);
    if (match_28) {
    }
    if (match_28) {
    }
  }
  sfAssert(match_28, "Error when pattern matching.");

  sfUpdateLoc(33);
  if (dispatch) {

    sfUpdateLoc(34);
    art_Bridge_EntryPoints_compute_(sf, proj_Ping_i_App_entryPoints(sf));

    sfUpdateLoc(35);
    proj_Process_sleep(sf, Z_C(1000));
  } else {

    sfUpdateLoc(37);
    proj_Process_sleep(sf, Z_C(10));
  }
}

Unit proj_Ping_i_App_exit(StackFrame caller) {
  DeclNewStackFrame(caller, "Ping_i_App.scala", "proj.Ping_i_App", "exit", 0);

  sfUpdateLoc(77);
  art_Bridge_EntryPoints_finalise_(sf, proj_PingPong_Ping_i_Bridge_entryPoints_(proj_Arch_PingPongSystem_i_Instance_p_ping(sf)));

  sfUpdateLoc(78);
  proj_PlatformNix_finalise(sf);
}