#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/yo-aiv1/alx-low_level_programming/master/0x18-dynamic_libraries/101.so
export LD_PRELOAD=/tmp/nrandom.so
