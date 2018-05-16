#!/bin/sh

if [ -z $2 ]
then
  echo "Usage: build.sh <source> <ouput>"
  exit
fi

arm-none-linux-gnueabi-g++ $1 -lpthread -lrt -ldl -lopencv_world -o $2
