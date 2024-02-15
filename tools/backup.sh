#!/bin/zsh

# Backup script

# If we're in the windows 11 environment on wsl2, save backup in appropriate folder
if [ -f ~/.env_w11 ]; then
	cp -r ~/.config/terminator/ ~/backup/Windows11_WSL2/;
	cp -r ~/.config/nvim/init.vim ~/backup/Windows11_WSL2/;
	cp -r ~/.zshrc ~/backup/Windows11_WSL2/;
	dir=$(pwd);
	echo '=========================Backup=========================';
	cd ~/backup/;
	git add .;
	git commit -m "Automatic backup :heart:";
	git push;
	echo '========================================================';
	cd $dir;

# Else, just run the script like normal
else
	cp -r ~/.config/terminator/ ~/backup/;
	cp -r ~/.vim/view/ ~/backup/;
	cp ~/.config/nvim/init.vim ~/backup/;
	cp ~/.vimrc ~/backup/;
	cp ~/.zshrc ~/backup/;
	cp ~/.valgrindrc ~/backup/;
	cp ~/.gdbinit ~/backup/;
	dir=$(pwd);
	echo '=========================Backup=========================';
	cd ~/backup/;
	git add .;
	git commit -m "Automatic backup :heart:";
	git push;
	echo '========================================================';
	cd $dir;
fi
