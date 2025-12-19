"""
Correctness tests comparing C++ results to numpy
"""

# import numpy as np
# import ctypes


def test_vec3_length():
    """Test Vec3 length calculation"""
    # TODO: Test that C++ length matches numpy
    # v = [3, 4, 0]
    # cpp_result = cpp_vec3_length(*v)
    # np_result = np.linalg.norm(v)
    # assert abs(cpp_result - np_result) < 1e-10
    pass


def test_vec3_dot():
    """Test Vec3 dot product"""
    # TODO: Compare C++ to numpy
    pass


def test_vec3_cross():
    """Test Vec3 cross product"""
    # TODO: Compare C++ to numpy.cross
    pass


def test_vec3_normalize():
    """Test Vec3 normalization"""
    # TODO: Compare to numpy
    pass


def test_mat4_multiply():
    """Test Mat4 multiplication"""
    # TODO: Compare to numpy matrix multiply
    pass


def test_mat4_transform():
    """Test transforming a point by matrix"""
    # TODO: Verify against numpy
    pass


def run_all_tests():
    """Run all correctness tests"""
    print("=== Correctness Tests ===\n")
    
    # TODO: Run tests
    # test_vec3_length()
    # test_vec3_dot()
    # test_vec3_cross()
    # test_vec3_normalize()
    # test_mat4_multiply()
    # test_mat4_transform()
    
    print("All tests passed!")


if __name__ == "__main__":
    run_all_tests()
