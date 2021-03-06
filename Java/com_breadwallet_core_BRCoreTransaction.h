/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_breadwallet_core_BRCoreTransaction */

#ifndef _Included_com_breadwallet_core_BRCoreTransaction
#define _Included_com_breadwallet_core_BRCoreTransaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getHash
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_BRCoreTransaction_getHash
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getVersion
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getLockTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_getLockTime
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getBlockHeight
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_getBlockHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getTimestamp
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_getTimestamp
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    serialize
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_breadwallet_core_BRCoreTransaction_serialize
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    shuffleOutputs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_BRCoreTransaction_shuffleOutputs
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_getSize
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    getStandardFee
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_getStandardFee
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    isSigned
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreTransaction_isSigned
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    isStandard
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreTransaction_isStandard
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_BRCoreTransaction_disposeNative
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreTransaction
 * Method:    createJniCoreTransaction
 * Signature: ([BJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreTransaction_createJniCoreTransaction
  (JNIEnv *, jclass, jbyteArray, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
