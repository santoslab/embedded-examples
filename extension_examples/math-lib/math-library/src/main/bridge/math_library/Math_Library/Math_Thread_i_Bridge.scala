// #Sireum

package math_library.Math_Library

import org.sireum._
import art._
import math_library._

// This file was auto-generated.  Do not edit

@record class Math_Thread_i_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val api : Math_Thread_i_Bridge.Api =
    Math_Thread_i_Bridge.Api(
      id,
    )

  val entryPoints : Bridge.EntryPoints =
    Math_Thread_i_Bridge.EntryPoints(
      id,
      Math_Thread_i_Impl(api)
    )
}

object Math_Thread_i_Bridge {

  @record class Api(
    id : Art.BridgeId,
    ) {



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
    Math_Thread_i_BridgeId : Art.BridgeId,
    component : Math_Thread_i_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

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