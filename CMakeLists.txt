
cmake_minimum_required(VERSION 3.0.2)
project(robot-control)

add_compile_options(-std=c++14)
set(CMAKE_BUILD_TYPE Debug)


find_package(Eigen3 REQUIRED)

set(${PROJECT_INCLUDE_DIRS}
    ${PROJECT_SOURCE_DIR}/include
)

include_directories(
    include
    ${PROJECT_INCLUDE_DIRS}
    ${EIGEN3_INCLUDE_DIR}
)

add_executable(${PROJECT_NAME}
    src/Joint.cpp 
    src/Link.cpp 
    src/Manipulator.cpp
    src/utils.cpp
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    ${OpenCV_LIBS}
)