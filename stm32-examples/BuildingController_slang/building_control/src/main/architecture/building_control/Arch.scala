// #Sireum

package building_control

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val BuildingControlDemo_i_Instance_tempSensor : building_control.BuildingControl.TempSensor_i_Bridge = building_control.BuildingControl.TempSensor_i_Bridge(
    id = 0,
    //name = "BuildingControlDemo_i_Instance_tempSensor",
    dispatchProtocol = Periodic(period = 1000),

    currentTemp = Port[Base_Types.Integer_16] (id = 0,
      //name = "BuildingControlDemo_i_Instance_tempSensor_currentTemp",
      mode = EventOut)
  )
  val BuildingControlDemo_i_Instance_fan : building_control.BuildingControl.Fan_i_Bridge = building_control.BuildingControl.Fan_i_Bridge(
    id = 1,
    //name = "BuildingControlDemo_i_Instance_fan",
    dispatchProtocol = Sporadic(min = 1000),

    fanCmd = Port[Base_Types.Boolean] (id = 1,
      //name = "BuildingControlDemo_i_Instance_fan_fanCmd",
      mode = EventIn)
  )
  val BuildingControlDemo_i_Instance_tcp_tempControl : building_control.BuildingControl.TempControl_i_Bridge = building_control.BuildingControl.TempControl_i_Bridge(
    id = 2,
    //name = "BuildingControlDemo_i_Instance_tcp_tempControl",
    dispatchProtocol = Sporadic(min = 1000),

    currentTemp = Port[Base_Types.Integer_16] (id = 2,
      //name = "BuildingControlDemo_i_Instance_tcp_tempControl_currentTemp",
      mode = EventIn),
    fanCmd = Port[Base_Types.Boolean] (id = 3,
      //name = "BuildingControlDemo_i_Instance_tcp_tempControl_fanCmd",
      mode = EventOut)
  )

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (BuildingControlDemo_i_Instance_tempSensor, BuildingControlDemo_i_Instance_fan, BuildingControlDemo_i_Instance_tcp_tempControl),

      connections = ISZ (Connection(from = BuildingControlDemo_i_Instance_tempSensor.currentTemp, to = BuildingControlDemo_i_Instance_tcp_tempControl.currentTemp),
                         Connection(from = BuildingControlDemo_i_Instance_tcp_tempControl.fanCmd, to = BuildingControlDemo_i_Instance_fan.fanCmd))
    )
  }
}