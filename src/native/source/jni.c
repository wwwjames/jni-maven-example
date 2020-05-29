#include "com_jni_example_JniWrapper.h"
#include <stdio.h>

#define DEFAULT_RET "Hello world!"
#define DEFAULT_CALLBACK "Hello world callback!"
#define DEFAULT_CALLBACK_STATIC "Hello world static callback!"

JNIEXPORT jstring JNICALL Java_com_jni_example_JniWrapper_getString(JNIEnv *env, jobject thiz) {
    jclass cls_foo = (*env)->GetObjectClass(env, thiz);
    jmethodID mid_callback = (*env)->GetMethodID(env, cls_foo, "callback", "(Ljava/lang/String;)V");
    jmethodID mid_callback_object = (*env)->GetMethodID(env, cls_foo, "callbackObject", "(Ljava/util/List;)V");
    jmethodID mid_callback_static = (*env)->GetStaticMethodID(env, cls_foo, "callbackStatic", "(Ljava/lang/String;)V");

    char* string_regular = DEFAULT_CALLBACK;
    jstring jStringRegular = (*env)->NewStringUTF(env, string_regular);

    char* string_static = DEFAULT_CALLBACK_STATIC;
    jstring jStringStatic = (*env)->NewStringUTF(env, string_static);

    (*env)->CallVoidMethod(env, thiz, mid_callback, jStringRegular);
    (*env)->CallStaticVoidMethod(env, thiz, mid_callback_static, jStringStatic);

    (*env)->DeleteLocalRef(env, jStringRegular);
    (*env)->DeleteLocalRef(env, jStringStatic);

    jclass cls = (*env)->FindClass(env, "java/util/ArrayList");
    jmethodID constructor = (*env)->GetMethodID(env, cls, "<init>", "()V");

    jobject arraylist = (*env)->NewObject(env, cls, constructor);

    (*env)->CallVoidMethod(env, thiz, mid_callback_object, arraylist);

    (*env)->DeleteLocalRef(env, arraylist);

    char* ret = DEFAULT_RET;
    return (*env)->NewStringUTF(env, ret);
}