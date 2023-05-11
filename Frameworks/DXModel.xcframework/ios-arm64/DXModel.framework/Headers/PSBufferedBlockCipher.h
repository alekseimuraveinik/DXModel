
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBufferedBlockCipher_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher || defined(INCLUDE_PSBufferedBlockCipher))
#define PSBufferedBlockCipher_

@class IOSByteArray;
@protocol PSBlockCipher;

@protocol PSBufferedBlockCipher < JavaObject >

- (id<PSBlockCipher>)getUnderlyingCipher;

- (jint)getBlockSize;

- (jint)processByteWithByte:(jbyte)inArg
              withByteArray:(IOSByteArray *)outArg
                    withInt:(jint)outOff;

- (jint)processBytesWithByteArray:(IOSByteArray *)inArg
                          withInt:(jint)inOff
                          withInt:(jint)len
                    withByteArray:(IOSByteArray *)outArg
                          withInt:(jint)outOff;

- (jint)doFinalWithByteArray:(IOSByteArray *)outArg
                     withInt:(jint)outOff;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(PSBufferedBlockCipher)

J2OBJC_TYPE_LITERAL_HEADER(PSBufferedBlockCipher)

#define ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher PSBufferedBlockCipher

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBufferedBlockCipher")
