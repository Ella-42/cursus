#!/bin/zsh

COLOR='\e[1;42m'
CLEAR_LINE='\e[2K\r'
DEFAULT='\e[0m'
BELL='\a'

for i in {0..255}
do
	printf "\e[38;5;${i}mcolor ${i}"
	sleep 0.1
	printf "${CLEAR_LINE}${DEFAULT}"
done
