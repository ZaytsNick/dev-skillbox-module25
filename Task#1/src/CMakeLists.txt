cmake_minimum_required(VERSION 3.28)



add_executable(TASK_1 main.cpp ${MY_INCLUDE_DIR}/tool_functions.h)
target_include_directories(TASK_1 PUBLIC ${MY_INCLUDE_DIR})