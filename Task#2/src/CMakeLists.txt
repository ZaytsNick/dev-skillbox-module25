cmake_minimum_required(VERSION 3.28)

add_executable(TASK_2 main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h)
target_include_directories(TASK_2 PUBLIC ${MY_INCLUDE_DIR})
#target_include_directories(TASK_2 PUBLIC ${CMAKE_SOURCE_DIR}/disk)