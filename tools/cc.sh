#!/bin/bash

echo "Enter the search pattern:"
read pattern

printf '\033[2J\033[H'

for file in *"$pattern"*; do
  echo "\n==================== $file ====================\n"
  tail -n +15 "$file"
done
