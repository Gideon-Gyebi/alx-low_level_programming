#!/bin/bash
wget -P /tmp/ https://raw.github.com/Gideon-Gyebi/alx-low_level_programming/master/0x18-dynamic_libraries/libsyringe.so
export LD_PRELOAD=/tmp/libsyringe.so
