DIR=$(shell pwd)
JAVA_DIR=${JAVA_HOME}
CINC_DIR=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include

JNI_LIB=libCore.jnilib

JNI_SRCS=com_breadwallet_core_BRCoreAddress.c \
	com_breadwallet_core_BRCoreChainParams.c \
	com_breadwallet_core_BRCoreJniReference.c \
	com_breadwallet_core_BRCoreMasterPubKey.c \
	com_breadwallet_core_BRCoreMerkleBlock.c \
	com_breadwallet_core_BRCorePeer.c \
	com_breadwallet_core_BRCorePeerManager.c \
	com_breadwallet_core_BRCoreTransaction.c \
	com_breadwallet_core_BRCorePaymentProtocol.c \
	com_breadwallet_core_BRCoreWallet.c \
	BRCoreJni.c

JNI_OBJS=$(JNI_SRCS:.c=.o)

# JNI Header Files that we are interest in keeping (that are not empty)
JNI_HDRS=$(JNI_SRCS:.c=.h)

JAVA_SRCS=com/breadwallet/core/BRCoreAddress.java \
	com/breadwallet/core/BRCoreChainParams.java \
	com/breadwallet/core/BRCoreJniReference.java \
	com/breadwallet/core/BRCoreMasterPubKey.java \
	com/breadwallet/core/BRCoreMerkleBlock.java \
	com/breadwallet/core/BRCorePeer.java \
	com/breadwallet/core/BRCoreKey.java \
	com/breadwallet/core/BRCorePeerManager.java \
	com/breadwallet/core/BRCoreTransaction.java \
	com/breadwallet/core/BRCoreWallet.java \
	com/breadwallet/core/BRCoreWalletManager.java \
	com/breadwallet/core/BRCorePaymentProtocolDetails.java \
	com/breadwallet/core/BRCorePaymentProtocolRequest.java \
	com/breadwallet/core/BRCorePaymentProtocolPayment.java \
	com/breadwallet/core/BRCorePaymentProtocolInvoiceRequest.java \
	com/breadwallet/core/BRCorePaymentProtocolMessage.java \
	com/breadwallet/core/BRCorePaymentProtocolEncryptedMessage.java \
	com/breadwallet/core/test/BRWalletManager.java

JAVA_OBJS=$(JAVA_SRCS:.java=.class)

CORE_SRCS=../BRAddress.c \
	../BRBIP32Sequence.c \
	../BRBIP38Key.c \
	../BRBIP39Mnemonic.c \
	../BRBase58.c \
	../BRBloomFilter.c \
	../BRCrypto.c \
	../BRKey.c \
	../BRMerkleBlock.c \
	../BRPaymentProtocol.c \
	../BRPeer.c \
	../BRPeerManager.c \
	../BRSet.c \
	../BRTransaction.c \
	../BRWallet.c

CORE_OBJS=$(CORE_SRCS:.c=.o)

CFLAGS=-I$(JAVA_HOME)/include \
	-I$(JAVA_HOME)/include/darwin \
	-I$(CINC_DIR) \
	-I$(CINC_DIR)/malloc \
	-I.. \
	-I../secp256k1 \
	-Wno-nullability-completeness -Wno-format-extra-args -Wno-unknown-warning-option

test: $(JNI_LIB) java_comp
	java -Dwallet.test -classpath build com.breadwallet.core.test.BRWalletManager $(ARGS) # -D.

$(JNI_LIB): $(JNI_OBJS) $(CORE_OBJS)
	cc -dynamiclib -o $(JNI_LIB) $(JNI_OBJS) $(CORE_OBJS)

java_comp:	FORCE
	@mkdir -p build
	javac -d build $(JAVA_SRCS)

jni_hdr: java_comp
	@(cd build/com/breadwallet/core; \
	  for class in BRCore*.class; do \
	      javah -jni -d $(DIR) -classpath $(DIR)/build com.breadwallet.core.$${class%%.class}; \
	  done)
	@rm -f com_breadwallet_core_BRCoreWalletManager.h com_breadwallet_core_BRCore*_*.h .h

#            if [[ "$${class}" != "*\"$\"*" ]]; then
#           fi

clean:
	rm -rf build $(JNI_OBJS) $(CORE_OBJS) $(JAVA_OBJS) $(JNI_LIB)

FORCE:

#	-Wno-nullability-completeness


# Generate Headers:
# 	javac Foo.java
# 	javah -jni -d <location> Foo
# Implement Foo.c
# Generate Foo.so
# 	cc -I<path to jni.h> -I<path to jni_md.h> -I<path to std> -c Foo.c
# 	cc -dynamiclib -o libFoo.jnilib Foo.o Bar.o

# 	<path-to-jni-md>=/Library/Java/JavaVirtualMachines/jdk1.8.0_151.jdk/Contents/Home/include/darwin
# 	<path-to-jni>=/Library/Java/JavaVirtualMachines/jdk1.8.0_151.jdk/Contents/Home/include
# 	<path-to-std>=/…/Xcode.app/Contents/Dev…/Platforms/MacOSX.platform/Dev…/SDKs/MacOSX.sdk/usr/include
# Run Foo
# 	java -Djava.library.path=/Users/ebg Foo
#

# (cd ${APP}/app/build/intermediates/classes/debug/com/breadwallet/core; for class in BRCore*.class; do \
#     javah -jni -d ${APP}/app/src/main/cpp/breadwallet-core/Java/ \
#	-classpath ${APP}/app/build/intermediates/classes/debug/ \
#	com.breadwallet.core.${class%%.class}; \
#	done)
# 15RBcXQMTfebbAfUFeBbcDfs1fVvPayWdU
