#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_maxComponents;
Z _art_Art_maxPorts;
struct StaticString _art_Art_logTitle;
struct MS_94FFA9 _art_Art_bridges;
struct MS_E444B2 _art_Art_connections;
struct MS_F55A18 _art_Art_ports;

void art_Art_init(StackFrame caller) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  _art_Art_maxComponents = Z_C(2);
  _art_Art_maxPorts = Z_C(7);
  Type_assign(&_art_Art_logTitle, string("Art"), sizeof(struct StaticString));
  DeclNewMNone_2A2E1D(t_0);
  MNone_2A2E1D_apply(sf, &t_0);
  DeclNewMS_94FFA9(t_1);
  MS_94FFA9_create((MS_94FFA9) &t_1, sf, art_Art_maxComponents(sf), (MOption_EA1D29) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_94FFA9) &t_1), sizeof(struct MS_94FFA9));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  DeclNewMS_E444B2(t_3);
  MS_E444B2_create((MS_E444B2) &t_3, sf, art_Art_maxPorts(sf), (IS_82ABD8) (&t_2));
  Type_assign(&_art_Art_connections, ((MS_E444B2) &t_3), sizeof(struct MS_E444B2));
  DeclNewNone_39BC5F(t_4);
  None_39BC5F_apply(sf, &t_4);
  DeclNewMS_F55A18(t_5);
  MS_F55A18_create((MS_F55A18) &t_5, sf, art_Art_maxPorts(sf), (Option_6239DB) (&t_4));
  Type_assign(&_art_Art_ports, ((MS_F55A18) &t_5), sizeof(struct MS_F55A18));
}

Z art_Art_maxComponents(StackFrame caller) {
  art_Art_init(caller);
  return _art_Art_maxComponents;
}

Z art_Art_maxPorts(StackFrame caller) {
  art_Art_init(caller);
  return _art_Art_maxPorts;
}

String art_Art_logTitle(StackFrame caller) {
  art_Art_init(caller);
  return (String) &_art_Art_logTitle;
}

MS_94FFA9 art_Art_bridges(StackFrame caller) {
  art_Art_init(caller);
  return (MS_94FFA9) &_art_Art_bridges;
}

MS_E444B2 art_Art_connections(StackFrame caller) {
  art_Art_init(caller);
  return (MS_E444B2) &_art_Art_connections;
}

MS_F55A18 art_Art_ports(StackFrame caller) {
  art_Art_init(caller);
  return (MS_F55A18) &_art_Art_ports;
}

Unit art_Art_run(StackFrame caller, art_ArchitectureDescription system) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "run", 0);

  sfUpdateLoc(89);
  {
    MS_852149 t_0 = art_ArchitectureDescription_components_(system);
    int8_t t_1 = (art_ArchitectureDescription_components_(system))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_Bridge component = (art_Bridge) &(t_0->value[t_2]);

      sfUpdateLoc(90);
      art_Art_m_register(sf, (art_Bridge) component);                
    }
  }

  sfUpdateLoc(93);
  {
    IS_08117A t_5 = art_ArchitectureDescription_connections_(system);
    int8_t t_6 = (art_ArchitectureDescription_connections_(system))->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_UConnection connection = (art_UConnection) &(t_5->value[t_7]);

      sfUpdateLoc(94);
      DeclNewart_UPort(t_3);
      art_UConnection_from_((art_UPort) &t_3, sf, connection);
      DeclNewart_UPort(t_4);
      art_UConnection_to_((art_UPort) &t_4, sf, connection);
      art_Art_connect(sf, (art_UPort) ((art_UPort) &t_3), (art_UPort) ((art_UPort) &t_4));                
    }
  }

  sfUpdateLoc(97);
  proj_ArtNix_run(sf);
}

