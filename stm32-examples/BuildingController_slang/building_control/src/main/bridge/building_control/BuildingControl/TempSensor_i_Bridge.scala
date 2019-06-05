// #Sireum

package building_control.BuildingControl

import org.sireum._
import art._
import building_control._

// This file was auto-generated.  Do not edit

@record class TempSensor_i_Bridge(
  val id: Art.BridgeId,
  //val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  currentTemp: Port[Base_Types.Integer_16]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(currentTemp),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ(currentTemp)
  )

  val api : TempSensor_i_Bridge.Api =
    TempSensor_i_Bridge.Api(
      id,
      currentTemp.id
    )

  val entryPoints : Bridge.EntryPoints =
    TempSensor_i_Bridge.EntryPoints(
      id,

      currentTemp.id,

      TempSensor_i_Impl(api)
    )
}

object TempSensor_i_Bridge {

  @record class Api(
    id : Art.BridgeId,
    currentTemp_Id : Art.PortId) {

    def sendcurrentTemp(value : Base_Types.Integer_16) : Unit = {
      Art.putValue(currentTemp_Id, Base_Types.Integer_16_Payload(value))
    }


    def logInfo(msg: String): Unit = {
      Art.logInfo(id, msg)
    }

    def logDebug(msg: String): Unit = {
      Art.logDebug(id, msg)
    }

    def logError(msg: String): Unit = {
      Art.logError(id, msg)
    }
  }

  @record class EntryPoints(
    TempSensor_i_BridgeId : Art.BridgeId,

    currentTemp_Id : Art.PortId,

    component : TempSensor_i_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(currentTemp_Id)

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      component.activate()
    }

    def deactivate(): Unit = {
      component.deactivate()
    }

    def recover(): Unit = {
      component.recover()
    }

    def finalise(): Unit = {
      component.finalise()
    }
  }
}