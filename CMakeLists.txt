cmake_minimum_required(VERSION 3.1)

project(nodeg3log VERSION 0.1.0)

add_subdirectory(deps/g3log)

include(NodeJS.cmake)
nodejs_init()

add_nodejs_module(${PROJECT_NAME} src/main.cc)
target_include_directories(${PROJECT_NAME} PUBLIC deps/g3log/src)
target_link_libraries(${PROJECT_NAME} g3logger)