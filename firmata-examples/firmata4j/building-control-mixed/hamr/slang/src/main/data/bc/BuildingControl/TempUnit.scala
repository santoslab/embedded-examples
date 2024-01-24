// #Sireum

package bc.BuildingControl

import org.sireum._
import bc._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@enum object TempUnit {
  "Fahrenheit"
  "Celsius"
  "Kelvin"
}

object TempUnit_Payload {
  def example(): TempUnit_Payload = {
    return TempUnit_Payload(BuildingControl.TempUnit.byOrdinal(0).get)
  }
}

@datatype class TempUnit_Payload(value: BuildingControl.TempUnit.Type) extends art.DataContent
