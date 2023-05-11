
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEmptyLogger_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger || defined(INCLUDE_PSEmptyLogger))
#define PSEmptyLogger_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger 1
#define INCLUDE_PSBaseLogger 1
#include "PSBaseLogger.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class PSLogLevel;
@protocol PSLogger;

@interface PSEmptyLogger : PSBaseLogger
@property (readonly, class, strong) id<PSLogger> INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (id<PSLogger>)INSTANCE;

#pragma mark Public

- (jboolean)isLevelEnabledWithPSLogLevel:(PSLogLevel *)level;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

@end

J2OBJC_STATIC_INIT(PSEmptyLogger)

inline id<PSLogger> PSEmptyLogger_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<PSLogger> PSEmptyLogger_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSEmptyLogger, INSTANCE, id<PSLogger>)

J2OBJC_TYPE_LITERAL_HEADER(PSEmptyLogger)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger PSEmptyLogger;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplEmptyLogger")
