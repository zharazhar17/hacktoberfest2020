#!/bin/bash
play -n synth 0.3 sine 800 vol 0.75
while :
do
pingtime=$(ping -w 1 8.8.8.8 | grep ttl)
if [ "$pingtime" = "" ] 
then 
   pingtimetwo=$(ping -w 1 www.google.com | grep ttl) 
   if [ "$pingtimetwo" = "" ] 
   then 
       clear ; echo 'Offline'
   else
       clear ; echo 'Online' ; play -n synth 0.3 sine 800 vol 0.75
   fi 
else
    clear ; echo 'Online' ; play -n synth 0.3 sine 800 vol 0.75
fi
sleep 1
done
