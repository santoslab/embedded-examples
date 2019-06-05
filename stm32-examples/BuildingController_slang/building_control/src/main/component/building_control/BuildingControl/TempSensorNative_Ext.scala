package building_control.BuildingControl

import org.sireum._
import org.sireum.Z16._

object TempSensorNative_Ext {
  var lastTemperature: Z16 = z16"80"

  var rand = new java.util.Random

  def currentTempGet(): Z16 = {
    lastTemperature = if (rand.nextBoolean()) {
      val delta =
        F32((rand.nextGaussian() * 3).abs.min(2).toFloat *
          (if (FanNative_Ext.isOn) -1 else 1))
      lastTemperature + Z16(delta.native.toInt)
    } else lastTemperature

    lastTemperature
  }
}
