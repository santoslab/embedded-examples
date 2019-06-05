// #Sireum

package building_control.BuildingControl

import org.sireum._
import art._
import building_control._

// This file was auto-generated.  Do not edit

@record class TempControl_i_Bridge(
  val id: Art.BridgeId,
  //val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  currentTemp: Port[Base_Types.Integer_16],
  fanCmd: Port[Base_Types.Boolean]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(currentTemp,
              fanCmd),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(currentTemp),

    eventOuts = ISZ(fanCmd)
  )

  val api : TempControl_i_Bridge.Api =
    TempControl_i_Bridge.Api(
      id,
      currentTemp.id,
      fanCmd.id
    )

  val entryPoints : Bridge.EntryPoints =
    TempControl_i_Bridge.EntryPoints(
      id,

      currentTemp.id,
      fanCmd.id,

      TempControl_i_Impl(api)
    )
}

object TempControl_i_Bridge {

  @record class Api(
    id : Art.BridgeId,
    currentTemp_Id : Art.PortId,
    fanCmd_Id : Art.PortId) {

    def getcurrentTemp() : Option[Base_Types.Integer_16] = {
      val value : Option[Base_Types.Integer_16] = Art.getValue(currentTemp_Id) match {
        case Some(Base_Types.Integer_16_Payload(v)) => Some(v)
        case _ => None[Base_Types.Integer_16]()
      }
      return value
    }

    def sendfanCmd(value : Base_Types.Boolean) : Unit = {
      Art.putValue(fanCmd_Id, Base_Types.Boolean_Payload(value))
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
    TempControl_i_BridgeId : Art.BridgeId,

    currentTemp_Id : Art.PortId,
    fanCmd_Id : Art.PortId,

    component : TempControl_i_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(currentTemp_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(fanCmd_Id)

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(TempControl_i_BridgeId)
      Art.receiveInput(portIds, dataInPortIds)

      for(portId <- portIds) {

        if(portId == currentTemp_Id){
          val Some(Base_Types.Integer_16_Payload(value)) = Art.getValue(currentTemp_Id)
          component.handlecurrentTemp(value)
        }
      }

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