// #Sireum

package building_control.BuildingControl

import org.sireum._
import building_control._

@record class TempSensor_i_Impl (val api : TempSensor_i_Bridge.Api) extends TempSensor_i {

  override def timeTriggered(): Unit = {
    val temp = TempSensorNative.currentTempGet()

    api.sendcurrentTemp(Base_Types.Integer_16(temp))

    api.logInfo(s"Sent $temp")
  }
}

@ext object TempSensorNative {
  def currentTempGet(): Z16 = $
}
