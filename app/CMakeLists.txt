cmake_minimum_required(VERSION 3.4.1)


add_library(
        native-lib
        SHARED
        src/main/cpp/native-lib.cpp
        src/main/cpp/Triangle.cpp
        src/main/cpp/Triangle.h)

find_library(
        log-lib
        log)


target_link_libraries(
        native-lib
        GLESv2
        ${log-lib})

include_directories(
        src/main/cpp/)