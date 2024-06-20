#!/bin/zsh


# Open all C files in NeoVim in provided directory


# Check if an argument was provided
if [ $# -eq 0 ]; then
	# If not, assign to current directory
	1=.
# If there was an argument provided
else
	# Validate it
	if ! [ -d "$1" ]; then
		# If invalid, throw an error and exit with failure
		echo "Usage: arguments: [directory]" >&2
		exit 1
	fi
fi

# Search for all C files in directory provided
c_files=$(find $1 \( -name '*.c' -o -name '*.cpp' \) -not -path '*mlx*' -a -not -path '*lib*')

# Check if any files were found
if ! [ "$c_files" ]; then
	# If not, let user know and exit program
	echo "Info: No C files found in given directory"
	exit 0
fi

# Expand files with echo and feed into NeoVim to open them
echo $c_files | xargs nvim
