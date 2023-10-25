#!/bin/zsh

# Simple script to toggle the Norminette plugin on\off

# Check whether the Norminette plugin is disabled
RET=$(grep "\"Plug 'alexandregv/norminette-vim'" ~/.cvimrc)

# If it is, enable it, else, disable it
if [ "$RET" ]; then
	sed -i "s#\"Plug 'alexandregv/norminette-vim#Plug 'alexandregv/norminette-vim#" ~/.cvimrc
else
	sed -i "s#Plug 'alexandregv/norminette-vim#\"Plug 'alexandregv/norminette-vim#" ~/.cvimrc
fi
