
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogger")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogger
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogger 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogger 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLogger_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogger || defined(INCLUDE_PSLogger))
#define PSLogger_

@class IOSObjectArray;
@class JavaLangThrowable;
@class PSLogLevel;

@protocol PSLogger < JavaObject >

- (jboolean)isLevelEnabledWithPSLogLevel:(PSLogLevel *)level;

- (void)verboseWithNSString:(NSString *)message;

- (void)verboseWithNSString:(NSString *)message
      withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)verboseWithNSString:(NSString *)format
          withNSObjectArray:(IOSObjectArray *)arguments;

- (void)debugWithNSString:(NSString *)message;

- (void)debugWithNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)debugWithNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)infoWithNSString:(NSString *)message;

- (void)infoWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)infoWithNSString:(NSString *)format
       withNSObjectArray:(IOSObjectArray *)arguments;

- (void)warnWithNSString:(NSString *)message;

- (void)warnWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)warnWithNSString:(NSString *)format
       withNSObjectArray:(IOSObjectArray *)arguments;

- (void)errorWithNSString:(NSString *)message;

- (void)errorWithNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)errorWithNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)message
    withJavaLangThrowable:(JavaLangThrowable *)tr;

- (void)logWithPSLogLevel:(PSLogLevel *)level
             withNSString:(NSString *)format
        withNSObjectArray:(IOSObjectArray *)arguments;

@end

J2OBJC_EMPTY_STATIC_INIT(PSLogger)

J2OBJC_TYPE_LITERAL_HEADER(PSLogger)

#define ComDevexpertsPipestoneCommonUtilLoggingLogger PSLogger

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogger")
