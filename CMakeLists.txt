cmake_minimum_required(VERSION 3.1)

project(nodespdlog VERSION 0.1.0)

add_subdirectory(deps/spdlog)

include(NodeJS.cmake)
nodejs_init()

add_nodejs_module(${PROJECT_NAME} src/main.cc)
target_include_directories(${PROJECT_NAME} PUBLIC deps/spdlog/include)
target_link_libraries(${PROJECT_NAME} spdlog)