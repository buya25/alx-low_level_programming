#!/bin/bash

# Download the file from GitHub
wget -P /tmp https://github.com/buya25/alx-low_level_programming/raw/0x18-dynamic_libraries/libmask.so

# Set the LD_PRELOAD environment variable
export LD_PRELOAD=/tmp/libmask.so
