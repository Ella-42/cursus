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
	cp -ru ~/.config/ ~/backup/;
	cp -ru ~/.local/ ~/backup/;
	cp -ru ~/.docker/ ~/backup/;
	cp -u ~/.zshrc ~/backup/;
	cp -u ~/.zsh_history ~/backup/;
	cp -u ~/.viminfo ~/backup/;
	cp -u ~/.valgrindrc ~/backup/;
	cp -u ~/.gdbinit ~/backup/;
	cp -u ~/.gitconfig ~/backup/;
	cp -u ~/.ssh/authorized_keys ~/backup/;
	dir=$(pwd);
	echo '=========================Backup=========================';
	cd ~/backup/;
	git add .;
	git commit -m "Automatic backup :heart:";
	git push;
	echo '========================================================';
	cd $dir;
fi
