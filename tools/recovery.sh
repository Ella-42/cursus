#!/bin/zsh

# Script to recover from the backup repo

# Copy over files and folders
cp -ru ~/backup/view ~/.vim/
cp -u ~/backup/.vimrc ~/
cp -u ~/backup/.zshrc ~/
cp -u ~/backup/.valgrindrc ~/
cp -u ~/backup/.gdbinit ~/
cp -u ~/backup/init.vim ~/.config/nvim/
