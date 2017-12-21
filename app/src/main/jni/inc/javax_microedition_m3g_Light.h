/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class javax_microedition_m3g_Light */

#ifndef _Included_javax_microedition_m3g_Light
#define _Included_javax_microedition_m3g_Light
#ifdef __cplusplus
extern "C" {
#endif
#undef javax_microedition_m3g_Light_NONE
#define javax_microedition_m3g_Light_NONE 144L
#undef javax_microedition_m3g_Light_ORIGIN
#define javax_microedition_m3g_Light_ORIGIN 145L
#undef javax_microedition_m3g_Light_X_AXIS
#define javax_microedition_m3g_Light_X_AXIS 146L
#undef javax_microedition_m3g_Light_Y_AXIS
#define javax_microedition_m3g_Light_Y_AXIS 147L
#undef javax_microedition_m3g_Light_Z_AXIS
#define javax_microedition_m3g_Light_Z_AXIS 148L
#undef javax_microedition_m3g_Light_AMBIENT
#define javax_microedition_m3g_Light_AMBIENT 128L
#undef javax_microedition_m3g_Light_DIRECTIONAL
#define javax_microedition_m3g_Light_DIRECTIONAL 129L
#undef javax_microedition_m3g_Light_OMNI
#define javax_microedition_m3g_Light_OMNI 130L
#undef javax_microedition_m3g_Light_SPOT
#define javax_microedition_m3g_Light_SPOT 131L
/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _ctor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_Light__1ctor
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _setIntensity
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_Light__1setIntensity
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _getIntensity
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_Light__1getIntensity
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _setColor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_Light__1setColor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _getColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_Light__1getColor
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _setMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_Light__1setMode
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _getMode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_Light__1getMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _setSpotAngle
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_Light__1setSpotAngle
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _getSpotAngle
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_Light__1getSpotAngle
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _setSpotExponent
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_Light__1setSpotExponent
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _getSpotExponent
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_Light__1getSpotExponent
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _setAttenuation
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_Light__1setAttenuation
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     javax_microedition_m3g_Light
 * Method:    _getAttenuation
 * Signature: (II)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_Light__1getAttenuation
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
