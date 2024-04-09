#!/bin/zsh

# Script to recover from the backup repo

# Copy over files and folders
cp -r ~/backup/view ~/.vim/
cp ~/backup/.vimrc ~/
cp ~/backup/.zshrc ~/
cp ~/backup/.valgrindrc ~/
cp ~/backup/.gdbinit ~/
cp ~/backup/init.vim ~/.config/nvim/
