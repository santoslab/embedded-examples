#include <all.h>

Z math_library_Math_Thread_i_App_main(StackFrame caller, IS_948B60 args) {
  DeclNewStackFrame(caller, "Math_Thread_i_App.scala", "math_library.Math_Thread_i_App", "main", 0);

  sfUpdateLoc(14);
  Z seed;
  if (Z__eq(IS_948B60_size(sf, args), Z_C(1))) {

    sfUpdateLoc(15);
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

  sfUpdateLoc(21);
  DeclNewart_Bridge_EntryPoints(_entryPoints);
  art_Bridge_EntryPoints entryPoints = (art_Bridge_EntryPoints) &_entryPoints;
  Type_assign(entryPoints, math_library_Math_Library_Math_Thread_i_Bridge_entryPoints_(math_library_Arch_Math_System_i_Instance_mp_mt(sf)), sizeof(union art_Bridge_EntryPoints));

  sfUpdateLoc(23);
  Z appPortId = math_library_IPCPorts_Math_Thread_i_App(sf);

  sfUpdateLoc(24);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(sf, &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(25);
  math_library_PlatformNix_initialise(sf, seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(27);
  art_Art_run(sf, (art_ArchitectureDescription) math_library_Arch_ad(sf));

  sfUpdateLoc(29);
  art_Bridge_EntryPoints_initialise_(sf, entryPoints);

  sfUpdateLoc(31);
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(sf, &t_3, math_library_IPCPorts_Main(sf));
  DeclNewTuple2_D0E3BB(t_4);
  math_library_PlatformNix_receive((Tuple2_D0E3BB) &t_4, sf, (Option_882048) (&t_3));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(33);
  String_cprint(string("Math_Thread_i_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(35);
  math_library_ArtNix_timeDispatch(sf);

  sfUpdateLoc(37);
  B t_37_5 = T;
  while(t_37_5) {

    sfUpdateLoc(38);
    math_library_Process_sleep(sf, Z_C(1000));

    sfUpdateLoc(40);
    art_Bridge_EntryPoints_compute_(sf, entryPoints);

    sfUpdateLoc(37);
    t_37_5 = T;
  }
  return Z_C(0);
}

Unit math_library_Math_Thread_i_App_atExit(StackFrame caller) {
  DeclNewStackFrame(caller, "Math_Thread_i_App.scala", "math_library.Math_Thread_i_App", "atExit", 0);

  sfUpdateLoc(52);
  math_library_Math_Thread_i_App_exit(sf);
}

Unit math_library_Math_Thread_i_App_exit(StackFrame caller) {
  DeclNewStackFrame(caller, "Math_Thread_i_App.scala", "math_library.Math_Thread_i_App", "exit", 0);

  sfUpdateLoc(47);
  art_Bridge_EntryPoints_finalise_(sf, math_library_Math_Library_Math_Thread_i_Bridge_entryPoints_(math_library_Arch_Math_System_i_Instance_mp_mt(sf)));

  sfUpdateLoc(48);
  math_library_PlatformNix_finalise(sf);
}