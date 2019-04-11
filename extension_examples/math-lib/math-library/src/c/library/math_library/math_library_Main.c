#include <all.h>

Z math_library_Main_main(StackFrame caller, IS_948B60 args) {
  DeclNewStackFrame(caller, "Main.scala", "math_library.Main", "main", 0);

  sfUpdateLoc(13);
  Z seed;
  if (Z__eq(IS_948B60_size(sf, args), Z_C(1))) {

    sfUpdateLoc(14);
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

  sfUpdateLoc(20);
  DeclNewNone_76463B(t_2);
  None_76463B_apply(sf, &t_2);
  math_library_PlatformNix_initialise(sf, seed, (Option_882048) (&t_2));

  sfUpdateLoc(22);
  DeclNewart_Empty(t_3);
  art_Empty_apply(sf, &t_3);
  art_Empty empty = (art_Empty) (&t_3);

  sfUpdateLoc(24);
  math_library_PlatformNix_send(sf, math_library_IPCPorts_Math_Thread_i_App(sf), math_library_IPCPorts_Main(sf), (art_DataContent) empty);

  sfUpdateLoc(26);
  math_library_PlatformNix_finalise(sf);
  return Z_C(0);
}