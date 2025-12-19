@echo off
REM Windows build script for cpp-journey
REM Uses Ninja build system with MSYS2 UCRT64

echo [cpp-journey] Building on Windows with Ninja...

REM Ensure MSYS2 UCRT64 is in PATH
set PATH=C:\msys64\ucrt64\bin;%PATH%

REM Create build directory if it doesn't exist
if not exist build mkdir build

REM Check if CMake cache exists and was configured for a different generator
if exist build\CMakeCache.txt (
    findstr /C:"CMAKE_GENERATOR:INTERNAL=Ninja" build\CMakeCache.txt >nul 2>&1
    if errorlevel 1 (
        echo [cpp-journey] Detected different build config, cleaning...
        rmdir /s /q build
        mkdir build
    )
)

REM Configure with CMake using Ninja
echo [cpp-journey] Configuring with CMake...
cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Debug -B build -S .
if errorlevel 1 (
    echo [cpp-journey] CMake configuration failed!
    exit /b 1
)

REM Build
echo [cpp-journey] Building...
cmake --build build
if errorlevel 1 (
    echo [cpp-journey] Build failed!
    exit /b 1
)

echo [cpp-journey] Build successful!
