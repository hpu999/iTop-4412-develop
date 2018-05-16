#!/bin/sh

if [ -z $2 ]
then
  echo "Usage: build.sh <source> <ouput>"
  exit
fi

arm-none-linux-gnueabi-g++ $1 -Wno-psabi -lpthread -lrt -ldl -latomic -lopencv_world -o $2
