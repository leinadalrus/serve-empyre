#! /usr/var/bin/bash

mkdir build
cd build || exit
cmake -DCMAKE_PREFIX_PATH=./lib/libtorch-win-shared-with-deps-debug-1.8.2+cpu\\libtorch\\
cmake --build . --config Debug