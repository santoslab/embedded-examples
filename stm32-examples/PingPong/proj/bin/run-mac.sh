#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME
open -a Terminal mac/Ping_i_App &
open -a Terminal mac/Pong_i_App &
read -p "Press enter to initialise components ..."
mac/Main
read -p "Press enter again to start ..."
mac/Main