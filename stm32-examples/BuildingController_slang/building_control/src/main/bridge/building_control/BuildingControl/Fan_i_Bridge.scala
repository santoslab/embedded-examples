// #Sireum

package building_control.BuildingControl

import org.sireum._
import art._
import building_control._

// This file was auto-generated.  Do not edit

@record class Fan_i_Bridge(
  val id: Art.BridgeId,
  //val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  fanCmd: Port[Base_Types.Boolean]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(fanCmd),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(fanCmd),

    eventOuts = ISZ()
  )

  val api : Fan_i_Bridge.Api =
    Fan_i_Bridge.Api(
      id,
      fanCmd.id
    )

  val entryPoints : Bridge.EntryPoints =
    Fan_i_Bridge.EntryPoints(
      id,

      fanCmd.id,

      Fan_i_Impl(api)
    )
}

object Fan_i_Bridge {

  @record class Api(
    id : Art.BridgeId,
    fanCmd_Id : Art.PortId) {

    def getfanCmd() : Option[Base_Types.Boolean] = {
      val value : Option[Base_Types.Boolean] = Art.getValue(fanCmd_Id) match {
        case Some(Base_Types.Boolean_Payload(v)) => Some(v)
        case _ => None[Base_Types.Boolean]()
      }
      return value
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
    Fan_i_BridgeId : Art.BridgeId,

    fanCmd_Id : Art.PortId,

    component : Fan_i_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(fanCmd_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(Fan_i_BridgeId)
      Art.receiveInput(portIds, dataInPortIds)

      for(portId <- portIds) {

        if(portId == fanCmd_Id){
          val Some(Base_Types.Boolean_Payload(value)) = Art.getValue(fanCmd_Id)
          component.handlefanCmd(value)
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