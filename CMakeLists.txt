cmake_minimum_required(VERSION 3.5)
project(CDictionary)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

set(SOURCE_FILES main.c nr_dictionary.h nr_dictionary.c)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
add_executable(CDictionary ${SOURCE_FILES})