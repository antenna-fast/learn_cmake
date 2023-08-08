
cmake_minimum_required(VERSION 2.8)
project(test_lib)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC")

include_directories(${PROJECT_SOURCE_DIR}/include)

# OpenCV
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Eigen
SET(EIGEN_INCLUDE_DIR "/usr/include/eigen3")
include_directories(${EIGEN_INCLUDE_DIR})

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(SRC src/lib_source.cpp)

# generate lib
add_library(test SHARED ${SRC})

# load lib
# target_link_libraries(test  
#                       ${OpenCV_LIBS} 
#                       )