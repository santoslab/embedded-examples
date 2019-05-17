// #Sireum

package proj

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Pong_i_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.PingPongSystem_i_Instance_p_pong.entryPoints

  val appPortId: Art.PortId = IPCPorts.Pong_i_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  val pong_innPortId: Art.PortId = Arch.PingPongSystem_i_Instance_p_pong.pong_inn.id
  val pong_innPortIdOpt: Option[Art.PortId] = Some(pong_innPortId)

  def initialise(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, pong_innPortIdOpt)
    Art.run(Arch.ad)
  }

  def compute(): Unit = {
    Platform.receiveAsync(pong_innPortIdOpt) match {
      case Some((_, v: Base_Types.Integer_8_Payload)) => ArtNix.updateData(pong_innPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port ${pong_innPortId}.  Expecting something of type Base_Types.Integer_8_Payload but received ${v}")
      case None() => // do nothing
    }
    entryPoints.compute()
    Process.sleep(1000)
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialise(seed)

    Platform.receive(appPortIdOpt)

    entryPoints.initialise()

    Platform.receive(appPortIdOpt)

    println("Pong_i_App starting ...")

    ArtNix.timeDispatch()

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
    Arch.PingPongSystem_i_Instance_p_pong.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}