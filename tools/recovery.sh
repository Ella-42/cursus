#!/bin/zsh

# Script to recover from the backup repo

# Copy over files and folders
cp ~/recovery/.vimrc ~/
cp ~/recovery/.zshrc ~/
cp -r ~/recovery/view ~/.vim/

# Run the custom Vim update script
sh ~/Documents/github/tools/update_custom_vimconfig.sh
