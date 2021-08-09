## How to call JNI methods from Java and vice versa

[![medium](https://aleen42.github.io/badges/src/medium.svg)](https://dredwardhyde.medium.com/a-simple-guide-to-java-native-interface-jni-using-native-maven-plugin-e01f4077a8a5)


**Useful snippets:**  
- [How to call javah from maven](https://github.com/dredwardhyde/jni-example-macosx/blob/master/pom.xml#L158)
- [How to use native-maven-plugin on macOS](https://github.com/dredwardhyde/jni-example-macosx/blob/master/pom.xml#L27)
- [Note you have to add JDK include folders on macOS](https://github.com/dredwardhyde/jni-example-macosx/blob/master/pom.xml#L51)
- [How to use native-maven-plugin on Windows 10](https://github.com/dredwardhyde/JNI-Maven-Examples/blob/master/pom.xml#L95)
- [cl.exe arguments to build DLL](https://github.com/dredwardhyde/JNI-Maven-Examples/blob/master/pom.xml#L121) 
- [link.exe arguments to build DLL](https://github.com/dredwardhyde/JNI-Maven-Examples/blob/master/pom.xml#L134)
- [How to load native library](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/main/java/com/jni/example/JniWrapper.java#L10)
- [How to find object methods](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L11)
- [How to find static methods](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L12)
- [How to create new string](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L15)
- [How to call object method](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L16)
- [How to call static method](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L17)
- [How to delete references in JNI code](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L18)
- [How to find Java class](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L20)
- [How to create Java object](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L22)
- [How to return object from JNI method](https://github.com/dredwardhyde/jni-example-macosx/blob/master/src/native/source/jni.c#L26)  
  
**Please note that on Windows 10 you need to build and install in local maven repository [this](https://github.com/dredwardhyde/visual-studio-2017-support) project to get Microsoft Visual Studio 2017 support by native-maven-plugin**
