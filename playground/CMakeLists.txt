add_executable(lgp_pick_place lgp_pick_place.cpp)
add_executable(graph graph.cpp)
add_executable(komo_tutorial komo_tutorial.cpp)
target_link_libraries(lgp_pick_place rai)
target_link_libraries(graph rai)
target_link_libraries(komo_tutorial rai)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/model.g ${CMAKE_CURRENT_BINARY_DIR}/model.g COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/rai.cfg ${CMAKE_CURRENT_BINARY_DIR}/rai.cfg COPYONLY)