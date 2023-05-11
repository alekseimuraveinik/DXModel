
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionConnectionException")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionSessionConnectionException
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionConnectionException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionConnectionException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionSessionConnectionException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionConnectionException_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionConnectionException || defined(INCLUDE_PSSessionConnectionException))
#define PSSessionConnectionException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface PSSessionConnectionException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)message;

- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSessionConnectionException)

FOUNDATION_EXPORT void PSSessionConnectionException_init(PSSessionConnectionException *self);

FOUNDATION_EXPORT PSSessionConnectionException *new_PSSessionConnectionException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionConnectionException *create_PSSessionConnectionException_init(void);

FOUNDATION_EXPORT void PSSessionConnectionException_initWithNSString_(PSSessionConnectionException *self, NSString *message);

FOUNDATION_EXPORT PSSessionConnectionException *new_PSSessionConnectionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionConnectionException *create_PSSessionConnectionException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void PSSessionConnectionException_initWithNSString_withJavaLangThrowable_(PSSessionConnectionException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSSessionConnectionException *new_PSSessionConnectionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionConnectionException *create_PSSessionConnectionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void PSSessionConnectionException_initWithJavaLangThrowable_(PSSessionConnectionException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSSessionConnectionException *new_PSSessionConnectionException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionConnectionException *create_PSSessionConnectionException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionConnectionException)

@compatibility_alias ComDevexpertsPipestoneClientSessionSessionConnectionException PSSessionConnectionException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionConnectionException")
