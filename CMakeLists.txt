cmake_minimum_required(VERSION 3.14)
project(learn_opengl)

set(CMAKE_CXX_STANDARD 11)

# freeGLUT
set(FREEGLUT "D:/Workspace/library/freeglut")
# include headers
include_directories(${FREEGLUT}/include)
# add static link libraries
link_directories(${FREEGLUT}/lib)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -D FREEGLUT_STATIC")

# GLTools
set(GLTOOLS "D:/Workspace/library/GLTools")
# include headers
include_directories(${GLTOOLS}/include)
# add static link libraries
link_directories(${GLTOOLS}/lib)

add_executable(
        learn_opengl
        main.cpp
#        src/1-hello-world/hello-world.cpp
#        src/1-hello-world/hello-world.h
#        src/1-hello-world/triangle.cpp
#        src/1-hello-world/triangle.h
)
target_link_libraries(learn_opengl -lOpenGL32 -lfreeGLUT -lGlTools)
#target_link_libraries(learn_opengl -lOpenGL32)