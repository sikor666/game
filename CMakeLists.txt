cmake_minimum_required(VERSION 3.10)

project(game)

# Setting the C++ standard directly
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# Set output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add include path
#include_directories(${CMAKE_BINARY_DIR}/include)

# Add engine library
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ext/engine)

# Add the executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Add link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE engine)
