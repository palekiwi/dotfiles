#!/usr/bin/bash

file=~/.dotfiles
launcher="mydmenu -sb #ffb05f -i -b"

opts=$(cat $file)
# Get the file choice
choice=$(echo "$opts" | awk '{print $1}'| $launcher -p 'Edit config file: ')

# If selection is empty, exit
[[ -z "$choice" ]] && { exit 1; }

# Extract a path based on the choice
path=$(echo "$opts" | awk -v re="$choice" '$1 == re {print $2}')

# execute command with path
xfce4-terminal -e "distrobox enter dev -e 'nvim $path'" -T "nvim $path"
#myedit $path