cmake_minimum_required(VERSION 3.16)

project(FOOBAR LANGUAGES CXX)

set(CMAKE_CXX_STANDARD "20")

add_executable(baz)

target_sources(baz PRIVATE
    main.cpp
    foobar.cpp
    foobar.h
)

target_precompile_headers(baz PRIVATE
    [["pch.hpp"]]
)

target_include_directories(baz PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
)

