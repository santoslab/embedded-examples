#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME
cygstart mintty /bin/bash win/Math_Thread_i_App.exe &
read -p "Press enter to start ..."
win/Main.exe