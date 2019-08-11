/*
 * GL01Hello.cpp: Test OpenGL C/C++ Setup
 */
//#include<windows.h>

#include <GLTools.h>    //  openGL toolkit
#include <GLShaderManager.h>    //   shader manager class

#ifdef __APPLE__
#include <glut/glut.h>  //  osx GLUT
#else
#define FREEGLUT_STATIC
#include <GL/glut.h>    //  windows GLUT
#endif

//#include <windows.h>  // For MS Windows

//#include "./src/1-hello-world/hello-world.h"
//#include "./src/1-hello-world/triangle.h"

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char *argv[]) {

//    draw_hello_world(argc, argv);
//    draw_triangle(argc, argv);

    return 0;
}
