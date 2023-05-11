
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiSessionIsClosedException")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiSessionIsClosedException
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiSessionIsClosedException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiSessionIsClosedException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiSessionIsClosedException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionIsClosedException_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiSessionIsClosedException || defined(INCLUDE_PSSessionIsClosedException))
#define PSSessionIsClosedException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface PSSessionIsClosedException : JavaLangRuntimeException

#pragma mark Public

- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSessionIsClosedException)

FOUNDATION_EXPORT void PSSessionIsClosedException_init(PSSessionIsClosedException *self);

FOUNDATION_EXPORT PSSessionIsClosedException *new_PSSessionIsClosedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionIsClosedException *create_PSSessionIsClosedException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionIsClosedException)

@compatibility_alias ComDevexpertsPipestoneClientApiSessionIsClosedException PSSessionIsClosedException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiSessionIsClosedException")
