#include <all.h>

B math_library_ArtNix_initialized_ = F;

Z _math_library_ArtNix_maxPortIds;
struct MS_2590FE _math_library_ArtNix_data;
union Option_8E9F45 _math_library_ArtNix_noData;
struct MS_7CE7BD _math_library_ArtNix_connection;
struct MS_2590FE _math_library_ArtNix_frozen;
struct MS_2590FE _math_library_ArtNix_outgoing;
B _math_library_ArtNix_isTimeDispatch;

void math_library_ArtNix_init(StackFrame caller) {
  if (math_library_ArtNix_initialized_) return;
  math_library_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "math_library.ArtNix", "<init>", 0);
  _math_library_ArtNix_maxPortIds = Z__add(math_library_IPCPorts_Main(sf), Z_C(1));
  DeclNewNone_964667(t_0);
  None_964667_apply(sf, &t_0);
  DeclNewMS_2590FE(t_1);
  MS_2590FE_create((MS_2590FE) &t_1, sf, math_library_ArtNix_maxPortIds(sf), (Option_8E9F45) (&t_0));
  Type_assign(&_math_library_ArtNix_data, ((MS_2590FE) &t_1), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_2);
  None_964667_apply(sf, &t_2);
  Type_assign(&_math_library_ArtNix_noData, (&t_2), sizeof(struct None_964667));

  sfUpdateLoc(17);
  DeclNewMS_7CE7BD(_r);
  MS_7CE7BD r = (MS_7CE7BD) &_r;
  DeclNewTuple2_EC3B57(t_3);
  Tuple2_EC3B57_apply(sf, &t_3, math_library_IPCPorts_Main(sf), math_library_IPCPorts_Main(sf));
  DeclNewMS_7CE7BD(t_4);
  MS_7CE7BD_create((MS_7CE7BD) &t_4, sf, math_library_ArtNix_maxPortIds(sf), (Tuple2_EC3B57) (&t_3));
  Type_assign(r, ((MS_7CE7BD) &t_4), sizeof(struct MS_7CE7BD));
  Type_assign(&_math_library_ArtNix_connection, r, sizeof(struct MS_7CE7BD));
  STATIC_ASSERT(0 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  DeclNewMS_2590FE(t_5);
  t_5.size = (int8_t) 0;
  Type_assign(&_math_library_ArtNix_frozen, (&t_5), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_6);
  None_964667_apply(sf, &t_6);
  DeclNewMS_2590FE(t_7);
  MS_2590FE_create((MS_2590FE) &t_7, sf, math_library_ArtNix_maxPortIds(sf), (Option_8E9F45) (&t_6));
  Type_assign(&_math_library_ArtNix_outgoing, ((MS_2590FE) &t_7), sizeof(struct MS_2590FE));
  _math_library_ArtNix_isTimeDispatch = F;
}

Z math_library_ArtNix_maxPortIds(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return _math_library_ArtNix_maxPortIds;
}

MS_2590FE math_library_ArtNix_data(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return (MS_2590FE) &_math_library_ArtNix_data;
}

Option_8E9F45 math_library_ArtNix_noData(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return (Option_8E9F45) &_math_library_ArtNix_noData;
}

MS_7CE7BD math_library_ArtNix_connection(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return (MS_7CE7BD) &_math_library_ArtNix_connection;
}

MS_2590FE math_library_ArtNix_frozen(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return (MS_2590FE) &_math_library_ArtNix_frozen;
}

