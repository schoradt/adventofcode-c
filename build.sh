#!/bin/bash

mkdir -p build && cd build
cmake .. 
make
make CTEST_OUTPUT_ON_FAILURE=1 test
