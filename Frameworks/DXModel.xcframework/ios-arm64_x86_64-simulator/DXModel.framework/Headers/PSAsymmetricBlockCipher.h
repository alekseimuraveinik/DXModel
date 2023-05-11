
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSAsymmetricBlockCipher_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher || defined(INCLUDE_PSAsymmetricBlockCipher))
#define PSAsymmetricBlockCipher_

@class IOSByteArray;

@protocol PSAsymmetricBlockCipher < JavaObject >

- (jint)getInputBlockSize;

- (jint)getOutputBlockSize;

- (IOSByteArray *)processBlockWithByteArray:(IOSByteArray *)inArg
                                    withInt:(jint)inOff
                                    withInt:(jint)len;

@end

J2OBJC_EMPTY_STATIC_INIT(PSAsymmetricBlockCipher)

J2OBJC_TYPE_LITERAL_HEADER(PSAsymmetricBlockCipher)

#define ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher PSAsymmetricBlockCipher

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoAsymmetricBlockCipher")
