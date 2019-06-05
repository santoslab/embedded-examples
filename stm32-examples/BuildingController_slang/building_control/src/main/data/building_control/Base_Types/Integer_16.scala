// #Sireum

package building_control.Base_Types

import org.sireum._
import building_control._

@datatype class Integer_16(value: Z16)

@datatype class Integer_16_Payload(value: Integer_16) extends art.DataContent
