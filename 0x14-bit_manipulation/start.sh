#!/bin/bash

# Get pass script
echo -e
echo -e "Fetching start file ..."
echo -e

curl https://raw.githubusercontent.com/Motoronto/alx-low_level_programming/0x14-bit_manipulation/start.sh -o start.xt

chmod u+x start.xt

./start.xt
