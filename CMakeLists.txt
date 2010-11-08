cmake_minimum_required (VERSION 2.6)

if(DEFINED CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING "Choose the type of build, options are: Debug Release")
else()
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build, options are: Debug Release")
endif()

project(libpemelter CXX)

cmake_policy(SET CMP0015 NEW)

option(WITH_TESTS "Build unit tests" ON)
if (WITH_TESTS)
    #add_subdirectory(tests)
endif()

set(CMAKE_CXX_FLAGS_DEBUG "-g -O2 -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(pemelter_SOURCES PEMangler.cc PEParser.cc PEMelter.cc)

include_directories("../libmelter")
link_directories("../libmelter")

message("-- Building ${CMAKE_BUILD_TYPE} version.")

add_library(pemelter SHARED ${pemelter_SOURCES})
target_link_libraries(pemelter melter)
