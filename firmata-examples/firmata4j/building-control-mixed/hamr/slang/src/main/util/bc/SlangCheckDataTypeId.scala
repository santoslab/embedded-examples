// #Sireum

package bc

import org.sireum._
import org.sireum.Random.Gen64

/*
GENERATED FROM

TempUnit.scala

Temperature_i.scala

SetPoint_i.scala

FanAck.scala

FanCmd.scala

Base_Types.scala

TempSensor_i_tcp_tempSensor__Containers.scala

TempControl_i_tcp_tempControl__Containers.scala

Fan_i_tcp_fan__Containers.scala

ObservationKind.scala

DataContent.scala

Aux_Types.scala

*/

@enum object _artDataContent_DataTypeId {
   "_artEmpty_Id"
   "Base_TypesBits_Payload_Id"
   "Base_TypesBoolean_Payload_Id"
   "Base_TypesCharacter_Payload_Id"
   "Base_TypesFloat_32_Payload_Id"
   "Base_TypesFloat_64_Payload_Id"
   "Base_TypesFloat_Payload_Id"
   "Base_TypesInteger_16_Payload_Id"
   "Base_TypesInteger_32_Payload_Id"
   "Base_TypesInteger_64_Payload_Id"
   "Base_TypesInteger_8_Payload_Id"
   "Base_TypesInteger_Payload_Id"
   "Base_TypesString_Payload_Id"
   "Base_TypesUnsigned_16_Payload_Id"
   "Base_TypesUnsigned_32_Payload_Id"
   "Base_TypesUnsigned_64_Payload_Id"
   "Base_TypesUnsigned_8_Payload_Id"
   "BuildingControlFanAck_Payload_Id"
   "BuildingControlFanCmd_Payload_Id"
   "BuildingControlFan_i_tcp_fan_PostState_Container_P_Id"
   "BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id"
   "BuildingControlFan_i_tcp_fan_PreState_Container_P_Id"
   "BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id"
   "BuildingControlSetPoint_i_Payload_Id"
   "BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id"
   "BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id"
   "BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id"
   "BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id"
   "BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id"
   "BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id"
   "BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id"
   "BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id"
   "BuildingControlTempUnit_Payload_Id"
   "BuildingControlTemperature_i_Payload_Id"
}

@enum object BuildingControlFan_i_tcp_fan_PreState_Container_DataTypeId {
   "BuildingControlFan_i_tcp_fan_PreState_Container_P_Id"
   "BuildingControlFan_i_tcp_fan_PreState_Container_PS_Id"
}

@enum object BuildingControlFan_i_tcp_fan_PostState_Container_DataTypeId {
   "BuildingControlFan_i_tcp_fan_PostState_Container_P_Id"
   "BuildingControlFan_i_tcp_fan_PostState_Container_PS_Id"
}

@enum object BuildingControlTempControl_i_tcp_tempControl_PreState_Container_DataTypeId {
   "BuildingControlTempControl_i_tcp_tempControl_PreState_Container_P_Id"
   "BuildingControlTempControl_i_tcp_tempControl_PreState_Container_PS_Id"
}

@enum object BuildingControlTempControl_i_tcp_tempControl_PostState_Container_DataTypeId {
   "BuildingControlTempControl_i_tcp_tempControl_PostState_Container_P_Id"
   "BuildingControlTempControl_i_tcp_tempControl_PostState_Container_PS_Id"
}

@enum object BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_DataTypeId {
   "BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_P_Id"
   "BuildingControlTempSensor_i_tcp_tempSensor_PreState_Container_PS_Id"
}

@enum object BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_DataTypeId {
   "BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_P_Id"
   "BuildingControlTempSensor_i_tcp_tempSensor_PostState_Container_PS_Id"
}

