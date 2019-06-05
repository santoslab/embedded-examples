// #Sireum

package building_control

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object TempControl_i_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.BuildingControlDemo_i_Instance_tcp_tempControl.entryPoints
  val currentTempPortId: Art.PortId = Arch.BuildingControlDemo_i_Instance_tcp_tempControl.currentTemp.id
  val currentTempPortIdOpt: Option[Art.PortId] = Some(currentTempPortId)

  def initialize(seed: Z): Unit = {
    Platform.initialise(seed, currentTempPortIdOpt)
    Art.run(Arch.ad)
  }

  def compute(): Unit = {
    var dispatch = F
    Platform.receiveAsync(currentTempPortIdOpt) match {
      case Some((_, v: Base_Types.Integer_16_Payload)) => ArtNix.updateData(currentTempPortId, v); dispatch = T
      case Some((_, v)) => halt(s"Unexpected payload on port ${currentTempPortId}.  Expecting something of type Base_Types.Integer_16_Payload but received ${v}")
      case None() => // do nothing
    }
    if (dispatch) {
      entryPoints.compute()
      Process.sleep(1000)
    } else {
      Process.sleep(10)
    }
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    val appPortId: Art.PortId = IPCPorts.TempControl_i_App
    val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
    Platform.initialise(seed, appPortIdOpt)

    initialize(seed)

    Platform.receive(appPortIdOpt)

    entryPoints.initialise()

    Platform.receive(appPortIdOpt)

    println("TempControl_i_App starting ...")

    ArtNix.eventDispatch()

    var terminated = F
    while (!terminated) {
      val termOpt = Platform.receiveAsync(appPortIdOpt)
      if (termOpt.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    Arch.BuildingControlDemo_i_Instance_tcp_tempControl.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}