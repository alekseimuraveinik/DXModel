
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConsoleLoggerProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider || defined(INCLUDE_PSConsoleLoggerProvider))
#define PSConsoleLoggerProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider 1
#define INCLUDE_PSLoggerProvider 1
#include "PSLoggerProvider.h"

@class JavaIoPrintStream;
@protocol PSLogger;

@interface PSConsoleLoggerProvider : NSObject < PSLoggerProvider >

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoPrintStream:(JavaIoPrintStream *)outArg;

+ (id<PSLoggerProvider>)getErr;

+ (id<PSLoggerProvider>)getInstance;

- (id<PSLogger>)getLoggerWithNSString:(NSString *)name;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSConsoleLoggerProvider)

FOUNDATION_EXPORT void PSConsoleLoggerProvider_initWithJavaIoPrintStream_(PSConsoleLoggerProvider *self, JavaIoPrintStream *outArg);

FOUNDATION_EXPORT PSConsoleLoggerProvider *new_PSConsoleLoggerProvider_initWithJavaIoPrintStream_(JavaIoPrintStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConsoleLoggerProvider *create_PSConsoleLoggerProvider_initWithJavaIoPrintStream_(JavaIoPrintStream *outArg);

FOUNDATION_EXPORT id<PSLoggerProvider> PSConsoleLoggerProvider_getInstance(void);

FOUNDATION_EXPORT id<PSLoggerProvider> PSConsoleLoggerProvider_getErr(void);

J2OBJC_TYPE_LITERAL_HEADER(PSConsoleLoggerProvider)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider PSConsoleLoggerProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplConsoleConsoleLoggerProvider")
