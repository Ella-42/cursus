echo "\e[1;31m$(whoami)@$(hostname)"\
"\n\e[1;34mOS\e[0m $(lsb_release -d | cut -f 2) ($(lsb_release -c | cut -f 2))"\
"\n\e[1;35mSH\e[0m $(basename $SHELL)"\
"\n\e[1;32mDV\e[0m $(cat /sys/devices/virtual/dmi/id/product_name)"
