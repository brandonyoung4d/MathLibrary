#!/bin/sh
mkdir -p Build/Debug
cd Build/Debug
cmake -DCMAKE_BUILD_TYPE=Debug ../..
make
