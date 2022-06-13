#!/bin/bash
wget -P /tmp/win.so https://github.com/devgracie/alx-low_level_programming/blob/master/0x18-dynamic_libraries/wins.so
export LD_PRELOAD=/tmp/wins.so
