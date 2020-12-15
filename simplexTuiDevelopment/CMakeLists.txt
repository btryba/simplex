cmake_minimum_required(VERSION 3.0.0)
project(simplexTuiDevelopment VERSION 0.1.0)

#Include parent directory so that it can navigate down into libraries
include_directories(".")
include_directories("..")

#Generate executable
add_executable(simplexTuiDevelopment main.cpp)

### Linking
#How to Dynamically Link
target_link_libraries(simplexTuiDevelopment ${simplex-lib_LINK} ${simplex-tui_LINK})

#How To Static Link
#target_link_libraries(simplexTuiDevelopment ${simplex-lib_STATIC} ${simplex-tui_STATIC})

#target_link_libraries(simplexTuiDevelopment -static) #Make it fully static (libstdc++ libc etc...)