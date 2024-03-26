#!/bin/zsh

# Ask the user what files they want to see
echo "Enter a search pattern:"
read pattern

# Clear the screen
printf "\033[2J\033[H"

# Print contents of all found files that match the search pattern to the log file
find . -name "$pattern" | while read file; do
  
  # Print where this file was found
  echo "\n==================== $file ====================\n"

  # Fetch the first line of the file
  first_line=$(head -n 1 "$file")

  # Compare the first line to the first line of the 42 header. If these match, remove it, else, do not
  if [ "$first_line" = "/* ************************************************************************** */" ]; then
    tail -n +15 "$file"
  elif [ "$first_line" = "# **************************************************************************** #" ]; then
	tail -n +13 "$file"
  else
    tail -n +3 "$file"
  fi
done > ~/log

# Open the result in vim
nvim ~/log
