// #Sireum

package building_control

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object TempSensor_i_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.BuildingControlDemo_i_Instance_tempSensor.entryPoints

  def initialize(seed: Z): Unit = {
    Platform.initialise(seed, None[Art.PortId]())
    Art.run(Arch.ad)
  }

  def compute(): Unit = {
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

    val appPortId: Art.PortId = IPCPorts.TempSensor_i_App
    val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
    Platform.initialise(seed, appPortIdOpt)

    initialize(seed)

    Platform.receive(appPortIdOpt)

    entryPoints.initialise()

    Platform.receive(appPortIdOpt)

    println("TempSensor_i_App starting ...")

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
    Arch.BuildingControlDemo_i_Instance_tempSensor.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}