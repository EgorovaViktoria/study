cmake_minimum_required(VERSION 3.2...3.27.5)

project(HW)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(multilevel_app)
add_subdirectory(refactoring)
add_subdirectory(sort)
add_subdirectory(unit_test_example)

set(CMAKE_SUPRESS_REGENERATION true)
