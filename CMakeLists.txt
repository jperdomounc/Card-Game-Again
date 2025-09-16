cmake_minimum_required(VERSION 4.0.3)
project(blitz-again)
include_directories(include)
add_executable(${PROJECT_NAME} src/main.cpp include/Player.h src/Player.cpp) 