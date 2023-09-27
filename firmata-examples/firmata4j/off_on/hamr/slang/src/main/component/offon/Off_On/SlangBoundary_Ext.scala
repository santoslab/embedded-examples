package offon.Off_On

import com.fazecast.jSerialComm.SerialPort
import org.sireum._
import device.DeviceBridge

object SlangBoundary_Ext {

  def init(): Unit = {
    DeviceBridge.init()

    if (!DeviceBridge.ready) {
      println(s"Device not found on ${DeviceBridge.port}")
      println("\nHere are the connected serial devices:")
      for(p <- SerialPort.getCommPorts.toList) {
        println(s"  ${p.getSystemPortPath}${if (p.getVendorID == 0x2341) " by Arduino LLC" else ""}")
      }
      println("\nWill simulate device instead")
    }
  }

  def onOff(on: B): Unit = {
    if (DeviceBridge.ready) {
      DeviceBridge.turnOnOff(on)
    } else {
      println(s"Turned led ${if (on) "on" else "off"}")
    }
  }
}
