
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBaseLogger_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger || defined(INCLUDE_PSBaseLogger))
#define PSBaseLogger_

#define RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogger 1
#define INCLUDE_PSLogger 1
#include "PSLogger.h"

@class IOSObjectArray;
@class JavaLangThrowable;

@interface PSBaseLogger : NSObject < PSLogger >

#pragma mark Public

- (instancetype __nonnull)init;

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

@end

J2OBJC_EMPTY_STATIC_INIT(PSBaseLogger)

FOUNDATION_EXPORT void PSBaseLogger_init(PSBaseLogger *self);

J2OBJC_TYPE_LITERAL_HEADER(PSBaseLogger)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger PSBaseLogger;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingImplBaseLogger")
