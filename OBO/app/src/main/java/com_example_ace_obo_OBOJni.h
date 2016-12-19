/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_ace_obo_OBOJni */

#ifndef _Included_com_example_ace_obo_OBOJni
#define _Included_com_example_ace_obo_OBOJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    Login
 * Signature: (Ljava/lang/String;Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ace_obo_OBOJni_Login
  (JNIEnv *, jobject, jstring, jstring, jboolean);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    Reg
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ace_obo_OBOJni_Reg
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jboolean);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    StartOrder
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ace_obo_OBOJni_StartOrder
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    DriverLocationChanged
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ace_obo_OBOJni_DriverLocationChanged
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    PassengerLocationChanged
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ace_obo_OBOJni_PassengerLocationChanged
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    FinishOrder
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_ace_obo_OBOJni_FinishOrder
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    setStatus
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ace_obo_OBOJni_setStatus
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getOrderid
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getOrderid
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getSessionid
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getSessionid
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getStatus
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getStatus
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getIsDriver
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getIsDriver
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getPtempLongitude
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getPtempLongitude
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getPtempLatitude
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getPtempLatitude
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getDtempLongitude
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getDtempLongitude
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    getDtempLatitude
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ace_obo_OBOJni_getDtempLatitude
  (JNIEnv *, jobject);

/*
 * Class:     com_example_ace_obo_OBOJni
 * Method:    testLibcurl
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ace_obo_OBOJni_testLibcurl
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
