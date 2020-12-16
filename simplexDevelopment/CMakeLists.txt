cmake_minimum_required(VERSION 3.0.0)
project(simplexDevelopment VERSION 0.1.0)

#Include parent directory so that it can navigate down into libraries
include_directories("include")
include_directories("..")

#Generate executable
add_executable(${PROJECT_NAME} main.cpp)

### Linking
#How to Dynamically Link
target_link_libraries(${PROJECT_NAME} simplex-lib)

#How To Static Link
#target_link_libraries(${PROJECT_NAME} simplex-lib_STATIC)

#target_link_libraries(${PROJECT_NAME} -static) #Make it fully static (libstdc++ libc etc...)