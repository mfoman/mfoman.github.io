cmake_minimum_required(VERSION 3.12)
project(UnionFind VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(UnionFind main.cpp)

# As of CMake 3.12, you can pass the CONFIGURE_DEPENDS flag to file(GLOB to automatically check and reset the file lists any time the build is invoked.
file(GLOB_RECURSE sources CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/src/*.h)

# add_executable(UnionFind main.cpp)
add_executable(sources ${sources})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
