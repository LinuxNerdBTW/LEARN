#!/usr/bin/bash

if [ $1 == "on" ]
then
	xset led named "Scroll Lock"
	echo "RETURN 1" | lolcat

elif [ $1 == "off" ]
then
	xset -led named "Scroll Lock"
	echo "RETURN 0"
else
	echo "[ Bye Mother Fucker ]" | lolcat

fi
