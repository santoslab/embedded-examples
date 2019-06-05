#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
export PROJ_HOME=$SCRIPT_HOME/../src/main
export OUTPUT_DIR=$SCRIPT_HOME/../src/c
export EXTS=$OUTPUT_DIR/ext/ext.c:$OUTPUT_DIR/ext/ipc.c

if [ -n "$1" ]; then
  TRANSPILER_JAR_HOME=$1
fi

if [ -z "$TRANSPILER_JAR_HOME" ]; then
  echo "Specify the location of the Sireum-Transpiler jar file"
  exit 1
fi

$TRANSPILER_JAR_HOME transpiler c \
  --sourcepath $PROJ_HOME \
  --apps "building_control.TempSensor_i_App,building_control.Fan_i_App,building_control.TempControl_i_App,building_control.Main" \
  --forward "art.ArtNative=building_control.ArtNix,building_control.Platform=building_control.PlatformNix" \
  --verbose \
  --bits 16 \
  --string-size 30 \
  --sequence-size 8 \
  --output-dir $OUTPUT_DIR \
  --exts $EXTS
