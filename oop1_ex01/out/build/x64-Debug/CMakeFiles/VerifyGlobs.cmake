# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.28
cmake_policy(SET CMP0009 NEW)

# MY_HEADER_FILES at include/CMakeLists.txt:2 (file)
file(GLOB NEW_GLOB LIST_DIRECTORIES false RELATIVE "C:/Users/hndlr/Desktop/תכנות מונחה עצמים/targil_1/oop1_ex01_basefiles/oop1_ex01/include" "C:/Users/hndlr/Desktop/תכנות מונחה עצמים/targil_1/oop1_ex01_basefiles/oop1_ex01/include/*.h")
set(OLD_GLOB
  "Board.h"
  "Rectangle.h"
  "Utilities.h"
  "Vertex.h"
  "macros.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/hndlr/Desktop/תכנות מונחה עצמים/targil_1/oop1_ex01_basefiles/oop1_ex01/out/build/x64-Debug/CMakeFiles/cmake.verify_globs")
endif()

# MY_SOURCE_FILES at src/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false RELATIVE "C:/Users/hndlr/Desktop/תכנות מונחה עצמים/targil_1/oop1_ex01_basefiles/oop1_ex01/src" "C:/Users/hndlr/Desktop/תכנות מונחה עצמים/targil_1/oop1_ex01_basefiles/oop1_ex01/src/*.cpp")
set(OLD_GLOB
  "Board.cpp"
  "Rectangle.cpp"
  "Utilities.cpp"
  "Vertex.cpp"
  "main.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/hndlr/Desktop/תכנות מונחה עצמים/targil_1/oop1_ex01_basefiles/oop1_ex01/out/build/x64-Debug/CMakeFiles/cmake.verify_globs")
endif()
