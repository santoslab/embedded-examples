// #Sireum

package building_control.BuildingControl

import org.sireum._
import building_control._

@record class Fan_i_Impl (val api : Fan_i_Bridge.Api) extends Fan_i {
  override def handlefanCmd(value: Base_Types.Boolean): Unit = {
    FanNative.fanController(value.value)
  }
}

@ext object FanNative {
  def fanController(turnOn: B): Unit = $
}
