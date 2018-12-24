#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_hkepler_heavygles_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello Fucking Christmas~!";
    return env->NewStringUTF(hello.c_str());
}
