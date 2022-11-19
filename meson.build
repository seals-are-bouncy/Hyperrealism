project('Hyperrealism', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

cmake = import('cmake')

glfw_cmake = cmake.subproject('glfw')

# Fetch the dependency object
glfw = glfw_cmake.dependency('glfw')

executable('hyperrealism',
           'src/engine.c',
           install : true, dependencies: [glfw])
# change src/engine.c to src/studio.c when file is created.
executable('studio',
           'src/engine.c', 
           install : true, dependencies: [glfw])
