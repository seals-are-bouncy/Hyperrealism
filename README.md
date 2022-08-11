# Hyperrealism

Hyperrealism is a very photorealistic rendering engine written in C++.

## Engine

The engine is the rendering library / application which renders Hyperrealism projects.
- To compile the Engine you can run the commands in the following order:
```
cd Engine
mkdir -p build
cmake -B build/ .
cmake --build build
```

## Studio

The studio is the program used to create Hyperrealism projects for the Engine.
- To compile the Studio the git project needs to be cloned recursively due to dependencies.
- To compile the Studio you can run the commands in the following order:
```
cd Studio
mkdir -p build
cmake -B build/ .
cmake --build build
```

## Credits.

Thank you 'Dear Imgui' for your amazing GUI project. Without your examples Hyperrealism could never exist.
