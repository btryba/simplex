cmake_minimum_required(VERSION 3.0.0)
project(simplexDevelopment VERSION 0.1.0)

include_directories(".")
include_directories("..")

set (simplexDevelopment_LIBS ${simplex_lib_LINK})
add_executable(simplexDevelopment main.cpp)
target_link_libraries(simplexDevelopment ${simplexDevelopment_LIBS})