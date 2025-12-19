# Day 04: Python Bindings with ctypes

## Learning Objectives

- Expose C++ code to Python using ctypes
- Understand C ABI and name mangling
- Work with different data types across language boundary
- Build shared libraries for FFI

## C++/Python Integration

- **ctypes**: Python's foreign function interface library
- **extern "C"**: Disable C++ name mangling for FFI
- **Shared library**: .so (Linux), .dylib (macOS), .dll (Windows)
- **Memory ownership**: Who allocates, who frees?

## Math Concepts

- **Array passing**: C arrays as pointers to Python
- **Return values**: Primitives vs structures

## Project Structure

```
day_04/
├── CMakeLists.txt        # Builds shared library
├── include/
│   └── memory_utils.hpp
├── src/
│   └── memory_utils.cpp
├── python/
│   ├── bindings.py       # ctypes wrapper
│   └── demo.py           # Usage demo
```

## Your Task

### C++ (build shared lib)
1. Create functions with extern "C" linkage
2. Implement array operations exposed to Python
3. Build as shared library

### Python (ctypes wrapper)
1. Load the shared library
2. Define function signatures
3. Call C++ from Python
4. Handle array data with numpy integration

## Files to Implement

- `src/memory_utils.cpp` — C++ implementations
- `python/bindings.py` — ctypes wrapper
- `python/demo.py` — demonstration script
