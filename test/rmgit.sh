find . -mindepth 2 -type d -name ".git" -print -exec rm -rf {} \;
find . -mindepth 2 -type f -name ".gitignore" -print -exec rm -rf {} \;
find . -mindepth 2 -type f -name "LICENSE" -print -exec rm -rf {} \;
find . -mindepth 2 -type f -name "README.md" -print -exec rm -rf {} \;
