#!/bin/zsh

# This file exists to make debugging easier by running the startup automatically

# Error check the input
if [ $# -lt 2 ]; then
	echo "Expected arguments: <program_name> <program_argument(s)>"
	exit 1
fi

# Fetch the program name arguments from the script-call
PROGRAM="$1"
shift
ARGUMENTS="$@"

# Create a temporary GDB initialization script
TMP_INIT_SCRIPT=$(mktemp)

# Write GDB commands to the initialization script
cat << EOF > "$TMP_INIT_SCRIPT"
file $PROGRAM
break main
run $ARGUMENTS
EOF

# Start GDB with the initialization script
gdb -x "$TMP_INIT_SCRIPT"

# Delete the temporary initialization script
rm -f "$TMP_INIT_SCRIPT"
