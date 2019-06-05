package building_control.BuildingControl

import org.sireum._

object FanNative_Ext {
  var isOn: B = F

  def fanController(turnOn: B): Unit = {
    isOn = turnOn

    println(s"FanNative_Ext.fanContoller received ${turnOn}")
  }
}
