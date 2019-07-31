//
// Created by May on 2019/7/27.
//

#include <iostream>
#include "triangle.h"
#include <GL/glut.h>

//  OpenGL Toolkits
#include <GLTools.h>
#include <GLShaderManager.h>

GLBatch triangleBatch;
GLShaderManager shaderManager;

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

    shaderManager.UseStockShader(GLT_SHADER_IDENTITY, vRed);
    triangleBatch.Draw();

    //  Perform the buffer swap to display the back buffer
    glutSwapBuffers();
}

//  setup render context
void setupRC() {
    //  set background color
    //  R G B A
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    shaderManager.InitializeStockShaders();

    //  triangle
    GLfloat verts[] = {
            -0.5f, 0.0f, 0.0f,
            0.5f, 0.0f, 0.0f,
            0.0f, 0.5f, 0.0f,
    };

    triangleBatch.Begin(GL_TRIANGLES, 3);
    triangleBatch.CopyVertexData3f(verts);
    triangleBatch.End();
}

int draw_triangle(int argc, char * argv[]) {
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

    GLenum err = glewInit();
    if (GLEW_OK != err) {
        std::cout << "Glew Error: " << glewGetErrorString(err) << "\n";
        return 1;
    }

    setupRC();

    return 0;
}