
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSInvalidCipherTextException_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException || defined(INCLUDE_PSInvalidCipherTextException))
#define PSInvalidCipherTextException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface PSInvalidCipherTextException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSInvalidCipherTextException)

FOUNDATION_EXPORT void PSInvalidCipherTextException_initWithNSString_(PSInvalidCipherTextException *self, NSString *message);

FOUNDATION_EXPORT PSInvalidCipherTextException *new_PSInvalidCipherTextException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSInvalidCipherTextException *create_PSInvalidCipherTextException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void PSInvalidCipherTextException_initWithNSString_withJavaLangThrowable_(PSInvalidCipherTextException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSInvalidCipherTextException *new_PSInvalidCipherTextException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSInvalidCipherTextException *create_PSInvalidCipherTextException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(PSInvalidCipherTextException)

@compatibility_alias ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException PSInvalidCipherTextException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoInvalidCipherTextException")
