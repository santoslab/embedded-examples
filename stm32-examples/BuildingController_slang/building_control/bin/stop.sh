#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
APPS="TempSensor_i_App Fan_i_App TempControl_i_App"
for APP in ${APPS}; do
  pkill $APP
  pkill -9 $APP
done
ME=`whoami`

# message queue
IPCS_Q=`ipcs -q | egrep "[0-9a-f]+[0-9]+" | grep $ME | awk '{print $2}'`
for id in $IPCS_Q; do
  ipcrm -q $id;
done

# shared memory
IPCS_Q=`ipcs -m | egrep "[0-9a-f]+[0-9]+" | grep $ME | awk '{print $2}'`
for id in $IPCS_Q; do
  ipcrm -m $id;
done

# semaphores
IPCS_Q=`ipcs -s | egrep "[0-9a-f]+[0-9]+" | grep $ME | awk '{print $2}'`
for id in $IPCS_Q; do
  ipcrm -s $id;
done

ipcs
