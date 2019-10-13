cmake_minimum_required(VERSION 3.14)
project(project2)

set(CMAKE_CXX_STANDARD 17)


#add_library(lib1.a SHARED ./Dummy.cpp ./Dummy.h)
SET(myLib.a Dummy.h Dummy.cpp)
add_library(lib1.a STATIC ${myLib.a})


include_directories(../googletest/googletest/include)
link_directories(../googletest/lib)


#add_executable(project2 main.cpp Dummy.cpp Dummy.h test.cpp)
add_executable(project2 main.cpp test.cpp)


target_link_directories(project2 PUBLIC ../googletest/lib)
target_link_libraries(project2 PUBLIC libgtest.a libgtest_main.a pthread lib1.a)
