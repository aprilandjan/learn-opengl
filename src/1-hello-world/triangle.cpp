//
// Created by May on 2019/7/27.
//

#include <iostream>
#include "triangle.h"
#include <GL/glut.h>

// need <GLTools>, wtf...
//GLShaderManager shaderManager;

void handleSizeChange(int w, int h) {
    //  handle window size change event
    glViewport(0, 0, w, h);

    std::cout << "w=" << w << ", h=" << h;
}

void handleRender() {
    //  clear all these buffer areas
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    GLfloat vRed[] = {
            1.0f, 0.0f, 0.0f, 1.0f
    };

}

void draw_triangle(int argc, char * argv[]) {
//    gltSetWorkingDirectory(argv[0]);  //  this may needed in mac os
    glutInit(&argc, argv);
    //  set display flags
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_STENCIL);
    //  create window
    glutInitWindowSize(800, 600);
    glutCreateWindow("Triangle");

    //  events
    glutReshapeFunc(handleSizeChange);
    glutDisplayFunc(handleRender);
}