#!/bin/zsh

# Command to kill all terminals
/nfs/homes/lpeeters/.local/bin/xdotool search --class "terminator" windowkill %@
/nfs/homes/lpeeters/.local/bin/xdotool search --class "Terminal" windowkill %@

# Command to close Firefox
pkill waterfox

# Wait for terminals and Firefox to close
sleep 3

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

# Run the startup script
#/nfs/homes/lpeeters/.local/bin/xdotool key control+alt+t
