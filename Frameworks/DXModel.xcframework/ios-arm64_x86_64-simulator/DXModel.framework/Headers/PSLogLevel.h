
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogLevel")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogLevel
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogLevel 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogLevel 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilLoggingLogLevel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLogLevel_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogLevel || defined(INCLUDE_PSLogLevel))
#define PSLogLevel_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PSLogLevel_Enum) {
  PSLogLevel_Enum_VERBOSE = 0,
  PSLogLevel_Enum_DEBUG = 1,
  PSLogLevel_Enum_INFO = 2,
  PSLogLevel_Enum_WARN = 3,
  PSLogLevel_Enum_ERROR = 4,
};

@interface PSLogLevel : JavaLangEnum

@property (readonly, class, nonnull) PSLogLevel *VERBOSE NS_SWIFT_NAME(VERBOSE);
@property (readonly, class, nonnull) PSLogLevel *DEBUG_ NS_SWIFT_NAME(DEBUG_);
@property (readonly, class, nonnull) PSLogLevel *INFO NS_SWIFT_NAME(INFO);
@property (readonly, class, nonnull) PSLogLevel *WARN NS_SWIFT_NAME(WARN);
@property (readonly, class, nonnull) PSLogLevel *ERROR NS_SWIFT_NAME(ERROR);
+ (PSLogLevel * __nonnull)VERBOSE;

+ (PSLogLevel * __nonnull)DEBUG_;

+ (PSLogLevel * __nonnull)INFO;

+ (PSLogLevel * __nonnull)WARN;

+ (PSLogLevel * __nonnull)ERROR;

#pragma mark Public

+ (PSLogLevel *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PSLogLevel_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PSLogLevel)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PSLogLevel *PSLogLevel_values_[];

inline PSLogLevel *PSLogLevel_get_VERBOSE(void);
J2OBJC_ENUM_CONSTANT(PSLogLevel, VERBOSE)

inline PSLogLevel *PSLogLevel_get_DEBUG(void);
J2OBJC_ENUM_CONSTANT(PSLogLevel, DEBUG)

inline PSLogLevel *PSLogLevel_get_INFO(void);
J2OBJC_ENUM_CONSTANT(PSLogLevel, INFO)

inline PSLogLevel *PSLogLevel_get_WARN(void);
J2OBJC_ENUM_CONSTANT(PSLogLevel, WARN)

inline PSLogLevel *PSLogLevel_get_ERROR(void);
J2OBJC_ENUM_CONSTANT(PSLogLevel, ERROR)

FOUNDATION_EXPORT IOSObjectArray *PSLogLevel_values(void);

FOUNDATION_EXPORT PSLogLevel *PSLogLevel_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSLogLevel *PSLogLevel_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PSLogLevel)

@compatibility_alias ComDevexpertsPipestoneCommonUtilLoggingLogLevel PSLogLevel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilLoggingLogLevel")
