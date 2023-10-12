package offon.Off_On.device

import org.sireum._
import org.firmata4j._
import org.firmata4j.firmata._
import FirmataUtil._
import org.firmata4j.ui.JPinboard

import java.awt.event.{WindowAdapter, WindowEvent}
import java.awt.{GridBagConstraints, GridBagLayout}
import java.io.IOException
import javax.swing.{JFrame, SwingUtilities, WindowConstants}

object Board {

  var port: String = _
  var device: IODevice = _
  var initRun: B = F

  def init(port: String): Unit = {
    this.port = port
    this.synchronized {
      try {
        if (!initRun) {
          initRun = T
          device = new FirmataDevice(port.native)
          device.start()
          device.ensureInitializationIsDone()
          initPinboard(device)
        }
      } catch {
        case e: Throwable =>
          cprintln(T, e)
      }
    }
  }

  def ready: B = {
    return device.isReady
  }

  def analogRead(pin: Z, mode: PinMode.Type): Z = {
    // for now just let exception halt the program
    val p = device.getPin(pin.toInt)
    p.setMode(Pin.Mode.valueOf(mode.name.native))
    return Z(p.getValue)
  }

  def analogWrite(pin: Z, mode: PinMode.Type, value: Z): Unit = {
    // for now just let exception halt the program
    val p = device.getPin(pin.toInt)
    p.setMode(Pin.Mode.valueOf(mode.name.native))
    p.setValue(value.toInt)
  }

  def initPinboard(device: IODevice): Unit = {
    SwingUtilities.invokeLater(new Runnable() {
      override def run(): Unit = {
        val mainFrame = new JFrame(port.native)
        val layout = new GridBagLayout()
        val constraints = new GridBagConstraints()
        mainFrame.setLayout(layout)
        constraints.gridy = 0
        constraints.fill = GridBagConstraints.BOTH
        constraints.weightx = 1
        constraints.weighty = 1
        val pinboard = new JPinboard(device)
        layout.setConstraints(pinboard, constraints)
        mainFrame.add(pinboard)
        mainFrame.pack
        mainFrame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE)
        mainFrame.addWindowListener(new WindowAdapter() {
          override def windowClosing(e: WindowEvent): Unit = {
            try device.stop
            catch {
              case ex: IOException =>
                throw new RuntimeException(ex)
            }
            super.windowClosing(e)
          }
        })
        mainFrame.setVisible(true)
      }
    })
  }
}
