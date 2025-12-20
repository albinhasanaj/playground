# C++ Learning Playground - Complete Structure

A comprehensive C++ learning curriculum organized into 11 levels, progressing from basics to advanced capstone projects. Each level contains 4 learning days plus an end project.

---

## 📁 Repository Overview

```
cpp-playground/
├── 01_basics/                   # Level 1: Fundamentals
├── 02_core_cpp/                 # Level 2: Core C++ Features
├── 03_memory_and_functions/     # Level 3: Memory Management
├── 04_math_foundations/         # Level 4: Linear Algebra
├── 05_data_structures/          # Level 5: Containers
├── 06_algorithms/               # Level 6: Algorithm Implementation
├── 07_systems_cpp/              # Level 7: File I/O & Systems
├── 08_databases_cpp/            # Level 8: Database Internals
├── 09_performance/              # Level 9: Performance Optimization
├── 10_advanced_math/            # Level 10: Numerical Methods
├── 11_capstones/                # Level 11: Final Projects
├── CMakeLists.txt               # Root build configuration
├── build.sh / build.bat         # Build scripts
└── README.md                    # Project overview
```

---

## 📘 Level 01: Basics

Foundation of C++ programming - control flow, arrays, functions, and code organization.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Conditionals and Basic I/O | `if/else` statements, `std::cout/cin`, comparison operators (`==`, `!=`, `<`, `>`), logical operators (`&&`, `\|\|`, `!`), number classification (even/odd, positive/negative) |
| **Day 02** | Loops and Boolean Logic | `for`, `while`, `do-while` loops, `break/continue`, boolean expressions, short-circuit evaluation, mathematical computations (summation, factorial, prime checking, Fibonacci) |
| **Day 03** | Arrays and std::vector | C-style arrays, `std::vector`, vector methods (`push_back`, `size`, `at`), range-based for loops, iterators, statistics (mean, median, min/max, standard deviation) |
| **Day 04** | Functions | Function declaration/definition, parameters (by value), return types, function overloading, default parameters, recursion, math functions (power, GCD, LCM, binomial coefficient) |
| **Day 05** | Headers and Compilation Units | Header files (`.hpp`), source files (`.cpp`), header guards (`#pragma once`), compilation process, One Definition Rule, multi-file organization |
| **End Project** | Terminal Calculator & Number Analyzer | Full-featured calculator with expression parsing, number analyzer with prime factorization, perfect/abundant/deficient number detection |

---

## 📙 Level 02: Core C++

Deeper C++ concepts - references, const correctness, user-defined types, and OOP basics.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | References vs Values | Pass-by-value vs pass-by-reference, `const` references, reference semantics, lifetime considerations, swap algorithms, in-place modification |
| **Day 02** | Const Correctness | `const` keyword usage, const references/pointers, const member functions, `constexpr`, mathematical constants (π, e, φ), pure functions |
| **Day 03** | Enums and Structs | Classic enums vs `enum class`, struct definition, designated initializers (C++20), aggregate initialization, geometric shapes (Point2D, Point3D, rectangles, circles) |
| **Day 04** | Basic Classes | Classes vs structs, access specifiers (`public`, `private`, `protected`), constructors, `this` pointer, getter/setter pattern, Vector2D class with operations |
| **End Project** | Math Core Library | C++ math library with TypeScript bindings via N-API, Vector2D/3D, Matrix operations, statistics functions, shared library (.so/.dylib/.dll) |

---

## 📗 Level 03: Memory and Functions

Memory management, pointers, RAII, and cross-language integration.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Stack vs Heap Memory | Automatic vs dynamic storage, `new`/`delete`, memory layout, scope and lifetime, memory complexity O(1) vs O(n), cache locality |
| **Day 02** | Pointers | Pointer declaration, address-of (`&`) and dereference (`*`) operators, pointer arithmetic, arrays and pointers, `nullptr`, array indexing via pointers |
| **Day 03** | RAII | Resource Acquisition Is Initialization, `unique_ptr`, `shared_ptr`, `weak_ptr`, `make_unique`/`make_shared`, file handle and memory buffer wrappers |
| **Day 04** | Python Bindings with ctypes | C ABI, `extern "C"`, shared libraries, ctypes wrapper, memory ownership, array passing between C++ and Python |
| **End Project** | Vector Math Engine | High-performance Vec3 and Mat4 classes, transformation operations, Python benchmarking harness with matplotlib visualization |

---

## 📕 Level 04: Math Foundations

Linear algebra and numerical computing fundamentals.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Matrix Operations | Row-major vs column-major storage, template matrix classes, operator overloading, matrix addition/subtraction/multiplication, transpose, determinant, trace |
| **Day 02** | Transformations | Transformation matrices, composition order (scale → rotate → translate), homogeneous coordinates, affine transformations, rotation matrices, Euler angles vs quaternions |
| **Day 03** | Numerical Stability | IEEE 754 floating point, epsilon comparisons, catastrophic cancellation, condition numbers, Kahan summation, loss of significance |
| **Day 04** | Python Visualization | matplotlib visualization of transformations, C++ matrix library with Python exports, eigenvalue/eigenvector plotting |
| **End Project** | Linear Algebra Library | Complete linear algebra library with Jupyter notebook demos, LU decomposition, eigenvalue computation, linear system solving, least squares |