void math_library_ArtNix_frozen_a(StackFrame caller, MS_2590FE p_frozen) {
  math_library_ArtNix_init(caller);
  Type_assign(&_math_library_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE math_library_ArtNix_outgoing(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return (MS_2590FE) &_math_library_ArtNix_outgoing;
}

void math_library_ArtNix_outgoing_a(StackFrame caller, MS_2590FE p_outgoing) {
  math_library_ArtNix_init(caller);
  Type_assign(&_math_library_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B math_library_ArtNix_isTimeDispatch(StackFrame caller) {
  math_library_ArtNix_init(caller);
  return _math_library_ArtNix_isTimeDispatch;
}

void math_library_ArtNix_isTimeDispatch_a(StackFrame caller, B p_isTimeDispatch) {
  math_library_ArtNix_init(caller);
  _math_library_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit math_library_ArtNix_timeDispatch(StackFrame caller) {
  DeclNewStackFrame(caller, "ArtNix.scala", "math_library.ArtNix", "timeDispatch", 0);

  sfUpdateLoc(33);
  math_library_ArtNix_isTimeDispatch_a(sf, (B) T);
}

Unit math_library_ArtNix_run(StackFrame caller) {
  DeclNewStackFrame(caller, "ArtNix.scala", "math_library.ArtNix", "run", 0);
}

Unit math_library_ArtNix_logInfo(StackFrame caller, String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "math_library.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(90);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(91);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(92);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

Unit math_library_ArtNix_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "math_library.ArtNix", "receiveInput", 0);

  sfUpdateLoc(53);
  math_library_ArtNix_frozen_a(sf, (MS_2590FE) math_library_ArtNix_data(sf));

  sfUpdateLoc(54);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(55);
      Type_assign(MS_2590FE_at(math_library_ArtNix_data(sf), i), math_library_ArtNix_noData(sf), sizeof(union Option_8E9F45));
    }
  }
}

Unit math_library_ArtNix_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "math_library.ArtNix", "sendOutput", 0);

  sfUpdateLoc(68);
  {
    IS_82ABD8 t_3 = dataPortIds;
    int8_t t_4 = (dataPortIds)->size;
    for (int8_t t_5 = 0; t_5 < t_4; t_5++) {
      Z p = t_3->value[t_5];

      sfUpdateLoc(69);
      DeclNewOption_8E9F45(t_0);
      Type_assign(&t_0, MS_2590FE_at(math_library_ArtNix_outgoing(sf), p), sizeof(union Option_8E9F45));
      B match_69 = F;
      if (!match_69) {
        match_69 = T;
        art_DataContent d_70_19;
        match_69 = match_69 && Some_D29615__is(sf, &t_0);
        if (match_69) {
          d_70_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_0));
        }
        if (match_69) {

          sfUpdateLoc(71);
          Type_assign(MS_2590FE_at(math_library_ArtNix_outgoing(sf), p), math_library_ArtNix_noData(sf), sizeof(union Option_8E9F45));

          sfUpdateLoc(72);
          Tuple2_EC3B57 t_1;
          t_1 = (Tuple2_EC3B57) MS_7CE7BD_at(math_library_ArtNix_connection(sf), p);
          B t_2 = T;
          Z app;
          Z port;
          {
            if (t_2) {
              app = Tuple2_EC3B57_1(t_1);
              port = Tuple2_EC3B57_2(t_1);
            }
          }
          sfAssert(t_2, "Error during var pattern matching.");

          sfUpdateLoc(73);
          math_library_PlatformNix_send(sf, app, port, (art_DataContent) d_70_19);
        }
      }
      if (!match_69) {
        match_69 = T;
        if (match_69) {
        }
      }
      sfAssert(match_69, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(78);
  {
    IS_82ABD8 t_9 = eventPortIds;
    int8_t t_10 = (eventPortIds)->size;
    for (int8_t t_11 = 0; t_11 < t_10; t_11++) {
      Z p = t_9->value[t_11];

      sfUpdateLoc(79);
      DeclNewOption_8E9F45(t_6);
      Type_assign(&t_6, MS_2590FE_at(math_library_ArtNix_outgoing(sf), p), sizeof(union Option_8E9F45));
      B match_79 = F;
      if (!match_79) {
        match_79 = T;
        art_DataContent d_80_19;
        match_79 = match_79 && Some_D29615__is(sf, &t_6);
        if (match_79) {
          d_80_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(sf, &t_6));
        }
        if (match_79) {

          sfUpdateLoc(81);
          Type_assign(MS_2590FE_at(math_library_ArtNix_outgoing(sf), p), math_library_ArtNix_noData(sf), sizeof(union Option_8E9F45));

          sfUpdateLoc(82);
          Tuple2_EC3B57 t_7;
          t_7 = (Tuple2_EC3B57) MS_7CE7BD_at(math_library_ArtNix_connection(sf), p);
          B t_8 = T;
          Z app;
          Z port;
          {
            if (t_8) {
              app = Tuple2_EC3B57_1(t_7);
              port = Tuple2_EC3B57_2(t_7);
            }
          }
          sfAssert(t_8, "Error during var pattern matching.");

          sfUpdateLoc(83);
          math_library_PlatformNix_send(sf, app, port, (art_DataContent) d_80_19);
        }
      }
      if (!match_79) {
        match_79 = T;
        if (match_79) {
        }
      }
      sfAssert(match_79, "Error when pattern matching.");
    }
  }
}