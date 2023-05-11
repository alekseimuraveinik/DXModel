
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCommonLoggerProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider || defined(INCLUDE_PSCommonLoggerProvider))
#define PSCommonLoggerProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider 1
#define INCLUDE_PSLoggerProvider 1
#include "PSLoggerProvider.h"

@protocol PSLogger;

@interface PSCommonLoggerProvider : NSObject < PSLoggerProvider >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<PSLogger>)getLoggerWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCommonLoggerProvider)

FOUNDATION_EXPORT void PSCommonLoggerProvider_init(PSCommonLoggerProvider *self);

FOUNDATION_EXPORT PSCommonLoggerProvider *new_PSCommonLoggerProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCommonLoggerProvider *create_PSCommonLoggerProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSCommonLoggerProvider)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider PSCommonLoggerProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplCommonCommonLoggerProvider")
