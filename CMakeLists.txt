cmake_minimum_required(VERSION 3.13)

include(vendor/pico-sdk/external/pico_sdk_import.cmake)

project(rgbpad C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PIMORONI_PICO_PATH "../vendor/pimoroni-pico/")
include(vendor/pimoroni-pico/pimoroni_pico_import.cmake)

pico_sdk_init()

add_executable(rgbpad
    src/main.cpp
)

target_link_libraries(rgbpad pico_stdlib pico_rgb_keypad)

pico_enable_stdio_usb(rgbpad 0)
pico_enable_stdio_uart(rgbpad 1)

pico_add_extra_outputs(rgbpad)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

add_subdirectory(vendor/pimoroni-pico/libraries/pico_rgb_keypad)