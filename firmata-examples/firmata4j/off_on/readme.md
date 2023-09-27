# Building Control + Firmata4j + Arduino example

![circuit_diagram.jpg](circuit_diagram.jpg)

Potentiometer simulates a temp sensor.  It's range is set to be b/w 70 F and 100 F.

Row 9 LED uses PWM to display the current temperature.  It's off at 70 F
and fully bright at 100 F.

Row 1 LED shows fan state, either on or off.  If should turn on if
the temperature rises above 90 F and should turn off when temperature
drops below 80 F.

# How to Build

1. Install [Arduino IDE 2.0](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started/ide-v2-downloading-and-installing)

1. Plugin in the Arduino board, launch the IDE, and then select the board making
note of its port (e.g. it will look something like ``/dev/cu.usbmodem2201``)

1. Select ``File >> Examples >> Firmata >> StandardFirmata`` and upload
that to the board

1. Do the following:

    ```
    cd hamr/slang
    sireum proyek ive .
    ```

1. Open [hamr/slang](hamr/slang) in IVE

1. Change [DeviceBridge.board](hamr/slang/src/main/component/bc/BuildingControl/device/DeviceBridge.scala#L13) and [DeviceBridge.port](hamr/slang/src/main/component/bc/BuildingControl/device/DeviceBridge.scala#L14) so that they match your setup

1. Run the [Demo](hamr/slang/src/main/architecture/bc/Demo.scala) app

**Note** if you're using Windows or Apple Silicon then you'll also need to add the Java Serial Simple Connector (JSSC)
library as an IVY dependency in your ``bin/project.cmd`` by uncommenting [these two lines](hamr/slang/bin/project.cmd#L66-L67).  A combination of ``io.github.java-native:jssc:2.9.4`` and ``com.github.kurbatov:firmata4j:2.3.8`` worked on an M1 and an M2.  Refer [here](https://www.yorku.ca/professor/drsmith/2022/02/25/easy-java-arduino-with-firmata/) for more information.
