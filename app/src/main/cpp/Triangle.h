//
// Created by HKEPLER on 2018-12-25.
//

#ifndef HEAVYGLES_TRIANGLE_H
#define HEAVYGLES_TRIANGLE_H


#include <GLES2/gl2.h>

class Triangle {
public:
    GLuint program;
    GLuint aPositionLocation;

    void initialize(int w, int h);
    void render();
};


#endif //HEAVYGLES_TRIANGLE_H
