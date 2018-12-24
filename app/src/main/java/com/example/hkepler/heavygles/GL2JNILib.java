package com.example.hkepler.heavygles;

public class GL2JNILib {
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    public native String stringFromJNI();
    public static native void setUpGraphic(int width, int height);
    public static native void renderFrame();

}
