// #Sireum

package proj.Base_Types

import org.sireum._
import proj._

@datatype class Integer_8(value: org.sireum.Z8)

@datatype class Integer_8_Payload(value: Integer_8) extends art.DataContent
