/**
 * MathCore - TypeScript bindings for C++ math library
 * 
 * This file demonstrates how to call C++ from TypeScript using ffi-napi.
 * The C++ library must be compiled as a shared library first.
 */

// TODO: Import ffi-napi
// import ffi from 'ffi-napi';
// import ref from 'ref-napi';

// Path to the compiled shared library
// TODO: Set correct path based on OS
// - macOS: '../cpp/build/libmathcore.dylib'
// - Linux: '../cpp/build/libmathcore.so'
// - Windows: '../cpp/build/mathcore.dll'
const LIBRARY_PATH = '../cpp/build/libmathcore';

/**
 * Define the C function signatures from our library
 */
// TODO: Create FFI bindings
// const mathcore = ffi.Library(LIBRARY_PATH, {
//   'vector2_magnitude': ['double', ['double', 'double']],
//   'vector2_dot': ['double', ['double', 'double', 'double', 'double']],
//   'vector3_magnitude': ['double', ['double', 'double', 'double']],
//   'vector3_dot': ['double', ['double', 'double', 'double', 'double', 'double', 'double']],
//   'matrix2x2_determinant': ['double', ['double', 'double', 'double', 'double']],
//   'stats_mean': ['double', ['pointer', 'int']],
//   'stats_stddev': ['double', ['pointer', 'int']],
// });

/**
 * TypeScript wrapper class for Vector2D operations
 */
export class Vector2D {
    constructor(public x: number, public y: number) { }

    magnitude(): number {
        // TODO: Call mathcore.vector2_magnitude(this.x, this.y)
        return 0;
    }

    dot(other: Vector2D): number {
        // TODO: Call mathcore.vector2_dot(this.x, this.y, other.x, other.y)
        return 0;
    }

    add(other: Vector2D): Vector2D {
        // TODO: Implement in pure TS (or call C++ if needed)
        return new Vector2D(0, 0);
    }

    subtract(other: Vector2D): Vector2D {
        // TODO: Implement
        return new Vector2D(0, 0);
    }

    scale(scalar: number): Vector2D {
        // TODO: Implement
        return new Vector2D(0, 0);
    }

    normalized(): Vector2D {
        // TODO: Implement
        return new Vector2D(0, 0);
    }
}

/**
 * TypeScript wrapper class for Vector3D operations
 */
export class Vector3D {
    constructor(public x: number, public y: number, public z: number) { }

    magnitude(): number {
        // TODO: Call mathcore.vector3_magnitude(this.x, this.y, this.z)
        return 0;
    }

    dot(other: Vector3D): number {
        // TODO: Call C++ function
        return 0;
    }

    cross(other: Vector3D): Vector3D {
        // TODO: Implement cross product
        return new Vector3D(0, 0, 0);
    }
}

/**
 * TypeScript wrapper for Matrix2x2 operations
 */
export class Matrix2x2 {
    constructor(
        public m00: number, public m01: number,
        public m10: number, public m11: number
    ) { }

    determinant(): number {
        // TODO: Call mathcore.matrix2x2_determinant(...)
        return 0;
    }

    static identity(): Matrix2x2 {
        return new Matrix2x2(1, 0, 0, 1);
    }

    static rotation(angleRadians: number): Matrix2x2 {
        // TODO: Create rotation matrix
        return Matrix2x2.identity();
    }
}

/**
 * Statistics functions wrapping C++ implementation
 */
export namespace Stats {
    export function mean(data: number[]): number {
        // TODO: Convert array to buffer and call mathcore.stats_mean
        return 0;
    }

    export function stddev(data: number[]): number {
        // TODO: Call mathcore.stats_stddev
        return 0;
    }

    export function variance(data: number[]): number {
        // TODO: Implement
        return 0;
    }
}

// === Demo / Test Code ===
function main() {
    console.log('=== MathCore TypeScript Demo ===\n');

    // TODO: Test Vector2D
    // const v1 = new Vector2D(3, 4);
    // console.log(`Vector (3, 4) magnitude: ${v1.magnitude()}`);  // Should be 5

    // TODO: Test Vector3D
    // const v2 = new Vector3D(1, 0, 0);
    // const v3 = new Vector3D(0, 1, 0);
    // console.log(`Cross product: ${v2.cross(v3)}`);  // Should be (0, 0, 1)

    // TODO: Test Matrix2x2
    // const m = new Matrix2x2(1, 2, 3, 4);
    // console.log(`Determinant: ${m.determinant()}`);  // Should be -2

    // TODO: Test Stats
    // const data = [1, 2, 3, 4, 5];
    // console.log(`Mean: ${Stats.mean(data)}`);  // Should be 3

    console.log('\nDemo completed!');
}

// Run if executed directly
main();
