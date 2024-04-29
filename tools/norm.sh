#!/bin/zsh


# Simple script to only show Norminette errors and skip files which are OK


# Move the cursor up one line
up="\033[A"

# Erase the current line on the cursor
clear="\033[K"

# Fetch all C and header files
find . \( -name "*.c" -o -name "*.h" \) -not -path "*mlx*" | while read file;
do
	# Run Norminette on each file
	norminette $file
	# If the file was OK, remove the line
	if [ "$?" -eq "0" ]; then
		printf $up$clear;
	fi
done
