#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME
cygstart mintty /bin/bash win/Ping_i_App.exe &
cygstart mintty /bin/bash win/Pong_i_App.exe &
read -p "Press enter to initialise components ..."
win/Main.exe
read -p "Press enter again to start ..."
win/Main.exe