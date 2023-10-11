package offon.Off_On

import com.fazecast.jSerialComm.SerialPort
import org.sireum._
import device.DeviceBridge

object SlangBoundary_Ext {

  def init(): Unit = {
    DeviceBridge.init()

    if (!DeviceBridge.ready) {
      val deviceBridge = Os.path(implicitly[sourcecode.File].value).up / "device" / "DeviceBridge.scala"
      println(s"Device not found on ${DeviceBridge.port} as specified in ${deviceBridge.toUri}")
      println("\nHere are the connected serial devices:")
      for(p <- SerialPort.getCommPorts.toList) {
        println(s"  ${p.getSystemPortPath}${if (p.getVendorID == 0x2341) " by Arduino LLC" else ""}")
      }
      print("\nWill simulate devices instead starting in 5 seconds")
      for (i <- 4 to 0 by -1) {
        Thread.sleep(1000)
        print(s"\b\b\b\b\b\b\b\b\b$i seconds")
      }
      println()
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
