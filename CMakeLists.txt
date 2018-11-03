cmake_minimum_required(VERSION 3.10)

project(game)

# Setting the C++ standard directly
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# Add include path
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/engine/src)

# Add engine library
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ext/engine)

# Add the executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Add link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE engine)

# Install binaries
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        LIBRARY DESTINATION ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
        ARCHIVE DESTINATION ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})