Unit art_Art_m_register(StackFrame caller, art_Bridge bridge) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "register", 0);

  sfUpdateLoc(31);
  DeclNewMSome_D3D128(t_0);
  MSome_D3D128_apply(sf, &t_0, (art_Bridge) bridge);
  Type_assign(MS_94FFA9_at(art_Art_bridges(sf), art_Bridge_id_(sf, bridge)), (&t_0), sizeof(union MOption_EA1D29));

  sfUpdateLoc(32);
  DeclNewart_DispatchPropertyProtocol(t_1);
  art_Bridge_dispatchProtocol_((art_DispatchPropertyProtocol) &t_1, sf, bridge);
  DeclNewart_DispatchPropertyProtocol(t_2);
  Type_assign(&t_2, ((art_DispatchPropertyProtocol) &t_1), sizeof(union art_DispatchPropertyProtocol));
  B match_32 = F;
  if (!match_32) {
    match_32 = T;
    Z period_33_46;
    match_32 = match_32 && art_DispatchPropertyProtocol_Periodic__is(sf, &t_2);
    if (match_32) {
      period_33_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(sf, &t_2));
    }
    if (match_32) {

      sfUpdateLoc(34);
      DeclNewString(t_3);
      String_string((String) &t_3, sf, string("Registered component: "));
      DeclNewString(t_4);
      art_Bridge_name_((String) &t_4, sf, bridge);
      String_string((String) &t_3, sf, ((String) &t_4));
      String_string((String) &t_3, sf, string(" (periodic: "));
      Z_string((String) &t_3, sf, period_33_46);
      String_string((String) &t_3, sf, string(")"));
      proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_3));
    }
  }
  if (!match_32) {
    match_32 = T;
    Z min_35_46;
    match_32 = match_32 && art_DispatchPropertyProtocol_Sporadic__is(sf, &t_2);
    if (match_32) {
      min_35_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(sf, &t_2));
    }
    if (match_32) {

      sfUpdateLoc(36);
      DeclNewString(t_5);
      String_string((String) &t_5, sf, string("Registered component: "));
      DeclNewString(t_6);
      art_Bridge_name_((String) &t_6, sf, bridge);
      String_string((String) &t_5, sf, ((String) &t_6));
      String_string((String) &t_5, sf, string(" (sporadic: "));
      Z_string((String) &t_5, sf, min_35_46);
      String_string((String) &t_5, sf, string(")"));
      proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_5));
    }
  }
  sfAssert(match_32, "Error when pattern matching.");

  sfUpdateLoc(38);
  {
    DeclNewart_Bridge_Ports(t_17);
    art_Bridge_ports_((art_Bridge_Ports) &t_17, sf, bridge);
    IS_820232 t_18 = art_Bridge_Ports_all_(((art_Bridge_Ports) &t_17));
    int8_t t_19 = (art_Bridge_Ports_all_(((art_Bridge_Ports) &t_17)))->size;
    for (int8_t t_20 = 0; t_20 < t_19; t_20++) {
      art_UPort port = (art_UPort) &(t_18->value[t_20]);

      sfUpdateLoc(39);
      DeclNewSome_3E197E(t_7);
      Some_3E197E_apply(sf, &t_7, (art_UPort) port);
      Type_assign(MS_F55A18_at(art_Art_ports(sf), art_UPort_id_(sf, port)), (&t_7), sizeof(union Option_6239DB));

      sfUpdateLoc(40);
      art_PortMode t_8 = art_UPort_mode_(sf, port);
      B match_40 = F;
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_DataIn);
        if (match_40) {

          sfUpdateLoc(41);
          DeclNewString(t_9);
          String_string((String) &t_9, sf, string("- Registered port: "));
          DeclNewString(t_10);
          art_UPort_name_((String) &t_10, sf, port);
          String_string((String) &t_9, sf, ((String) &t_10));
          String_string((String) &t_9, sf, string(" (data in)"));
          proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_9));
        }
      }
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_DataOut);
        if (match_40) {

          sfUpdateLoc(42);
          DeclNewString(t_11);
          String_string((String) &t_11, sf, string("- Registered port: "));
          DeclNewString(t_12);
          art_UPort_name_((String) &t_12, sf, port);
          String_string((String) &t_11, sf, ((String) &t_12));
          String_string((String) &t_11, sf, string(" (data out)"));
          proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_11));
        }
      }
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_EventIn);
        if (match_40) {

          sfUpdateLoc(43);
          DeclNewString(t_13);
          String_string((String) &t_13, sf, string("- Registered port: "));
          DeclNewString(t_14);
          art_UPort_name_((String) &t_14, sf, port);
          String_string((String) &t_13, sf, ((String) &t_14));
          String_string((String) &t_13, sf, string(" (event in)"));
          proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_13));
        }
      }
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_EventOut);
        if (match_40) {

          sfUpdateLoc(44);
          DeclNewString(t_15);
          String_string((String) &t_15, sf, string("- Registered port: "));
          DeclNewString(t_16);
          art_UPort_name_((String) &t_16, sf, port);
          String_string((String) &t_15, sf, ((String) &t_16));
          String_string((String) &t_15, sf, string(" (event out)"));
          proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_15));
        }
      }
      sfAssert(match_40, "Error when pattern matching.");                
    }
  }
}

Unit art_Art_connect(StackFrame caller, art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "connect", 0);

  sfUpdateLoc(83);
  DeclNewIS_82ABD8(t_0);
  IS_82ABD8__append((IS_82ABD8) &t_0, sf, MS_E444B2_at(art_Art_connections(sf), art_UPort_id_(sf, from)), art_UPort_id_(sf, to));
  Type_assign(MS_E444B2_at(art_Art_connections(sf), art_UPort_id_(sf, from)), ((IS_82ABD8) &t_0), sizeof(struct IS_82ABD8));

  sfUpdateLoc(84);
  DeclNewString(t_1);
  String_string((String) &t_1, sf, string("Connected ports: "));
  DeclNewString(t_2);
  art_UPort_name_((String) &t_2, sf, from);
  String_string((String) &t_1, sf, ((String) &t_2));
  String_string((String) &t_1, sf, string(" -> "));
  DeclNewString(t_3);
  art_UPort_name_((String) &t_3, sf, to);
  String_string((String) &t_1, sf, ((String) &t_3));
  String_string((String) &t_1, sf, string(""));
  proj_ArtNix_logInfo(sf, (String) art_Art_logTitle(sf), (String) ((String) &t_1));
}

Unit art_Art_sendOutput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(67);
  proj_ArtNix_sendOutput(sf, (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
}

Unit art_Art_receiveInput(StackFrame caller, IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(55);
  proj_ArtNix_receiveInput(sf, (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
}

Unit art_Art_putValue(StackFrame caller, Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(59);
  proj_ArtNix_putValue(sf, portId, (art_DataContent) data);
}

void art_Art_getValue(Option_8E9F45 result, StackFrame caller, Z portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  proj_ArtNix_getValue((Option_8E9F45) &t_0, sf, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
}