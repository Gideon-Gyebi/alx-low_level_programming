#!/bin/bash
wget -P /tmp/ https://github.com/Gideon-Gyebi/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libsyringe.so
export LD_PRELOAD=/tmp/libsyringe.so
