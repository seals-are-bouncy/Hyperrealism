@echo off
rem echo [HYPERREALISM] Resetting CMAKE Cache.
cd build
echo [HYPERREALISM] Building..
cmake .. "-DCMAKE_TOOLCHAIN_FILE=C:\vcpkg\scripts\buildsystems\vcpkg.cmake"  
cd Release
echo [HYPERREALISM] Executing..
main.exe
cd ../../
echo [HYPERREALISM] Script finished!