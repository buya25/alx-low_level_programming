#!/bin/bash
wget -O /tmp/libdynamic.so https://github.com/buya25/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so
