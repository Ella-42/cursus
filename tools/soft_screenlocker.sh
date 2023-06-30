#!/bin/zsh

# Lock screen
dm-tool lock

# Wait for the system to be functional
sleep 10

# Turn up the brightness
i=0;
while ((i < 35))
do
	sleep 0.1
	/nfs/homes/lpeeters/.local/bin/xdotool keydown XF86MonBrightnessUp
	sleep 0.1
	/nfs/homes/lpeeters/.local/bin/xdotool keyup XF86MonBrightnessUp
	((i++))
done
