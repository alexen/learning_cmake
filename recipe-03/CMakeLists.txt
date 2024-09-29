cmake_minimum_required(VERSION 3.15)

project(recipe-03 LANGUAGES CXX)

add_library(
     message
     STATIC
          message.h
          message.cpp
)
target_include_directories(message PRIVATE .)

add_executable(
     ${PROJECT_NAME}
     main.cpp
)
target_link_libraries(
     ${PROJECT_NAME}
          message
)
target_include_directories(${PROJECT_NAME} PRIVATE .)
