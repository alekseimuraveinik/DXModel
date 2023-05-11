
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLoggerProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider || defined(INCLUDE_PSLoggerProvider))
#define PSLoggerProvider_

@protocol PSLogger;

@protocol PSLoggerProvider < JavaObject >

- (id<PSLogger>)getLoggerWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(PSLoggerProvider)

J2OBJC_TYPE_LITERAL_HEADER(PSLoggerProvider)

#define ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider PSLoggerProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider")
