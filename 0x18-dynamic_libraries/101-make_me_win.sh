#!/bin/bash
cp /path/to/your/compiled/shared/library.so /tmp/library.so
export LD_PRELOAD=/tmp/library.so

