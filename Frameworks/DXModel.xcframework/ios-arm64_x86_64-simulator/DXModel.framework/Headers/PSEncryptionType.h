
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptionType_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType || defined(INCLUDE_PSEncryptionType))
#define PSEncryptionType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PSEncryptionType_Enum) {
  PSEncryptionType_Enum_NONE = 0,
  PSEncryptionType_Enum_RSA = 1,
};

@interface PSEncryptionType : JavaLangEnum

@property (readonly, class, nonnull) PSEncryptionType *NONE NS_SWIFT_NAME(NONE);
@property (readonly, class, nonnull) PSEncryptionType *RSA NS_SWIFT_NAME(RSA);
+ (PSEncryptionType * __nonnull)NONE;

+ (PSEncryptionType * __nonnull)RSA;

#pragma mark Public

- (NSString *)getCode;

- (jint)minimumKeyStrength;

+ (PSEncryptionType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PSEncryptionType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PSEncryptionType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PSEncryptionType *PSEncryptionType_values_[];

inline PSEncryptionType *PSEncryptionType_get_NONE(void);
J2OBJC_ENUM_CONSTANT(PSEncryptionType, NONE)

inline PSEncryptionType *PSEncryptionType_get_RSA(void);
J2OBJC_ENUM_CONSTANT(PSEncryptionType, RSA)

FOUNDATION_EXPORT IOSObjectArray *PSEncryptionType_values(void);

FOUNDATION_EXPORT PSEncryptionType *PSEncryptionType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSEncryptionType *PSEncryptionType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptionType)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptionType PSEncryptionType;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionType")
