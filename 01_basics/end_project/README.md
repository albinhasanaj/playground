# Level 01 End Project: Terminal Calculator & Number Analyzer

## Overview

This capstone project combines all concepts from Level 01:
- Conditionals (Day 1)
- Loops (Day 2)
- Arrays/Vectors (Day 3)
- Functions (Day 4)
- Multi-file organization (Day 5)

## Features to Implement

### Calculator
- Basic arithmetic: +, -, *, /
- Power and modulo operations
- Expression parsing (simple: "5 + 3")
- History of calculations

### Number Analyzer
- Prime factorization
- Divisibility analysis
- Statistics on a list of numbers
- Number properties (perfect, abundant, deficient)

## C++ Concepts Used

- All control structures (if, for, while)
- Functions with various signatures
- std::vector for dynamic storage
- Multiple compilation units
- Header/source file organization

## Math Concepts

- **Prime factorization**: Breaking n into prime factors
- **Perfect numbers**: n = sum of its proper divisors (e.g., 6 = 1+2+3)
- **Abundant numbers**: sum of divisors > n
- **Deficient numbers**: sum of divisors < n

## Architecture

```
end_project/
├── include/
│   ├── calculator.hpp   — Calculator operations
│   ├── parser.hpp       — Expression parsing
│   └── analyzer.hpp     — Number analysis
└── src/
    ├── main.cpp         — Main menu and flow
    ├── calculator.cpp   — Calculator implementation
    ├── parser.cpp       — Parser implementation
    └── analyzer.cpp     — Analyzer implementation
```

## Your Task

Implement all TODO comments across all files to create a fully functional
terminal-based calculator and number analyzer.
