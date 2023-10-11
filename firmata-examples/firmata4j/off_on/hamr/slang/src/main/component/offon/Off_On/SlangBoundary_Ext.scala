package offon.Off_On

import com.fazecast.jSerialComm.SerialPort
import org.sireum._
import device.DeviceBridge

object SlangBoundary_Ext {

  def init(): Unit = {
    DeviceBridge.init()

    if (!DeviceBridge.ready) {
      val deviceBridge = Os.path(implicitly[sourcecode.File].value).up / "device" / "DeviceBridge.scala"
      println(s"\nDevice not found on ${DeviceBridge.port} as specified in ${deviceBridge.toUri}")
      println("\nHere are the connected serial devices:")
      for(p <- SerialPort.getCommPorts.toList) {
        println(s"  ${p.getSystemPortPath}${if (p.getVendorID == 0x2341) " by Arduino LLC" else ""}")
      }
      println("\nNote: You may need to give rwx access to the device (e.g. sudo chmod 777 /dev/ttyACM0)")
      print(s"\nWill simulate devices instead starting in 5 seconds  ")
      for (i <- 4 to 0 by -1) {
        Thread.sleep(1000)
        print(s"\b\b\b\b\b\b\b\b\b\b\b$i seconds ${if (i % 2 == 0) "*" else " "}")
      }
      println("\b ")
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
