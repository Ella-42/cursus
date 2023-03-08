# A simple script to automatically use the long list command at a 1 second interval.

#!/bin/bash

while true; do
    clear
    ls -lhA
    sleep 1
done
