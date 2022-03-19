add_library(graphics INTERFACE)

target_sources(graphics INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/Screen.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Pixel.cpp
)

target_include_directories(graphics INTERFACE ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(graphics INTERFACE pico_stdlib)