#!/bin/bash
wget -P /tmp https://github.com/Ernyson/alx-low_level_programming/blob/master/0x18-dynamic_libraries/my_functions.so
export LD_PRELOAD=/tmp/my_functions.so
