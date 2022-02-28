cmake_minimum_required(VERSION 3.1.0)

project(Raspberry_Cpp_RPI_Template VERSION 0.3 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#find_package()

set(
   SOURCES 
   main.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/src/MyTemplate_RPI_Class.cpp
   )

set(
    HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/MyTemplate_RPI_Class.h
    )
    
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

target_link_libraries(${PROJECT_NAME} PUBLIC ${WIRINGPI_LIBRARIES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
