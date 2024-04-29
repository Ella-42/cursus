#!/bin/zsh


# Simple script to only show Norminette errors and skip files which are OK


# Fetch all C and header files, run Norminette on each, only printing lines that were not OK
find . \( -name "*.c" -o -name "*.h" \) -not -path "*mlx*" -print0 | xargs -0 norminette | grep -v 'OK!$'

# If command failed due to having no lines leftover because of having no errors
if [ $? -eq 1 ]; then
	# inform user and script will end with success
	echo "No Norminette errors";
else
	# else exit with failure to reflect errors
	exit 1;
fi
