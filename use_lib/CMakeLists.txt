
cmake_minimum_required(VERSION 2.8)
project(use_lib)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC")

include_directories(${PROJECT_SOURCE_DIR}/../add_library/include)

set(SRC use_lib.cpp)
add_executable(use_lib ${SRC})

target_link_libraries(use_lib
    ${PROJECT_SOURCE_DIR}/../add_library/lib/libtest.so
)
