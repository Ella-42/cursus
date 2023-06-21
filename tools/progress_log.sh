#!/bin/zsh

# Default value is 3 (number of commit messages)
N=3

#
# Check if argument is provided
if [ $# -gt 0 ]; then
    # Make sure the argument provided was a number
    if ! [[ "$1" =~ ^[0-9]+$ ]]; then
        echo "Error: Invalid argument, has to be a positive number"
        exit 1
    fi

    # Assign the provided value to N
    N=$1
fi

# Return N number commits with their dates in front of them
git log -n$N --pretty=format:"%h %ad %s" --date=short | cut -d" " -f2- | sed 's/(auto_push)$//'
