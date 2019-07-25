/*
 * GL01Hello.cpp: Test OpenGL C/C++ Setup
 */

#include <windows.h>  // For MS Windows
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

#include "./src/1-hello-world/hello-world.h"

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutInitWindowSize(640, 640);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
//    glutDisplayFunc(display); // Register display callback handler for window re-paint
//    glutMainLoop();           // Enter the infinitely event-processing loop

    draw_hello_world();

    return 0;
}
