#include <stdio.h>
#include <string.h>
#include "com_example_hellojni_HelloJni.h"

jstring
Java_com_example_hellojni_HelloJni_stringFromJNI( JNIEnv* env,
                                                      jobject thiz )
{
      return env->NewStringUTF("URYYYYYYYYYYYYYYYY");
}

