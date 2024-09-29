cmake_minimum_required(VERSION 3.15)

project(recipe-03 LANGUAGES CXX)

add_library(
     message-obj
     OBJECT
          message.h
          message.cpp
)
target_include_directories(message-obj PRIVATE .)
set_target_properties(
     message-obj
     PROPERTIES
          POSITION_INDEPENDENT_CODE ON
)

add_library(
     message-static
     STATIC
          $<TARGET_OBJECTS:message-obj>
)
add_library(
     message-shared
     SHARED
          $<TARGET_OBJECTS:message-obj>
)

add_executable(
     ${PROJECT_NAME}
     main.cpp
)
target_link_libraries(
     ${PROJECT_NAME}
          message-shared
)
target_include_directories(${PROJECT_NAME} PRIVATE .)
