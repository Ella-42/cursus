#!/bin/bash

echo "Enter the search pattern:"
read pattern

printf '\033[2J\033[H'

find . -name "$pattern" | while read file; do
  echo -e "\n==================== $file ====================\n"
  tail -n +0 "$file"
done > ~/log

vim ~/log
