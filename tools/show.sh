#!/bin/zsh

# Check if an argument was provided, if not, throw an error
if ! [ $# -gt 1 ]; then
	echo "Usage: arguments: <branch> <filename>" >&2
	exit 1

# Else, run the script
else

	# Fetch the requested file from the branch and store it
	output=$(git show $1:$2)
	
	# Check if there was no error trying to fetch the file
	if [ $? -eq 0 ]; then
		
		# Send the output to the log file
		printf "%s\n" "$output" > ~/log

		# Open the log file in NeoVim
		nvim ~/log

	# Else inform user of failed request
	else
		echo "File request failure: possbile typo?" >&2
		exit 1

	fi

fi

#Simple script to open files in NeoVim across branches
