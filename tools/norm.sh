#!/bin/zsh


# Simple script to only show Norminette errors and skip files which are OK


# Fetch all C and header files, run Norminette on each, only printing lines that were not OK
find . \( -name "*.c" -o -name "*.h" \) -not -path "*mlx*" -print0 | xargs -0 norminette | grep -v 'OK!$'
