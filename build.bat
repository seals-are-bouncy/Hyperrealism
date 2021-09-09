@echo off
rem  ____________________________________________
rem             HYPERREALISM 2021
rem                created by Sir Obsidian
rem  
rem  This is a very cool project.
rem  If you steal it you're incredibly uncool.
rem  Like seriously this is VERY cool.
rem  LIKE I WILL FIND YOU AND KILL YOU.
rem  If you steal my work :> 
rem  So yea, don't steal my work, it's PRECIOUS.
rem  MY PRECCIOUUSSSSSSSSSSSSSSSSSSSs.
rem  ____________________________________________

echo [HYPERREALISM] Clearing CMakeCache
rmdir build /S /Q
mkdir build
echo [HYPERREALISM] Building..
cd build
cmake ..
cd ..
cmake --build build --config Release
echo [HYPERREALISM] Script finished.