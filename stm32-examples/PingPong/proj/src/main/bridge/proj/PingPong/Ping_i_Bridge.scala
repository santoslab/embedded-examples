// #Sireum

package proj.PingPong

import org.sireum._
import art._
import proj._

// This file was auto-generated.  Do not edit

@record class Ping_i_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  ping_inn: Port[Base_Types.Integer_8],
  ping_out: Port[Base_Types.Integer_8]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(ping_inn,
              ping_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(ping_inn),

    eventOuts = ISZ(ping_out)
  )

  val api : Ping_i_Bridge.Api =
    Ping_i_Bridge.Api(
      id,
      ping_inn.id,
      ping_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    Ping_i_Bridge.EntryPoints(
      id,

      ping_inn.id,
      ping_out.id,

      Ping_i_Impl(api)
    )
}

object Ping_i_Bridge {

  @record class Api(
    id : Art.BridgeId,
    ping_inn_Id : Art.PortId,
    ping_out_Id : Art.PortId) {

    def getping_inn() : Option[Base_Types.Integer_8] = {
      val value : Option[Base_Types.Integer_8] = Art.getValue(ping_inn_Id) match {
        case Some(Base_Types.Integer_8_Payload(v)) => Some(v)
        case _ => None[Base_Types.Integer_8]()
      }
      return value
    }

    def sendping_out(value : Base_Types.Integer_8) : Unit = {
      Art.putValue(ping_out_Id, Base_Types.Integer_8_Payload(value))
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
    Ping_i_BridgeId : Art.BridgeId,

    ping_inn_Id : Art.PortId,
    ping_out_Id : Art.PortId,

    component : Ping_i_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(ping_inn_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(ping_out_Id)

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(Ping_i_BridgeId)
      Art.receiveInput(portIds, dataInPortIds)

      for(portId <- portIds) {

        if(portId == ping_inn_Id){
          val Some(Base_Types.Integer_8_Payload(value)) = Art.getValue(ping_inn_Id)
          component.handleping_inn(value)
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