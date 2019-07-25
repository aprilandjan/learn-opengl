cmake_minimum_required(VERSION 3.14)
project(learn_opengl)

set(CMAKE_CXX_STANDARD 11)
#set(FREEGLUT "D:/Workspace/library/freeglut")
#include_directories(${FREEGLUT}/include)
#link_directories(${FREEGLUT}/lib)

add_executable(learn_opengl main.cpp src/1-hello-world/hello-world.cpp src/1-hello-world/hello-world.h)
#target_link_libraries(learn_opengl libopengl32.a libglu32.a libfreeglut.a)
target_link_libraries(learn_opengl -lOpenGL32 -lfreeGLUT)