# Level 03 End Project: Vector Math Engine

## Overview

A high-performance vector math engine in C++ with **Python benchmarking harness**.

## Architecture

```
end_project/
├── cpp/                    # C++ core (70%)
│   ├── CMakeLists.txt
│   ├── include/
│   │   ├── vec3.hpp        # 3D vector class
│   │   ├── mat4.hpp        # 4x4 matrix class
│   │   └── transform.hpp   # Transform operations
│   └── src/
├── python/                 # Python testing (10%)
│   ├── benchmark.py        # Performance benchmarks
│   ├── test_correctness.py # Correctness tests
│   └── visualize.py        # Results visualization
└── README.md
```

## C++ Concepts

- RAII for resource management
- Move semantics for efficiency
- Smart pointers where needed
- Memory-efficient data layout

## Math Concepts

- **3D Vectors**: Representation, operations
- **4x4 Matrices**: Transformations in homogeneous coords
- **Transforms**: Translation, rotation, scale, projection

## Your Task

### C++ Engine (70%)
1. Implement Vec3 class with all operations
2. Implement Mat4 class with transforms
3. Build as shared library for Python

### Python Testing (30%)
1. Benchmark C++ vs pure Python implementations
2. Generate comparison charts
3. Validate correctness against numpy
