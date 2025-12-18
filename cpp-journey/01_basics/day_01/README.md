# Day 01: Conditionals and Basic I/O

## Learning Objectives

- Understand C++ `if`, `else if`, `else` syntax
- Learn `std::cout` and `std::cin` for console I/O
- Practice comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- Understand logical operators (`&&`, `||`, `!`)

## C++ Concepts

- **Streams**: `std::cout` writes to stdout, `std::cin` reads from stdin
- **Conditionals**: C++ uses braces `{}` for blocks (optional for single statements)
- **Type safety**: Comparisons are type-aware; mixing types may cause warnings

## Math Concepts

- **Number classification**: even/odd, positive/negative/zero
- **Range checking**: determining if a value falls within bounds
- **Modular arithmetic**: using `%` operator for divisibility tests

## Your Task

Implement a number analyzer that:
1. Reads an integer from the user
2. Determines if it's positive, negative, or zero
3. Determines if it's even or odd
4. Checks if it's within a specified range
5. Outputs all findings

## Files to Implement

- `src/conditionals.cpp` — implement the analysis functions
- `src/main.cpp` — implement the main program flow

## Build and Run

```bash
cd cpp-journey/build && make conditionals && ./01_basics/day_01/conditionals
```