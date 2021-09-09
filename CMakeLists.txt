#  ____________________________________________
#  HYPERREALISM 2021
#     created by Sir Obsidian
#  
#  This is a very cool project.
#  If you steal it you're incredibly uncool.
#  Like seriously this is VERY cool.
#  LIKE I WILL FIND YOU AND KILL YOU,
#  if you steal my work :> 
#  So yea, don't steal my work, it's PRECIOUS.
#  MY PRECCIOUUSSSSSSSSSSSSSSSSSSSs.
#  ____________________________________________

cmake_minimum_required(VERSION 3.0)
project(main)

set(SDL2_DIR C:/vcpkg/installed/x64-windows/share/sdl2)

find_package(SDL2 CONFIG REQUIRED)

file(GLOB source_files CONFIGURE_DEPENDS
            "*.h"
            "*.cpp"
            "src/*.cpp"
            "src/*.h"
            "src/*/*.cpp"
            "src/*/*.h"
    ) # lmao this totally worked.

add_executable(main ${source_files})

target_link_libraries(main PRIVATE SDL2::SDL2 SDL2::SDL2main)