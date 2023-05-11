
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCommonLogger_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger || defined(INCLUDE_PSCommonLogger))
#define PSCommonLogger_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger 1
#define INCLUDE_PSBaseLogger 1
#include "PSBaseLogger.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilLoggingLogger;
@class PSLogLevel;

@interface PSCommonLogger : PSBaseLogger

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)wrapped;

- (jboolean)isLevelEnabledWithPSLogLevel:(PSLogLevel *)level;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCommonLogger)

FOUNDATION_EXPORT void PSCommonLogger_initWithJavaUtilLoggingLogger_(PSCommonLogger *self, JavaUtilLoggingLogger *wrapped);

FOUNDATION_EXPORT PSCommonLogger *new_PSCommonLogger_initWithJavaUtilLoggingLogger_(JavaUtilLoggingLogger *wrapped) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCommonLogger *create_PSCommonLogger_initWithJavaUtilLoggingLogger_(JavaUtilLoggingLogger *wrapped);

J2OBJC_TYPE_LITERAL_HEADER(PSCommonLogger)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger PSCommonLogger;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLogger")
