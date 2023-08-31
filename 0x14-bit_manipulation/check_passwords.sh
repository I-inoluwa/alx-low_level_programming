#!/bin/bash

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <crackme3> <password.txt>"
  exit 1
fi

while read -r line; do
  output=$(./"$1" "$line")
  if [ "$output" = "congratulations" ]; then
    echo "Password found: $line"
    exit 0
  fi
done < "$2"

echo "Password not found in the given file."
