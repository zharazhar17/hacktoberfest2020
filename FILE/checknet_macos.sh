#!/bin/sh

GATEWAY=`route -n get default | grep gateway`
if [ -z "$GATEWAY" ]
  then
    echo error
else
  ping -q -t 1 -c 1 `echo $GATEWAY | cut -d ':' -f 2` > /dev/null && echo ok || echo error
fi
