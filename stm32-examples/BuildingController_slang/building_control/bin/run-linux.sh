#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME
x-terminal-emulator -e sh -c linux/TempSensor_i_App &
x-terminal-emulator -e sh -c linux/Fan_i_App &
x-terminal-emulator -e sh -c linux/TempControl_i_App &
read -p "Press enter to initialise components ..."
linux/Main
read -p "Press enter again to start ..."
linux/Main