
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBufferIsFullException_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException || defined(INCLUDE_PSBufferIsFullException))
#define PSBufferIsFullException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface PSBufferIsFullException : JavaLangRuntimeException

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

J2OBJC_EMPTY_STATIC_INIT(PSBufferIsFullException)

FOUNDATION_EXPORT void PSBufferIsFullException_init(PSBufferIsFullException *self);

FOUNDATION_EXPORT PSBufferIsFullException *new_PSBufferIsFullException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsFullException *create_PSBufferIsFullException_init(void);

FOUNDATION_EXPORT void PSBufferIsFullException_initWithNSString_(PSBufferIsFullException *self, NSString *message);

FOUNDATION_EXPORT PSBufferIsFullException *new_PSBufferIsFullException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsFullException *create_PSBufferIsFullException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void PSBufferIsFullException_initWithNSString_withJavaLangThrowable_(PSBufferIsFullException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSBufferIsFullException *new_PSBufferIsFullException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsFullException *create_PSBufferIsFullException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void PSBufferIsFullException_initWithJavaLangThrowable_(PSBufferIsFullException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSBufferIsFullException *new_PSBufferIsFullException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsFullException *create_PSBufferIsFullException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(PSBufferIsFullException)

@compatibility_alias ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException PSBufferIsFullException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsFullException")
