#include <jni.h>
#include <string>

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_example_hkepler_heavygles_GL2JNILib_setUpGraphic(JNIEnv *env, jclass type, jint width,
                                                          jint height) {
    // TODO
    glViewport(0, 0, width, height);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_hkepler_heavygles_GL2JNILib_renderFrame(JNIEnv *env, jclass type) {
    // TODO
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_hkepler_heavygles_GL2JNILib_stringFromJNI(JNIEnv *env, jobject instance) {
    std::string hello = "Hello Fucking Christmas~!";
    return env->NewStringUTF(hello.c_str());
}
