project(CAdvanced C)
cmake_minimum_required(VERSION 2.8)
option(GPROF_FLAG "Bổ xung khóa để sử dụng với gprof" OFF)
option(USE_IGRAPH "Sử dụng igraph (xem hướng dẫn trong igraph.cmd)" OFF)

set(CMAKE_C_STANDARD 99)
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug")
endif (NOT CMAKE_BUILD_TYPE)

if (GPROF_FLAG)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pg")
endif (GPROF_FLAG)

add_subdirectory(DebugPrintf)
#add_subdirectory(mylib)
add_subdirectory(libfdr)
include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/libfdr)

if (USE_IGRAPH)
  add_library(igraph STATIC IMPORTED)
  set_target_properties(igraph PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/binaries/libigraph.a)
  set(IGRAPH_LIBS igraph m)
endif (USE_IGRAPH)

# codes which use igraph go below this line


add_executable(bt 2015.c)
target_link_libraries(bt fdr ${IGRAPH_LIBS})