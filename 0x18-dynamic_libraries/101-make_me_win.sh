#!/bin/bash
wget -P /tmp https://github.com/speak2debby/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/libmask.so
