#!/bin/zsh

# Macro to press lock button, depending on OS

#  Depending on which OS we are running in, click in the correct spot to lock the screen:
# Ubuntu 22: the top right
if [[ $(uname -r) == *"5.15"* ]]; then
	~/.local/bin/xdotool mousemove 3735 15 click 1
# Ubuntu 20: bottom right and hidden
else
	# First we move to a spot where the taskbar expands
	~/.local/bin/xdotool mousemove 3415 2159
	# We then wait a little bit to have the OS realize where we are
	sleep .5
	# Finally, we can click on the lock button that is now visible
	~/.local/bin/xdotool mousemove 3413 2140 click 1
fi
