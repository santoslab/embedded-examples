// #Sireum

package math_library.Math_Library

import org.sireum._
import math_library._

@record class Math_Thread_i_Impl (val api : Math_Thread_i_Bridge.Api) extends Math_Thread_i {

  override def timeTriggered(): Unit = {
    val a = MathLib.randomZ(1, 10)
    val b = MathLib.randomZ(1, 10)

    val result = MathLib.pow(a, org.sireum.conversions.Z.toZ32(b))

    api.logInfo(s"$a raised to the $b power is $result")

    val c = MathLib.randomF32(1f, 10f)

    api.logInfo(s"${c} -> ${MathLib.round(c)}")
  }
}

@ext object MathLib {
  def pow(base: Z, power: Z32): Z = $

  def randomF32(min: F32, max: F32): F32 = $

  def randomZ(min: Z, max: Z): Z = $

  def round(f: F32): Z32 = $
}
