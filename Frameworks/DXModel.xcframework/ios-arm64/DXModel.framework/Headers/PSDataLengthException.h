
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDataLengthException_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException || defined(INCLUDE_PSDataLengthException))
#define PSDataLengthException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface PSDataLengthException : JavaLangException

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

J2OBJC_EMPTY_STATIC_INIT(PSDataLengthException)

FOUNDATION_EXPORT void PSDataLengthException_initWithNSString_(PSDataLengthException *self, NSString *message);

FOUNDATION_EXPORT PSDataLengthException *new_PSDataLengthException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDataLengthException *create_PSDataLengthException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void PSDataLengthException_initWithNSString_withJavaLangThrowable_(PSDataLengthException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSDataLengthException *new_PSDataLengthException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDataLengthException *create_PSDataLengthException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(PSDataLengthException)

@compatibility_alias ComDevexpertsPipestoneCommonUtilCryptoDataLengthException PSDataLengthException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoDataLengthException")
