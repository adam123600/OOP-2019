cmake_minimum_required(VERSION 3.10)
project(06_observer_pattern)

set(HEADERS include/Dummy.h)
set(SOURCES src/Dummy.cpp include/Acceleration.h include/Speed.h include/Observer.h)

add_library(06_observer_pattern_lib ${HEADERS} ${SOURCES})
target_include_directories(06_observer_pattern_lib PUBLIC include)

add_executable(06_observer_pattern src/main.cpp)
target_link_libraries(06_observer_pattern 06_observer_pattern_lib)

add_subdirectory(uml)
add_subdirectory(external)
add_subdirectory(test)
add_subdirectory(bench)
