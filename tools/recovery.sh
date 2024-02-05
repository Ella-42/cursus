#!/bin/zsh

# Script to recover from the backup repo

# Copy over files and folders
cp ~/backup/.vimrc ~/
cp ~/backup/.zshrc ~/
cp -r ~/backup/view ~/.vim/

# Run the custom Vim update script
zsh ~/Documents/github/tools/update_custom_vimconfig.sh
