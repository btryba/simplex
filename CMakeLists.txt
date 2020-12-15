cmake_minimum_required(VERSION 3.0.0)
project(Simplex VERSION 0.1.0)

#execute_process(COMMAND git submodule update --remote --merge)

include(CTest)
enable_testing()

set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(OSBitness 64)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE})

add_subdirectory("simplex-lib")
add_subdirectory("simplex-tui")
add_subdirectory("simplexDevelopment")

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)