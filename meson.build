project('Hyperrealism', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

cmake = import('cmake')

glfw_cmake = cmake.subproject('glfw')

# Fetch the dependency object
glfw = glfw_cmake.dependency('glfw')

executable('Hyperrealism',
           'src/engine.c',
           install : true, dependencies: [glfw])
