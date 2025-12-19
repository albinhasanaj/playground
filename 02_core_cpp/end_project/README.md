# Level 02 End Project: Math Core Library

## Overview

A math utilities library with **C++ core** and **TypeScript bindings**. This demonstrates:
- Building C++ as a shared library
- Exposing C++ to Node.js via N-API
- Using the library from TypeScript

## Architecture

```
end_project/
├── cpp/                    # C++ core (70%)
│   ├── CMakeLists.txt
│   ├── include/
│   │   ├── vector.hpp      # Vector math
│   │   ├── matrix.hpp      # Matrix operations
│   │   └── stats.hpp       # Statistics
│   └── src/
├── ts/                     # TypeScript integration (20%)
│   ├── package.json
│   ├── tsconfig.json
│   ├── src/
│   │   └── index.ts        # Node.js bindings usage
│   └── binding.gyp         # Native addon config
└── README.md
```

## C++ Concepts

- Building shared libraries (.so/.dylib/.dll)
- Export symbols for FFI
- Clean API design for bindings
- Const-correct interfaces

## Math Concepts

- **Vectors**: 2D/3D operations, dot/cross product
- **Matrices**: 2x2, 3x3, 4x4 operations
- **Statistics**: mean, variance, correlation

## TypeScript Integration

Using **node-addon-api** (N-API wrapper):
1. C++ functions wrapped in Napi::Function
2. Type conversion handled automatically
3. Async operations for heavy math

## Your Task

### C++ (70%)
1. Implement Vector2D, Vector3D classes
2. Implement Matrix2x2, Matrix3x3 classes
3. Implement statistics functions

### TypeScript (20%)
1. Create N-API bindings in `bindings/`
2. Write TypeScript wrapper with types
3. Create example usage in `ts/src/`

### Testing (10%)
1. C++ unit tests in `cpp/src/main.cpp`
2. TypeScript tests for binding correctness
