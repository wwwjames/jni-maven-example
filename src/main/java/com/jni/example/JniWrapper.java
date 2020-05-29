package com.jni.example;

public class JniWrapper {
    private static final String LIB_NAME = "jnilibrary";
    static {
        System.loadLibrary(LIB_NAME);
    }
    public native String getString();
}
