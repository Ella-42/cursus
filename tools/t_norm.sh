#!/bin/zsh

# Simple script to toggle the Norminette plugin on\off

CONFIG=~/.config/nvim/init.vim

# Check whether the Norminette plugin is disabled
RET=$(grep "\"Plug 'alexandregv/norminette-vim'" $CONFIG)

# If it is, enable it, else, disable it
if [ "$RET" ]; then
	sed -i "s#\"Plug 'alexandregv/norminette-vim#Plug 'alexandregv/norminette-vim#" $CONFIG
else
	sed -i "s#Plug 'alexandregv/norminette-vim#\"Plug 'alexandregv/norminette-vim#" $CONFIG
fi
