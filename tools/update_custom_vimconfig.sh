#!/bin/zsh

# Simple script to copy over the Vim config to a custom Vim and disable the Norm plugin

# Copy over the file
cp ~/.vimrc ~/.cvimrc

# Run the script to toggle the Norm plugin off
sh ~/Documents/github/tools/norm.sh
