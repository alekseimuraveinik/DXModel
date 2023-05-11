
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCipherKeyGenerator_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator || defined(INCLUDE_PSCipherKeyGenerator))
#define PSCipherKeyGenerator_

@class IOSByteArray;
@class JavaSecuritySecureRandom;

@interface PSCipherKeyGenerator : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

- (IOSByteArray *)generateKeyWithInt:(jint)strength;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCipherKeyGenerator)

FOUNDATION_EXPORT void PSCipherKeyGenerator_initWithJavaSecuritySecureRandom_(PSCipherKeyGenerator *self, JavaSecuritySecureRandom *random);

FOUNDATION_EXPORT PSCipherKeyGenerator *new_PSCipherKeyGenerator_initWithJavaSecuritySecureRandom_(JavaSecuritySecureRandom *random) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCipherKeyGenerator *create_PSCipherKeyGenerator_initWithJavaSecuritySecureRandom_(JavaSecuritySecureRandom *random);

J2OBJC_TYPE_LITERAL_HEADER(PSCipherKeyGenerator)

@compatibility_alias ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator PSCipherKeyGenerator;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherKeyGenerator")
