#!/bin/zsh

# Command to kill all terminals
/nfs/homes/lpeeters/.local/bin/xdotool search --class "terminator" windowkill %@
/nfs/homes/lpeeters/.local/bin/xdotool search --class "Terminal" windowkill %@

# Command to close Firefox
killall firefox

# Wait for terminals and Firefox to close
sleep 3

# Lock screen
dm-tool lock

# Wait for the system to be functional
sleep 10

# Turn up the brightness
i=0;
while ((i <= 25))
do
	sleep 0.1
	/nfs/homes/lpeeters/.local/bin/xdotool keydown XF86MonBrightnessUp
	/nfs/homes/lpeeters/.local/bin/xdotool keyup XF86MonBrightnessUp
	((i++))
done
