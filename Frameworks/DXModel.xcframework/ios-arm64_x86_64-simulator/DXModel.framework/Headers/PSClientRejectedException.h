
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonExceptionClientRejectedException")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonExceptionClientRejectedException
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonExceptionClientRejectedException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonExceptionClientRejectedException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonExceptionClientRejectedException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientRejectedException_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonExceptionClientRejectedException || defined(INCLUDE_PSClientRejectedException))
#define PSClientRejectedException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;
@class PSHandshakeError;

@interface PSClientRejectedException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initWithPSHandshakeError:(PSHandshakeError *)handshakeError;

- (PSHandshakeError *)getHandshakeError;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientRejectedException)

FOUNDATION_EXPORT void PSClientRejectedException_initWithPSHandshakeError_(PSClientRejectedException *self, PSHandshakeError *handshakeError);

FOUNDATION_EXPORT PSClientRejectedException *new_PSClientRejectedException_initWithPSHandshakeError_(PSHandshakeError *handshakeError) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientRejectedException *create_PSClientRejectedException_initWithPSHandshakeError_(PSHandshakeError *handshakeError);

J2OBJC_TYPE_LITERAL_HEADER(PSClientRejectedException)

@compatibility_alias ComDevexpertsPipestoneCommonExceptionClientRejectedException PSClientRejectedException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonExceptionClientRejectedException")
