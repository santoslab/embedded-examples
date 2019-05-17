// #Sireum

package proj

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Ping_i_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.PingPongSystem_i_Instance_p_ping.entryPoints

  val appPortId: Art.PortId = IPCPorts.Ping_i_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  val ping_innPortId: Art.PortId = Arch.PingPongSystem_i_Instance_p_ping.ping_inn.id
  val ping_innPortIdOpt: Option[Art.PortId] = Some(ping_innPortId)

  def initialise(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, ping_innPortIdOpt)
    Art.run(Arch.ad)
  }

  def compute(): Unit ={
    Platform.receiveAsync(ping_innPortIdOpt) match {
      case Some((_, v: Base_Types.Integer_8_Payload)) => ArtNix.updateData(ping_innPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port ${ping_innPortId}.  Expecting something of type Base_Types.Integer_8_Payload but received ${v}")
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

    println("Ping_i_App starting ...")

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
    Arch.PingPongSystem_i_Instance_p_ping.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}