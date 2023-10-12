package offon.Off_On

import org.sireum._
import jssc.{SerialNativeInterface, SerialPortList}
import offon.Off_On.device.DeviceBridge
import java.awt.GridBagLayout
import java.util.regex.Pattern
import javax.swing._

object SlangBoundary_Ext {

  // point port at a device or SIMULATE to skip the dropdown
  var port: Option[String] = None() // Some("/dev/ttyACM0")

  var simulating: B = F

  def init(): Unit = {

    port = Some(port match {
      case Some(s) => s
      case _ => requestPort
    })

    if (port.get == string"SIMULATE") {
      simulating = T
    } else {

      DeviceBridge.init(port.get)

      if (!DeviceBridge.ready) {
        JOptionPane.showMessageDialog(null, s"${port.get} isn't ready\nNote: You may need to give rwx access to the device (e.g. sudo chmod 777 ${port.get})", "Error", JOptionPane.ERROR_MESSAGE)
        System.exit(1)
      }
    }
  }

  def onOff(on: B): Unit = {
    if (simulating) {
      println(s"Turned led ${if (on) "on" else "off"}")
    } else {
      DeviceBridge.turnOnOff(on)
    }
  }

  private def requestPort: String = {
    val portNameSelector = new JComboBox[String]()
    portNameSelector.setModel(new DefaultComboBoxModel[String]())
    var portNames: List[Predef.String] = List[Predef.String] {"SIMULATE"}
    // TODO: maybe use jSerialComm so that the ports can be filtered by vendor ID
    //for (p <- SerialPort.getCommPorts.toList) {
    //  println(s"  ${p.getSystemPortPath}${if (p.getVendorID == 0x2341) " by Arduino LLC" else ""}")
    //}
    if (SerialNativeInterface.getOsType == SerialNativeInterface.OS_MAC_OS_X) {
      // for MAC OS default pattern of jssc library is too restrictive
      portNames = portNames.appendedAll(SerialPortList.getPortNames("/dev/", Pattern.compile("tty\\..*")).toList)
    }
    else {
      portNames = portNames.appendedAll(SerialPortList.getPortNames.toList)
    }
    for (portName <- portNames) {
      portNameSelector.addItem(portName)
    }
    val panel = new JPanel()
    panel.setLayout(new GridBagLayout())
    panel.add(new JLabel("Port "))
    panel.add(portNameSelector)
    if (JOptionPane.showConfirmDialog(null, panel, "Select the port", JOptionPane.OK_CANCEL_OPTION) == JOptionPane.OK_OPTION) {
      return portNameSelector.getSelectedItem.toString
    }
    else {
      System.exit(0)
      halt("")
    }
  }
}
