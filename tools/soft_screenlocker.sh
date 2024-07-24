#!/bin/zsh

# Check if script can execute
if ! dm-tool list-seats | grep -q "true"; then
	# Quit while you're ahead
	exit 1
fi

# Lock screen
dm-tool lock

# Wait for the system to be functional
sleep 3

# Turn up the brightness
i=0;
while ((i < 25))
do
	sleep 0.1
	~/.local/bin/xdotool keydown XF86MonBrightnessUp
	sleep 0.1
	~/.local/bin/xdotool keyup XF86MonBrightnessUp
	((i++))
done
