cmake_minimum_required(VERSION 3.21)
project(demo LANGUAGES C CXX)

add_subdirectory(deps/piot/secure-random-c/src/)
add_subdirectory(src/)