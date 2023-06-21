#!/bin/bash
gcc *.o -fPIC -shared -o libsyringe.so
LD_PRELOAD=$PWD/libsyringe.so
