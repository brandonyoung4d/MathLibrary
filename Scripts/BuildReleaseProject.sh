#!/bin/sh
mkdir -p Build/Release
cd Build/Release
cmake -DCMAKE_BUILD_TYPE=Release ../..
make
