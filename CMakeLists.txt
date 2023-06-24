cmake_minimum_required (VERSION 3.22.1)

project(app CXX)
set(CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)   
include_directories(header)
            
add_executable(app main.cpp 
                   src/parse_xml.cpp 
                   src/create_html.cpp
                   header/parse_xml.hpp
                   header/create_html.hpp
                   header/data.hpp 
                   header/html_const.hpp)               

target_link_libraries(app ${CONAN_LIBS})
