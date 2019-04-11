// #Sireum

package math_library

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val Math_System_i_Instance_mp_mt : math_library.Math_Library.Math_Thread_i_Bridge = math_library.Math_Library.Math_Thread_i_Bridge(
    id = 0,
    name = "Math_System_i_Instance_mp_mt",
    dispatchProtocol = Periodic(period = 1000),

  )

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (Math_System_i_Instance_mp_mt),

      connections = ISZ ()
    )
  }
}