cmake_minimum_required(VERSION 3.16)

project(MessageLibProject VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)

add_library(message_lib STATIC
    libraries/message_lib.cpp
)

target_include_directories(message_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(main
    src/main.cpp
)

target_link_libraries(main PRIVATE message_lib)
