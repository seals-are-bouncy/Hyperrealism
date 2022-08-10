cmake_minimum_required(VERSION 3.10)

project(engine DESCRIPTION "The rendering engine of Hyperrealism")

file(GLOB_RECURSE source_list "src/*.c" "src/*/*.c")

add_executable(${PROJECT_NAME} ${source_list})
# Linking libraries
target_link_libraries(${PROJECT_NAME}
    glfw
		vulkan
)

