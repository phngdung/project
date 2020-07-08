cmake_minimum_required(VERSION 2.8)
project(20182)

set(CMAKE_BUILD_TYPE Debug)


#duong dan den file chua file.h
include_directories(${PROJECT_SOURCE_DIR}/lib ${PROJECT_SOURCE_DIR}/igraph)

#duong dan den file.a
link_directories(${PROJECT_SOURCE_DIR}/lib/b)

  add_library(igraph STATIC IMPORTED)
  set_target_properties(igraph PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/binaries/libigraph.a)
  set(IGRAPH_LIBS igraph m)
add_executable(bt bt/2015.c )
target_link_libraries(bt libfdr.a ${IGRAPH_LIBS})