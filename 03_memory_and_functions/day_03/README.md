# Day 03: RAII (Resource Acquisition Is Initialization)

## Learning Objectives

- Understand RAII as the core C++ resource management idiom
- Learn smart pointers: unique_ptr, shared_ptr
- Implement RAII wrappers for resources
- Understand scope-based resource management

## C++ Concepts

- **RAII**: Acquire in constructor, release in destructor
- **unique_ptr**: Exclusive ownership, no copy, move only
- **shared_ptr**: Shared ownership with reference counting
- **weak_ptr**: Non-owning observer to shared_ptr
- **make_unique/make_shared**: Preferred creation methods

## Math Concepts

- **Reference counting**: shared_ptr uses count to track owners
- **Ownership graphs**: Visualizing resource lifetimes

## Your Task

Implement RAII patterns:
1. File handle wrapper (auto-closing)
2. Memory buffer wrapper (auto-freeing)
3. Practice with unique_ptr
4. Practice with shared_ptr

## Files to Implement

- `src/resource.cpp` — implement RAII wrapper classes
- `src/main.cpp` — demonstrate automatic cleanup
