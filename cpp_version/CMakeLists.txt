cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(test_detect VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} main.cpp faceDetect.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE ${OpenCV_LIBS})

