project(lesson08 C)

add_executable(containers1 containers1.c)
add_executable(containers2 containers2.c)
include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/libfdr)
foreach (p containers1 containers2)
  target_link_libraries(${p} fdr debug_printf)
endforeach (p)

if (USE_IGRAPH)
  add_executable(graph_basics graph_basics.c)
  add_executable(graph_adjacency graph_adjacency.c)
  foreach (p graph_basics graph_adjacency)
    target_link_libraries(${p} ${IGRAPH_LIBS} fdr)
  endforeach (p)
endif (USE_IGRAPH)