---

## 📓 Level 05: Data Structures

Implementing fundamental data structures from scratch.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Dynamic Arrays | Implement `std::vector` from scratch, template classes, capacity vs size, amortized O(1) append, copy/move semantics, growth factor analysis |
| **Day 02** | Linked Lists | Singly and doubly linked lists, node-based allocation, pointer manipulation, iterator pattern |
| **Day 03** | Hash Maps | Hash table implementation, chaining vs open addressing, hash functions, collision resolution, load factor, rehashing |
| **Day 04** | TypeScript CLI Integration | C++ containers as shared library, TypeScript bindings, CLI tool for data storage/retrieval |
| **End Project** | STL-Style Container Library | Full container library (vector, list, map, set) with iterators, exception safety, move semantics, Node.js bindings for TypeScript data store |

---

## 📔 Level 06: Algorithms

Classic algorithm implementation and analysis.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Sorting Algorithms | Bubble Sort, Selection Sort, Insertion Sort (O(n²)), Merge Sort, Quick Sort, Heap Sort (O(n log n)), time/space complexity, stability |
| **Day 02** | Searching Algorithms | Linear search, binary search, interpolation search |
| **Day 03** | Graph Algorithms | BFS, DFS, Dijkstra's shortest path algorithm |
| **Day 04** | Python Benchmark Harness | Algorithm benchmarking, performance chart generation |
| **End Project** | Algorithm Benchmark Suite | Complete benchmarking suite, CSV output, matplotlib visualization, performance analysis |

---

## 📒 Level 07: Systems C++

File I/O, serialization, and systems programming.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | File I/O | `ifstream`, `ofstream`, `fstream`, text vs binary modes, exception-based error handling, RAII file handles |
| **Day 02** | Binary Formats | Custom binary file format design, struct packing/alignment, endianness, magic numbers, versioning, fixed vs variable length records |
| **Day 03** | Serialization | JSON parsing/generation, binary protocol design, schema evolution |
| **Day 04** | TypeScript Express File Service | Express.js HTTP handling, C++ file processing library, TypeScript bindings via ffi-napi |
| **End Project** | File-Backed Key-Value Store | Persistent KV store with B-tree index, Express.js REST API, TypeScript client SDK |

---

## 📚 Level 08: Databases C++

Database internals and query execution.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Table Storage | Row-based table storage, fixed-size records, variable-length fields, page management |
| **Day 02** | B-Tree Indexes | B-tree index implementation for fast lookups |
| **Day 03** | Query Execution | Simple query execution engine |
| **Day 04** | Next.js Query Interface | Web-based SQL query interface |
| **End Project** | Mini SQL Engine | Complete SQL engine with web UI |

---

## 📖 Level 09: Performance

Performance optimization and profiling.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Custom Allocators | Memory allocator implementation |
| **Day 02** | Cache Optimization | Cache-friendly data structures and algorithms |
| **Day 03** | Benchmarking Methodology | Proper benchmarking techniques |
| **Day 04** | Python Profiling Analysis | Performance profiling with Python tools |
| **End Project** | Custom Memory Allocator with Dashboard | Full allocator implementation with monitoring dashboard |

---

## 📝 Level 10: Advanced Math

Numerical methods and scientific computing.

| Day | Topic | Learning Content |
|-----|-------|------------------|
| **Day 01** | Numerical Integration and Differentiation | Numerical calculus methods |
| **Day 02** | Optimization | Optimization algorithms |
| **Day 03** | Physics Simulation | Physics engine basics |
| **Day 04** | Jupyter Notebook Integration | Interactive Python/C++ development |
| **End Project** | Numerical Solver Framework | Complete numerical computing framework |

---

## 🏆 Level 11: Capstone Projects

Three comprehensive projects combining all learned skills.

### Capstone 1: Game Engine Core
A minimal game engine with TypeScript web editor.

| Component | Description |
|-----------|-------------|
| **C++ Engine** | Entity-component architecture, memory pools, fixed-point math, frame timing |
| **TypeScript Editor** | Web-based scene editor, property inspector, asset browser |

### Capstone 2: Compiler Frontend
Lexer and parser for a simple programming language.

| Component | Description |
|-----------|-------------|
| **C++ Core** | Lexer, parser, AST representation |
| **Python Testing** | Test suite for compiler validation |

### Capstone 3: Distributed System
Network node for distributed computing.

| Component | Description |
|-----------|-------------|
| **C++ Node** | Network node implementation, message passing |
| **TypeScript** | Coordination service for node orchestration |

---

## 🛠️ Building the Project

```bash
# From root directory
mkdir -p build && cd build
cmake ..
cmake --build .
```

Or use the provided scripts:
```bash
./build.sh      # macOS/Linux
build.bat       # Windows
```

---

## 📊 Curriculum Progression

```
Basics → Core C++ → Memory → Math → Data Structures → Algorithms
                                                          ↓
                    Capstones ← Adv Math ← Performance ← Databases ← Systems
```

Each level builds on previous knowledge, with end projects that combine multiple concepts.
