#include <all.h>

// building_control.BuildingControl.TempControl_i_Bridge.EntryPoints

B building_control_BuildingControl_TempControl_i_Bridge_EntryPoints__eq(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints other) {
  if (Z__ne(this->TempControl_i_BridgeId, other->TempControl_i_BridgeId)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (building_control_BuildingControl_TempControl_i_Impl__ne((building_control_BuildingControl_TempControl_i_Impl) &this->component, (building_control_BuildingControl_TempControl_i_Impl) &other->component)) return F;
  return T;
}

void building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_string(String result, StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "string", 0);
  String_string(result, sf, string("EntryPoints("));
  String sep = string(", ");
  Z_string(result, sf, this->TempControl_i_BridgeId);
  String_string(result, sf, sep);
  Z_string(result, sf, this->currentTemp_Id);
  String_string(result, sf, sep);
  Z_string(result, sf, this->fanCmd_Id);
  String_string(result, sf, sep);
  building_control_BuildingControl_TempControl_i_Impl_string(result, sf, (building_control_BuildingControl_TempControl_i_Impl) &this->component);
  String_string(result, sf, string(")"));
}

void building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_cprint(building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->TempControl_i_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  building_control_BuildingControl_TempControl_i_Impl_cprint((building_control_BuildingControl_TempControl_i_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_apply(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this, Z TempControl_i_BridgeId, Z currentTemp_Id, Z fanCmd_Id, building_control_BuildingControl_TempControl_i_Impl component) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "apply", 0);
  this->TempControl_i_BridgeId = TempControl_i_BridgeId;
  this->currentTemp_Id = currentTemp_Id;
  this->fanCmd_Id = fanCmd_Id;
  Type_assign(&this->component, component, sizeof(struct building_control_BuildingControl_TempControl_i_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 1;
  t_1.value[0] = building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_currentTemp_Id_(this);
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  t_3.value[0] = building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_fanCmd_Id_(this);
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_initialise_(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(101);
  building_control_BuildingControl_TempControl_i_Impl_initialise_(sf, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_component_(this));
}

Unit building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_compute_(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(105);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus((art_DispatchStatus) &t_1, sf, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_TempControl_i_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  B t_2 = T;
  IS_82ABD8 portIds;
  {
    t_2 = t_2 && art_EventTriggered__is(sf, t_0);
    if (t_2) {
      portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(sf, t_0));
    }
  }
  sfAssert(t_2, "Error during var pattern matching.");

  sfUpdateLoc(106);
  art_Art_receiveInput(sf, (IS_82ABD8) portIds, (IS_82ABD8) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(108);
  {
    IS_82ABD8 t_6 = portIds;
    int8_t t_7 = (portIds)->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      Z portId = t_6->value[t_8];

      sfUpdateLoc(110);
      if (Z__eq(portId, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_currentTemp_Id_(this))) {

        sfUpdateLoc(111);
        Option_8E9F45 t_3;
        DeclNewOption_8E9F45(t_4);
        art_Art_getValue((Option_8E9F45) &t_4, sf, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_currentTemp_Id_(this));
        t_3 = (Option_8E9F45) ((Option_8E9F45) &t_4);
        B t_5 = T;
        building_control_Base_Types_Integer_16 value;
        {
          t_5 = t_5 && Some_D29615__is(sf, t_3);
          if (t_5) {
            t_5 = t_5 && building_control_Base_Types_Integer_16_Payload__is(sf, Some_D29615_value_(Some_D29615__as(sf, t_3)));
            if (t_5) {
              value = (building_control_Base_Types_Integer_16) building_control_Base_Types_Integer_16_Payload_value_(building_control_Base_Types_Integer_16_Payload__as(sf, Some_D29615_value_(Some_D29615__as(sf, t_3))));
            }
          }
        }
        sfAssert(t_5, "Error during var pattern matching.");

        sfUpdateLoc(112);
        building_control_BuildingControl_TempControl_i_Impl_handlecurrentTemp_(sf, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_component_(this), (building_control_Base_Types_Integer_16) value);
      }
    }
  }

  sfUpdateLoc(116);
  art_Art_sendOutput(sf, (IS_82ABD8) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_finalise_(StackFrame caller, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempControl_i_Bridge.scala", "building_control.BuildingControl.TempControl_i_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(132);
  building_control_BuildingControl_TempControl_i_Impl_finalise_(sf, building_control_BuildingControl_TempControl_i_Bridge_EntryPoints_component_(this));
}