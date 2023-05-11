
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSerializationProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor || defined(INCLUDE_PSSerializationProcessor))
#define PSSerializationProcessor_

@class PSSerializationProcessor_ValidationResult;
@protocol PSClassFactoryConnection;
@protocol PSConnection;

@protocol PSSerializationProcessor < JavaObject >

- (PSSerializationProcessor_ValidationResult *)isSupportedWithInt:(jint)version_
                                                     withNSString:(NSString *)checksum;

- (jint)chooseVersionWithInt:(jint)version_;

- (id<PSClassFactoryConnection>)processWithPSConnection:(id<PSConnection>)connection
                                                withInt:(jint)version_;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSerializationProcessor)

J2OBJC_TYPE_LITERAL_HEADER(PSSerializationProcessor)

#define ComDevexpertsPipestoneCommonIoCustomSerializationProcessor PSSerializationProcessor

#endif

#if !defined (PSSerializationProcessor_ValidationResult_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor || defined(INCLUDE_PSSerializationProcessor_ValidationResult))
#define PSSerializationProcessor_ValidationResult_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PSSerializationProcessor_ValidationResult_Enum) {
  PSSerializationProcessor_ValidationResult_Enum_VALID = 0,
  PSSerializationProcessor_ValidationResult_Enum_UNSUPPORTED_API_VERSION = 1,
  PSSerializationProcessor_ValidationResult_Enum_INVALID_CHECKSUM = 2,
};

@interface PSSerializationProcessor_ValidationResult : JavaLangEnum

@property (readonly, class, nonnull) PSSerializationProcessor_ValidationResult *VALID NS_SWIFT_NAME(VALID);
@property (readonly, class, nonnull) PSSerializationProcessor_ValidationResult *UNSUPPORTED_API_VERSION NS_SWIFT_NAME(UNSUPPORTED_API_VERSION);
@property (readonly, class, nonnull) PSSerializationProcessor_ValidationResult *INVALID_CHECKSUM NS_SWIFT_NAME(INVALID_CHECKSUM);
+ (PSSerializationProcessor_ValidationResult * __nonnull)VALID;

+ (PSSerializationProcessor_ValidationResult * __nonnull)UNSUPPORTED_API_VERSION;

+ (PSSerializationProcessor_ValidationResult * __nonnull)INVALID_CHECKSUM;

#pragma mark Public

+ (PSSerializationProcessor_ValidationResult *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PSSerializationProcessor_ValidationResult_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PSSerializationProcessor_ValidationResult)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PSSerializationProcessor_ValidationResult *PSSerializationProcessor_ValidationResult_values_[];

inline PSSerializationProcessor_ValidationResult *PSSerializationProcessor_ValidationResult_get_VALID(void);
J2OBJC_ENUM_CONSTANT(PSSerializationProcessor_ValidationResult, VALID)

inline PSSerializationProcessor_ValidationResult *PSSerializationProcessor_ValidationResult_get_UNSUPPORTED_API_VERSION(void);
J2OBJC_ENUM_CONSTANT(PSSerializationProcessor_ValidationResult, UNSUPPORTED_API_VERSION)

inline PSSerializationProcessor_ValidationResult *PSSerializationProcessor_ValidationResult_get_INVALID_CHECKSUM(void);
J2OBJC_ENUM_CONSTANT(PSSerializationProcessor_ValidationResult, INVALID_CHECKSUM)

FOUNDATION_EXPORT IOSObjectArray *PSSerializationProcessor_ValidationResult_values(void);

FOUNDATION_EXPORT PSSerializationProcessor_ValidationResult *PSSerializationProcessor_ValidationResult_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSSerializationProcessor_ValidationResult *PSSerializationProcessor_ValidationResult_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PSSerializationProcessor_ValidationResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializationProcessor")
