cmake_minimum_required(VERSION 3.7)

# set the project name
project(TempCMakeProject)

cmake_policy(SET CMP0015 OLD)

set(CMAKE_PROJECT_STATIC_LIBS_NAME ${CMAKE_PROJECT_NAME}-static)

add_executable(TempCMakeProject main.cpp)

set_target_properties(TempCMakeProject PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
    )

add_library(
    ${CMAKE_PROJECT_STATIC_LIBS_NAME}
    "${PROJECT_SOURCE_DIR}/TempClass.hpp"
    "${PROJECT_SOURCE_DIR}/TempClass.cpp"
)

include_directories("${PROJECT_SOURCE_DIR}/")

target_link_libraries(
    TempCMakeProject
    PRIVATE
    ${CMAKE_PROJECT_STATIC_LIBS_NAME}
)