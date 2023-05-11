
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConsoleLogger_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger || defined(INCLUDE_PSConsoleLogger))
#define PSConsoleLogger_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger 1
#define INCLUDE_PSBaseLogger 1
#include "PSBaseLogger.h"

@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaLangThrowable;
@class PSLogLevel;

@interface PSConsoleLogger : PSBaseLogger

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)name
                     withJavaIoPrintStream:(JavaIoPrintStream *)outArg;

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

J2OBJC_STATIC_INIT(PSConsoleLogger)

FOUNDATION_EXPORT void PSConsoleLogger_initWithNSString_withJavaIoPrintStream_(PSConsoleLogger *self, NSString *name, JavaIoPrintStream *outArg);

FOUNDATION_EXPORT PSConsoleLogger *new_PSConsoleLogger_initWithNSString_withJavaIoPrintStream_(NSString *name, JavaIoPrintStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConsoleLogger *create_PSConsoleLogger_initWithNSString_withJavaIoPrintStream_(NSString *name, JavaIoPrintStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSConsoleLogger)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger PSConsoleLogger;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLogger")
