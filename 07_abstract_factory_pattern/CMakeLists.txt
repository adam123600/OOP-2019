cmake_minimum_required(VERSION 3.10)
project(07_abstract_factory_pattern)

set(HEADERS include/Dummy.h)

set(SOURCES src/Dummy.cpp src/CheckBoxKdeWidget.cpp include/CheckBoxKdeWidget.h src/Widget.cpp include/Widget.h include/ListKdeWidget.h src/ListKdeWidget.cpp include/ButtonKdeWidget.h src/ButtonKdeWidget.cpp include/CheckBoxGnomeWidget.h src/CheckBoxGnomeWidget.cpp include/ListGnomeWidget.h src/ListGnomeWidget.cpp include/ButtonGnomeWidget.h src/ButtonGnomeWidget.cpp src/KdeWidgetFactory.cpp include/WidgetFactory.h include/KdeWidgetFactory.h src/WidgetFactory.cpp include/GnomeWidgetFactory.h src/GnomeWidgetFactory.cpp include/Demo.h src/Demo.cpp)

add_library(07_abstract_factory_pattern_lib ${HEADERS} ${SOURCES})
target_include_directories(07_abstract_factory_pattern_lib PUBLIC include)

add_executable(07_abstract_factory_pattern src/main.cpp)
target_link_libraries(07_abstract_factory_pattern 07_abstract_factory_pattern_lib)

add_subdirectory(uml)
add_subdirectory(external)
add_subdirectory(test)
add_subdirectory(bench)
