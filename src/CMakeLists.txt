cmake_minimum_required(VERSION 3.17)
project(runner)


set (DEBUG_OUT_DIR ${CMAKE_SOURCE_DIR}/bin/debug/)

add_custom_target(
   make_debug_outdir 
   "${CMAKE_COMMAND}" -E make_directory "${DEBUG_OUT_DIR}"
)

add_definitions(-g -std=c++20)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} secure_random)


#include_directories("/Users/eli/Documents/dev/emscripten-test-random/deps/piot/secure-random-c/src/include/secure-random")

set(CMAKE_EXECUTABLE_SUFFIX ".html")
set_target_properties(
 ${PROJECT_NAME} PROPERTIES
 LINK_FLAGS "-s WASM=1 -s EXPORTED_FUNCTIONS='[_main]'"
 RUNTIME_OUTPUT_DIRECTORY_DEBUG "${DEBUG_OUT_DIR}"
)
