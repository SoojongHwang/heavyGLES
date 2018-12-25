//
// Created by HKEPLER on 2018-12-25.
//

#include "Triangle.h"
#include "GLHelper.h"

static const char vShaderSource[] =
        "attribute vec4 aPosition;\n"
        "void main()\n"
        "{\n"
        "  gl_Position = aPosition;\n"
        "}\n";

static const char fShaderSource[] =
        "precision mediump float;\n"
        "void main()\n"
        "{\n"
        "  gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);\n"
        "}\n";

const GLfloat triangleVertices[] = {
        0.0f, 1.0f,
        -1.0f, -1.0f,
        1.0f, -1.0f
};

void Triangle::initialize(int w, int h) {
    program = createProgram(vShaderSource, fShaderSource);
    aPositionLocation = glGetAttribLocation(program, "aPosition");
    glViewport(0, 0, w, h);
}

void Triangle::render() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear (GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    glUseProgram(program);
    glVertexAttribPointer(aPositionLocation, 2, GL_FLOAT, GL_FALSE, 0 ,triangleVertices);
    glEnableVertexAttribArray(aPositionLocation);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}