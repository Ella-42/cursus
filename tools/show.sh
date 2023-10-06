#!/bin/zsh

# Check if an argument was provided, if not, throw an error
if ! [ $# -gt 0 ]; then
	echo "Yeah... but which file though?"

# Else, run the script
else

	# Fetch the requested file from the branch and store it
	output=$(git show wmarien:$1)
	
	# Check if there was no error trying to fetch the file
	if [ $? -eq 0 ]; then
		
		# Send the output to the log file
		printf "%s\n" "$output" > ~/log

		# Open the log file in Vim
		vim ~/log
	fi

fi

#Simple script to open files in Vim across branches
