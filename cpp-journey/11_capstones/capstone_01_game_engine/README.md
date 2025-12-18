# Capstone 1: Game Engine Core

A minimal game engine demonstrating C++ systems programming with TypeScript editor.

## Architecture
```
capstone_01_game_engine/
├── cpp/                    # Engine core
│   ├── include/
│   │   ├── engine.hpp      # Main engine class
│   │   ├── renderer.hpp    # Rendering abstraction
│   │   ├── scene.hpp       # Scene graph
│   │   ├── entity.hpp      # Entity-Component
│   │   └── math.hpp        # Game math
│   └── src/
├── ts/                     # Editor UI
│   ├── src/
│   │   └── editor.ts       # Web-based editor
│   └── package.json
└── README.md
```

## C++ Focus
- Component architecture
- Memory pools
- Fixed-point math
- Frame timing

## TypeScript Integration
- Scene editor
- Property inspector
- Asset browser
