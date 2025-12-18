# Level 05 End Project: STL-Style Container Library

Full container library with Node.js bindings for a TypeScript data store application.

## Architecture
```
end_project/
├── cpp/
│   ├── include/
│   │   ├── vector.hpp
│   │   ├── list.hpp
│   │   ├── map.hpp
│   │   └── set.hpp
│   └── src/
├── ts/
│   ├── src/
│   │   └── datastore.ts
│   └── package.json
└── README.md
```

## C++ Focus (70%)
- Template containers with iterators
- Exception safety guarantees
- Move semantics optimization

## TypeScript Integration (20%)
- Fullstack data store application
- REST API for container operations
