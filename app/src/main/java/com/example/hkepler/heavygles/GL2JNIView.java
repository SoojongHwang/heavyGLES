package com.example.hkepler.heavygles;

import android.content.Context;
import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class GL2JNIView extends GLSurfaceView {
    public GL2JNIView(Context context) {
        super(context);
        setRenderer(new GL2Renderer());
        setRenderMode(GLSurfaceView.RENDERMODE_WHEN_DIRTY);
    }

    private static class GL2Renderer implements GLSurfaceView.Renderer{

        @Override
        public void onSurfaceCreated(GL10 gl, EGLConfig config) {
            //nothing
        }

        @Override
        public void onSurfaceChanged(GL10 gl, int width, int height) {
            GL2JNILib.setUpGraphic(width, height);
        }

        @Override
        public void onDrawFrame(GL10 gl) {
            GL2JNILib.renderFrame();
        }
    }
}
