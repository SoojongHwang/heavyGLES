#include <jni.h>
#include <string>

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include "Triangle.h"

Triangle tri;

void setUpGraphics(int w, int h) {
    tri.initialize(w, h);
}

void renderFrame() {
    tri.render();
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_hkepler_heavygles_GL2JNILib_setUpGraphic(JNIEnv *env, jclass type, jint width,
                                                          jint height) {
    setUpGraphics(width, height);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_hkepler_heavygles_GL2JNILib_renderFrame(JNIEnv *env, jclass type) {
    renderFrame();
}
