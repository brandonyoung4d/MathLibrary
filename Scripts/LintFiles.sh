#!/bin/sh
BASEDIR=$(dirname "$0")
clang-format -i -style=file $BASEDIR/../Source/*.cpp $BASEDIR/../Source/*.hpp $BASEDIR/../Source/*.inl
