#!/bin/bash

code="$PWD"
opts=-g
cd output/ > /dev/null
g++ $opts $code/serve_empyre -o serve_empyre
cd $code > /dev/null
