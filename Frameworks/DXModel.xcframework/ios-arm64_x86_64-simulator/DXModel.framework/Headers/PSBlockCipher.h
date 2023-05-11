
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBlockCipher_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher || defined(INCLUDE_PSBlockCipher))
#define PSBlockCipher_

@class IOSByteArray;

@protocol PSBlockCipher < JavaObject >

- (NSString *)getAlgorithmName;

- (jint)getBlockSize;

- (jint)processBlockWithByteArray:(IOSByteArray *)inArg
                          withInt:(jint)inOff
                    withByteArray:(IOSByteArray *)outArg
                          withInt:(jint)outOff;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(PSBlockCipher)

J2OBJC_TYPE_LITERAL_HEADER(PSBlockCipher)

#define ComDevexpertsPipestoneCommonUtilCryptoBlockCipher PSBlockCipher

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoBlockCipher")
