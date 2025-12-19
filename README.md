# C++ Learning Journey

## Quick Build Commands

### Build Everything
```bash
# Windows
.\build.bat

# Mac/Linux
./build.sh
```

### Build & Run a Specific Target

**Example: `01_basics/day_01` (conditionals)**

```bash
# Windows (PowerShell)
$env:Path = "C:\msys64\ucrt64\bin;$env:Path"
cmake --build build --target conditionals
.\build\01_basics\day_01\conditionals.exe

# Mac/Linux
cmake --build build --target conditionals
./build/01_basics/day_01/conditionals
```

### Find Target Names
```bash
cmake --build build --target help
```

---

## Structure

| Level | Topic | Focus |
|-------|-------|-------|
| 01 | Basics | if/else, loops, arrays, functions, headers |
| 02 | Core C++ | references, const, enums, structs, classes |
| 03 | Memory & Functions | stack/heap, pointers, RAII, constructors |
| 04 | Math Foundations | matrices, transformations, numerical stability |
| 05 | Data Structures | dynamic arrays, linked lists, hash maps |
| 06 | Algorithms | sorting, searching, graphs |
| 07 | Systems C++ | file IO, binary formats, serialization |
| 08 | Databases | table layout, indexes, query execution |
| 09 | Performance | allocators, cache behavior, benchmarks |
| 10 | Advanced Math | numerical methods, optimization, simulation |
| 11 | Capstones | large real-world systems |

## Prerequisites

- C++17 compiler (g++, clang++)
- CMake 3.16+
- Ninja (Windows: MSYS2 UCRT64)
