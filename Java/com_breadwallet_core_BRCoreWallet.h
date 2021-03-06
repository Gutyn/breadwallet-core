/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_breadwallet_core_BRCoreWallet */

#ifndef _Included_com_breadwallet_core_BRCoreWallet
#define _Included_com_breadwallet_core_BRCoreWallet
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    createJniCoreWallet
 * Signature: ([Lcom/breadwallet/core/BRCoreTransaction;Lcom/breadwallet/core/BRCoreMasterPubKey;Lcom/breadwallet/core/BRCoreWallet/Listener;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_createJniCoreWallet
  (JNIEnv *, jclass, jobjectArray, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getReceiveAddress
 * Signature: ()Lcom/breadwallet/core/BRCoreAddress;
 */
JNIEXPORT jobject JNICALL Java_com_breadwallet_core_BRCoreWallet_getReceiveAddress
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getAllAddresses
 * Signature: ()[Lcom/breadwallet/core/BRCoreAddress;
 */
JNIEXPORT jobjectArray JNICALL Java_com_breadwallet_core_BRCoreWallet_getAllAddresses
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    containsAddress
 * Signature: (Lcom/breadwallet/core/BRCoreAddress;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_containsAddress
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    addressIsUsed
 * Signature: (Lcom/breadwallet/core/BRCoreAddress;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_addressIsUsed
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTransactions
 * Signature: ()[Lcom/breadwallet/core/BRCoreTransaction;
 */
JNIEXPORT jobjectArray JNICALL Java_com_breadwallet_core_BRCoreWallet_getTransactions
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTransactionsConfirmedBefore
 * Signature: (J)[Lcom/breadwallet/core/BRCoreTransaction;
 */
JNIEXPORT jobjectArray JNICALL Java_com_breadwallet_core_BRCoreWallet_getTransactionsConfirmedBefore
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getBalance
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getBalance
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTotalSent
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getTotalSent
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTotalReceived
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getTotalReceived
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getFeePerKb
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getFeePerKb
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    setFeePerKb
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_BRCoreWallet_setFeePerKb
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    createTransaction
 * Signature: (JLcom/breadwallet/core/BRCoreAddress;)Lcom/breadwallet/core/BRCoreTransaction;
 */
JNIEXPORT jobject JNICALL Java_com_breadwallet_core_BRCoreWallet_createTransaction
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    containsTransaction
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_containsTransaction
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    registerTransaction
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_registerTransaction
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    removeTransaction
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_BRCoreWallet_removeTransaction
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    transactionForHash
 * Signature: ([B)Lcom/breadwallet/core/BRCoreTransaction;
 */
JNIEXPORT jobject JNICALL Java_com_breadwallet_core_BRCoreWallet_transactionForHash
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    transactionIsValid
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_transactionIsValid
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    transactionIsPending
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_transactionIsPending
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    transactionIsVerified
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreWallet_transactionIsVerified
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTransactionFee
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getTransactionFee
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTransactionAmountSent
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getTransactionAmountSent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getTransactionAmountReceived
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getTransactionAmountReceived
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getBalanceAfterTransaction
 * Signature: (Lcom/breadwallet/core/BRCoreTransaction;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getBalanceAfterTransaction
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getFeeForTransactionSize
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getFeeForTransactionSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getFeeForTransactionAmount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getFeeForTransactionAmount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getMinOutputAmount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getMinOutputAmount
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    getMaxOutputAmount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreWallet_getMaxOutputAmount
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreWallet
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_core_BRCoreWallet_disposeNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
