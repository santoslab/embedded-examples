::/*#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF           #
if [ -z ${SIREUM_HOME} ]; then                        #
  echo "Please set SIREUM_HOME env var"               #
  exit -1                                             #
fi                                                    #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"    #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#*/
// #Sireum

import org.sireum._

val sireum = Os.path(Os.env("SIREUM_HOME").get) / "bin" / (if (Os.isWin) "sireum.bat" else "sireum")

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

// create SlangCheck artifacts for the Slang types used in the project

val files: ISZ[String] = ISZ("../src/main/data/bc/BuildingControl/TempUnit.scala",
                             "../src/main/data/bc/BuildingControl/Temperature_i.scala",
                             "../src/main/data/bc/BuildingControl/SetPoint_i.scala",
                             "../src/main/data/bc/BuildingControl/FanAck.scala",
                             "../src/main/data/bc/BuildingControl/FanCmd.scala",
                             "../src/main/data/bc/Base_Types.scala",
                             "../src/main/data/bc/BuildingControl/TempSensor_i_tcp_tempSensor__Containers.scala",
                             "../src/main/data/bc/BuildingControl/TempControl_i_tcp_tempControl__Containers.scala",
                             "../src/main/data/bc/BuildingControl/Fan_i_tcp_fan__Containers.scala",
                             "../src/main/util/bc/runtimemonitor/ObservationKind.scala",
                             "../src/main/art/art/DataContent.scala",
                             "../src/main/data/bc/Aux_Types.scala")

val toolargs: String = st"${(files, " ")}".render

(Os.slashDir.up / "src" / "main" / "util" / "bc").mkdirAll()

proc"$sireum proyek slangcheck -p bc -o ${Os.slashDir.up}/src/main/util/bc ${Os.slashDir.up} $toolargs".at(Os.slashDir).console.runCheck()

// call to the tools version of SlangCheck which does not invoke Tipe
//proc"$sireum tools slangcheck generator -p bc -o ${Os.slashDir.up}/src/main/util/bc $toolargs".at(Os.slashDir).console.runCheck()
