#!/bin/zsh

# Backup script

# If we're in the windows 11 environment on wsl2, save backup in appropriate folder
if [ -f ~/.env_w11 ]; then
	cp -ru ~/.config/terminator/ ~/backup/Windows11_WSL2/;
	cp -ru ~/.config/nvim/init.vim ~/backup/Windows11_WSL2/;
	cp -ru ~/.zshrc ~/backup/Windows11_WSL2/;
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
	cp -ru ~/.config/terminator/ ~/backup/;
	cp -ru ~/.vim/view/ ~/backup/;
	cp -u ~/.config/nvim/init.vim ~/backup/;
	cp -u ~/.vimrc ~/backup/;
	cp -u ~/.zshrc ~/backup/;
	cp -u ~/.valgrindrc ~/backup/;
	cp -u ~/.gdbinit ~/backup/;
	cp -u ~/git/retriever/.env ~/backup/;
	dir=$(pwd);
	echo '=========================Backup=========================';
	cd ~/backup/;
	git add .;
	git commit -m "Automatic backup :heart:";
	git push;
	echo '========================================================';
	cd $dir;
fi
