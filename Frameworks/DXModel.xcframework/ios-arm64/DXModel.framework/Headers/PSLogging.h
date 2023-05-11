
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogging")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogging
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogging 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogging 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogging

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLogging_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogging || defined(INCLUDE_PSLogging))
#define PSLogging_

@class IOSClass;
@protocol PSLogger;
@protocol PSLoggerProvider;

@interface PSLogging : NSObject

#pragma mark Public

+ (id<PSLogger>)getLoggerWithIOSClass:(IOSClass *)clazz;

+ (id<PSLogger>)getLoggerWithNSString:(NSString *)name;

+ (void)setProviderWithPSLoggerProvider:(id<PSLoggerProvider>)provider;

@end

J2OBJC_STATIC_INIT(PSLogging)

FOUNDATION_EXPORT void PSLogging_setProviderWithPSLoggerProvider_(id<PSLoggerProvider> provider);

FOUNDATION_EXPORT id<PSLogger> PSLogging_getLoggerWithNSString_(NSString *name);

FOUNDATION_EXPORT id<PSLogger> PSLogging_getLoggerWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(PSLogging)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingLogging PSLogging;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogging")
