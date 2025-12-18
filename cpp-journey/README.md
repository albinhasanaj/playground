# C++ Learning Journey

A comprehensive, structured C++ learning workspace designed for advanced programmers new to C++ syntax.

## Structure

This workspace contains 11 progressive levels:

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

## How to Use

1. Start at `01_basics/day_01/`
2. Read the `README.md` in each project
3. Fill in the `// TODO:` comments in the source files
4. Build and test your implementation
5. Move to the next day when complete
6. Complete the `end_project/` before advancing to the next level

## Building Projects

Each project uses CMake:

```bash
cd cpp-journey/01_basics/day_01
mkdir build && cd build
cmake ..
make
./program_name
```

## Prerequisites

- C++17 compatible compiler (g++, clang++)
- CMake 3.16+
- Make or Ninja

## Philosophy

- **No implementations provided** — only TODOs
- **Heavy math focus** — linear algebra, algorithms, numerical methods
- **Systems-oriented** — memory management, performance, real-world patterns
- **Clean architecture** — separate headers and source files
