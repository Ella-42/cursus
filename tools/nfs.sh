#!/bin/zsh

# Fetch the file name
FILE=$(find . -name ".nfs*" -print)

# Prompt an error of no .nfs file was found in current directory
if [ -z "$FILE" ]; then
	echo "No .nfs file found." >&2
	exit 1
fi

# Fetch the PID
PID=$(lsof -t $FILE)

# Prompt an error if PID couldn't be fetched
if [ -z "$PID" ]; then
	echo "Failed to retrieve PID of '$FILE'." >&2
	exit 1
fi

# Kill the process
kill -9 $PID

# Script to rid myself of persistent processes
