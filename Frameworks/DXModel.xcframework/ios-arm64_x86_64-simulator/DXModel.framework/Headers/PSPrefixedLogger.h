
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPrefixedLogger_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger || defined(INCLUDE_PSPrefixedLogger))
#define PSPrefixedLogger_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogger 1
#define INCLUDE_PSLogger 1
#include "PSLogger.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class PSLogLevel;
@protocol PSPrefixedLogger_Prefix;

@interface PSPrefixedLogger : NSObject < PSLogger >

#pragma mark Public

- (instancetype __nonnull)initWithPSLogger:(id<PSLogger>)decorated
               withPSPrefixedLogger_Prefix:(id<PSPrefixedLogger_Prefix>)prefix;

- (void)debugWithNSString:(NSString *)message;

- (void)debugWithNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)debugWithNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)errorWithNSString:(NSString *)message;

- (void)errorWithNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)errorWithNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)infoWithNSString:(NSString *)message;

- (void)infoWithNSString:(NSString *)format
       withNSObjectArray:(IOSObjectArray *)arguments;

- (void)infoWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)tr;

- (jboolean)isLevelEnabledWithPSLogLevel:(PSLogLevel *)level;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)verboseWithNSString:(NSString *)message;

- (void)verboseWithNSString:(NSString *)format
          withNSObjectArray:(IOSObjectArray *)arguments;

- (void)verboseWithNSString:(NSString *)message
      withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)warnWithNSString:(NSString *)message;

- (void)warnWithNSString:(NSString *)format
       withNSObjectArray:(IOSObjectArray *)arguments;

- (void)warnWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)tr;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPrefixedLogger)

FOUNDATION_EXPORT void PSPrefixedLogger_initWithPSLogger_withPSPrefixedLogger_Prefix_(PSPrefixedLogger *self, id<PSLogger> decorated, id<PSPrefixedLogger_Prefix> prefix);

FOUNDATION_EXPORT PSPrefixedLogger *new_PSPrefixedLogger_initWithPSLogger_withPSPrefixedLogger_Prefix_(id<PSLogger> decorated, id<PSPrefixedLogger_Prefix> prefix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPrefixedLogger *create_PSPrefixedLogger_initWithPSLogger_withPSPrefixedLogger_Prefix_(id<PSLogger> decorated, id<PSPrefixedLogger_Prefix> prefix);

J2OBJC_TYPE_LITERAL_HEADER(PSPrefixedLogger)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger PSPrefixedLogger;

#endif

#if !defined (PSPrefixedLogger_Prefix_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger || defined(INCLUDE_PSPrefixedLogger_Prefix))
#define PSPrefixedLogger_Prefix_

@protocol PSPrefixedLogger_Prefix < JavaObject >

- (NSString *)prefix;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPrefixedLogger_Prefix)

J2OBJC_TYPE_LITERAL_HEADER(PSPrefixedLogger_Prefix)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplPrefixedLogger")
