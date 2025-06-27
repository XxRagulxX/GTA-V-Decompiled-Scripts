cmake_minimum_required(VERSION 3.15)
project(GTAV_Decompiler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Platform-specific settings
if(WIN32)
    add_executable(GTAV-Decompiler src/main.cpp)
    target_compile_options(GTAV-Decompiler PRIVATE /O2 /MP)
else()
    message(FATAL_ERROR "This project is designed for Windows only")
endif()

# Threading support
find_package(Threads REQUIRED)
target_link_libraries(GTAV-Decompiler PRIVATE Threads::Threads)