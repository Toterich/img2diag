cmake_minimum_required(VERSION 3.20)

project(img2diag)

find_package(OpenCV CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(core)
add_subdirectory(app)