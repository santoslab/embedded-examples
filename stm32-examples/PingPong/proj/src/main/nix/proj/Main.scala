// #Sireum

package proj

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Main extends App {
  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    Platform.initialise(seed, None())

    val empty = art.Empty()

    Platform.sendAsync(IPCPorts.Ping_i_App, IPCPorts.Ping_i_App, empty)
    Platform.sendAsync(IPCPorts.Pong_i_App, IPCPorts.Pong_i_App, empty)

    Platform.finalise()
    return 0
  }
}
