find . -mindepth 2 \( -type d -name ".git" -or -type f -name ".gitignore" -or -type f -name "LICENSE" -or -type f -name "README.md" \) -exec rm -rf {} \; -print > ~/log.txt
