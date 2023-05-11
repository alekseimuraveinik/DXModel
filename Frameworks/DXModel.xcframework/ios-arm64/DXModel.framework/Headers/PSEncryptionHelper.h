
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptionHelper_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper || defined(INCLUDE_PSEncryptionHelper))
#define PSEncryptionHelper_

@class IOSByteArray;
@class PSCipherKeyGenerator;
@protocol PSAsymmetricBlockCipher;

@interface PSEncryptionHelper : NSObject

#pragma mark Public

+ (PSCipherKeyGenerator *)getKeyGen;

+ (IOSByteArray *)processBytesWithPSAsymmetricBlockCipher:(id<PSAsymmetricBlockCipher>)cipher
                                            withByteArray:(IOSByteArray *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEncryptionHelper)

FOUNDATION_EXPORT IOSByteArray *PSEncryptionHelper_processBytesWithPSAsymmetricBlockCipher_withByteArray_(id<PSAsymmetricBlockCipher> cipher, IOSByteArray *data);

FOUNDATION_EXPORT PSCipherKeyGenerator *PSEncryptionHelper_getKeyGen(void);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptionHelper)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper PSEncryptionHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionHelper")
