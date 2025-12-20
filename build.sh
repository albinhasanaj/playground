#!/bin/bash
# Mac/Linux build script for cpp-journey
# Uses Ninja if available, otherwise Unix Makefiles

echo "[cpp-journey] Building on $(uname)..."

# Create build directory if it doesn't exist
mkdir -p build

# Determine generator - prefer Ninja if available
if command -v ninja &> /dev/null; then
    GENERATOR="Ninja"
else
    GENERATOR="Unix Makefiles"
fi

echo "[cpp-journey] Using generator: $GENERATOR"

# Check if CMake cache exists and was configured for a different generator
if [ -f build/CMakeCache.txt ]; then
    if ! grep -q "CMAKE_GENERATOR:INTERNAL=$GENERATOR" build/CMakeCache.txt 2>/dev/null; then
        echo "[cpp-journey] Detected different build config, cleaning..."
        rm -rf build
        mkdir -p build
    fi
fi

# Configure with CMake
echo "[cpp-journey] Configuring with CMake..."
cmake -G "$GENERATOR" -DCMAKE_BUILD_TYPE=Debug -B build -S .
if [ $? -ne 0 ]; then
    echo "[cpp-journey] CMake configuration failed!"
    exit 1
fi

# Build using all available cores
echo "[cpp-journey] Building..."
cmake --build build -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)
if [ $? -ne 0 ]; then
    echo "[cpp-journey] Build failed!"
    exit 1
fi

echo "[cpp-journey] Build successful!"
