package math_library.Math_Library

import org.sireum._

object MathLib_Ext {

  val rnd = new scala.util.Random()

  def pow(base: Z, power: Z32): Z = {
    return Z(base.toBigInt.pow(power.value.toInt))
  }

  def randomF32(min: F32, max: F32): F32 = {
    return F32.random * (max - min) + min;
  }

  def randomZ(low: Z, high: Z): Z = {
    return (low + rnd.nextInt((high.toInt - low.toInt) + 1)).toInt
  }

  def round(f: F32): Z32 = {
    return Z32(Math.round(f.native))
  }
}
