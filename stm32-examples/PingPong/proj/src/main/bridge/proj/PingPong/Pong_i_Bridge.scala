// #Sireum

package proj.PingPong

import org.sireum._
import art._
import proj._

// This file was auto-generated.  Do not edit

@record class Pong_i_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  pong_inn: Port[Base_Types.Integer_8],
  pong_out: Port[Base_Types.Integer_8]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(pong_inn,
              pong_out),

    dataIns = ISZ(pong_inn),

    dataOuts = ISZ(pong_out),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val api : Pong_i_Bridge.Api =
    Pong_i_Bridge.Api(
      id,
      pong_inn.id,
      pong_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    Pong_i_Bridge.EntryPoints(
      id,

      pong_inn.id,
      pong_out.id,

      Pong_i_Impl(api)
    )
}

object Pong_i_Bridge {

  @record class Api(
    id : Art.BridgeId,
    pong_inn_Id : Art.PortId,
    pong_out_Id : Art.PortId) {


    def getpong_inn() : Option[Base_Types.Integer_8] = {
      val value : Option[Base_Types.Integer_8] = Art.getValue(pong_inn_Id) match {
        case Some(Base_Types.Integer_8_Payload(v)) => Some(v)
        case _ => None[Base_Types.Integer_8]()
      }
      return value
    }

    def setpong_out(value : Base_Types.Integer_8) : Unit = {
      Art.putValue(pong_out_Id, Base_Types.Integer_8_Payload(value))
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
    Pong_i_BridgeId : Art.BridgeId,

    pong_inn_Id : Art.PortId,
    pong_out_Id : Art.PortId,

    component : Pong_i_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(pong_inn_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(pong_out_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

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