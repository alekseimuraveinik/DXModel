
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEmptyLoggerProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider || defined(INCLUDE_PSEmptyLoggerProvider))
#define PSEmptyLoggerProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLoggerProvider 1
#define INCLUDE_PSLoggerProvider 1
#include "PSLoggerProvider.h"

@protocol PSLogger;

@interface PSEmptyLoggerProvider : NSObject < PSLoggerProvider >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<PSLogger>)getLoggerWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEmptyLoggerProvider)

FOUNDATION_EXPORT void PSEmptyLoggerProvider_init(PSEmptyLoggerProvider *self);

FOUNDATION_EXPORT PSEmptyLoggerProvider *new_PSEmptyLoggerProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEmptyLoggerProvider *create_PSEmptyLoggerProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSEmptyLoggerProvider)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider PSEmptyLoggerProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLoggerProvider")
