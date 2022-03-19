#!/bin/bash

mkdir -p vendor

cd vendor

git clone -b master --recurse-submodules https://github.com/raspberrypi/pico-sdk.git

git clone https://github.com/pimoroni/pimoroni-pico