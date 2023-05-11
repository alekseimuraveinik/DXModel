
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBufferIsClosedException_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException || defined(INCLUDE_PSBufferIsClosedException))
#define PSBufferIsClosedException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface PSBufferIsClosedException : JavaLangRuntimeException

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

J2OBJC_EMPTY_STATIC_INIT(PSBufferIsClosedException)

FOUNDATION_EXPORT void PSBufferIsClosedException_init(PSBufferIsClosedException *self);

FOUNDATION_EXPORT PSBufferIsClosedException *new_PSBufferIsClosedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsClosedException *create_PSBufferIsClosedException_init(void);

FOUNDATION_EXPORT void PSBufferIsClosedException_initWithNSString_(PSBufferIsClosedException *self, NSString *message);

FOUNDATION_EXPORT PSBufferIsClosedException *new_PSBufferIsClosedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsClosedException *create_PSBufferIsClosedException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void PSBufferIsClosedException_initWithNSString_withJavaLangThrowable_(PSBufferIsClosedException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSBufferIsClosedException *new_PSBufferIsClosedException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsClosedException *create_PSBufferIsClosedException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void PSBufferIsClosedException_initWithJavaLangThrowable_(PSBufferIsClosedException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSBufferIsClosedException *new_PSBufferIsClosedException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBufferIsClosedException *create_PSBufferIsClosedException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(PSBufferIsClosedException)

@compatibility_alias ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException PSBufferIsClosedException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersBufferIsClosedException")
