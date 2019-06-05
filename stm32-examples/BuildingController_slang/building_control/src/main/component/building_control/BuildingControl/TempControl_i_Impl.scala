// #Sireum

package building_control.BuildingControl

import org.sireum._
import org.sireum.Z16._
import building_control.Base_Types.Integer_16
import building_control._

@record class TempControl_i_Impl (val api : TempControl_i_Bridge.Api) extends TempControl_i {
  val lowTemp: Z16 = z16"70"
  val highTemp: Z16 = z16"90"

  val on: Base_Types.Boolean = Base_Types.Boolean(T)
  val off: Base_Types.Boolean = Base_Types.Boolean(F)

  override def handlecurrentTemp(value: Integer_16): Unit = {
    val ct = value.value

    if(ct > highTemp){
      api.sendfanCmd(on)

      api.logInfo("Sent 'on' to fan")
    } else if(ct < lowTemp) {
      api.sendfanCmd(off)

      api.logInfo("Sent 'off' to fan")
    }
  }
}
