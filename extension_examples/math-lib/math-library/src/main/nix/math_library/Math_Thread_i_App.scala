// #Sireum

package math_library

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Math_Thread_i_App extends App {

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    val entryPoints = Arch.Math_System_i_Instance_mp_mt.entryPoints

    val appPortId: Art.PortId = IPCPorts.Math_Thread_i_App
    val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
    Platform.initialise(seed, appPortIdOpt)

    Art.run(Arch.ad)

    entryPoints.initialise()

    Platform.receive(Some(IPCPorts.Main))

    println("Math_Thread_i_App starting ...")

    ArtNix.timeDispatch()

    while (true) {
      Process.sleep(1000)

      entryPoints.compute()
    }

    return 0
  }

  def exit(): Unit = {
    Arch.Math_System_i_Instance_mp_mt.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}