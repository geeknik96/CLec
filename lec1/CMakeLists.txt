cmake_minimum_required(VERSION 2.8)
project(lec1 C)

add_definitions(-std=c11)

file(GLOB SOURCES *.c)

foreach(src ${SOURCES})
    get_filename_component(target ${src} NAME_WE)
    add_executable(${target} ${src})
endforeach()
