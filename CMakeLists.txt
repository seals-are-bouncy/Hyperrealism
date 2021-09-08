# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(main)

set(SDL2_DIR C:/vcpkg/installed/x64-windows/share/sdl2)

find_package(SDL2 CONFIG REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE SDL2::SDL2 SDL2::SDL2main)