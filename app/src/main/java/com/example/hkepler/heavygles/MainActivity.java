package com.example.hkepler.heavygles;

import android.opengl.GLSurfaceView;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    private TextView tv;
    private ImageView image;
    private Button vertex, draw, texture;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);
        setUpView();
    }

    private void setUpView(){
        tv = (TextView)findViewById(R.id.textView);
        image = (ImageView)findViewById(R.id.imageView);
        vertex = (Button)findViewById(R.id.btn_vertex);
        draw = (Button)findViewById(R.id.btn_draw);
        texture  = (Button)findViewById(R.id.btn_texture);

        vertex.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                setContentView(new GL2JNIView(getApplicationContext()));
            }
        });
    }

}
