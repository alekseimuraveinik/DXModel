
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeError")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolHandshakeError
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeError 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeError 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolHandshakeError

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSHandshakeError_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeError || defined(INCLUDE_PSHandshakeError))
#define PSHandshakeError_

@class PSCompactInputStream;
@class PSCompactOutputStream;
@class PSHandshakeError_Code;

@interface PSHandshakeError : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithPSHandshakeError_Code:(PSHandshakeError_Code *)code
                                           withNSString:(NSString *)description_;

- (jboolean)isEqual:(id)o;

- (PSHandshakeError_Code *)getCode;

- (NSString *)getDescription;

- (NSUInteger)hash;

+ (PSHandshakeError *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

- (NSString *)description;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSHandshakeError)

FOUNDATION_EXPORT void PSHandshakeError_initWithPSHandshakeError_Code_withNSString_(PSHandshakeError *self, PSHandshakeError_Code *code, NSString *description_);

FOUNDATION_EXPORT PSHandshakeError *new_PSHandshakeError_initWithPSHandshakeError_Code_withNSString_(PSHandshakeError_Code *code, NSString *description_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSHandshakeError *create_PSHandshakeError_initWithPSHandshakeError_Code_withNSString_(PSHandshakeError_Code *code, NSString *description_);

FOUNDATION_EXPORT PSHandshakeError *PSHandshakeError_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSHandshakeError)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolHandshakeError PSHandshakeError;

#endif

#if !defined (PSHandshakeError_Code_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeError || defined(INCLUDE_PSHandshakeError_Code))
#define PSHandshakeError_Code_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class PSCompactInputStream;

typedef NS_ENUM(NSUInteger, PSHandshakeError_Code_Enum) {
  PSHandshakeError_Code_Enum_UNKNOWN = 0,
  PSHandshakeError_Code_Enum_UNSUPPORTED_COMPRESSION = 1,
  PSHandshakeError_Code_Enum_UNSUPPORTED_SERIALIZATION = 2,
  PSHandshakeError_Code_Enum_UNSUPPORTED_ENCRYPTION = 3,
  PSHandshakeError_Code_Enum_INVALID_ENCRYPTION = 4,
  PSHandshakeError_Code_Enum_INVALID_CHECKSUM = 5,
};

@interface PSHandshakeError_Code : JavaLangEnum

@property (readonly, class, nonnull) PSHandshakeError_Code *UNKNOWN NS_SWIFT_NAME(UNKNOWN);
@property (readonly, class, nonnull) PSHandshakeError_Code *UNSUPPORTED_COMPRESSION NS_SWIFT_NAME(UNSUPPORTED_COMPRESSION);
@property (readonly, class, nonnull) PSHandshakeError_Code *UNSUPPORTED_SERIALIZATION NS_SWIFT_NAME(UNSUPPORTED_SERIALIZATION);
@property (readonly, class, nonnull) PSHandshakeError_Code *UNSUPPORTED_ENCRYPTION NS_SWIFT_NAME(UNSUPPORTED_ENCRYPTION);
@property (readonly, class, nonnull) PSHandshakeError_Code *INVALID_ENCRYPTION NS_SWIFT_NAME(INVALID_ENCRYPTION);
@property (readonly, class, nonnull) PSHandshakeError_Code *INVALID_CHECKSUM NS_SWIFT_NAME(INVALID_CHECKSUM);
+ (PSHandshakeError_Code * __nonnull)UNKNOWN;

+ (PSHandshakeError_Code * __nonnull)UNSUPPORTED_COMPRESSION;

+ (PSHandshakeError_Code * __nonnull)UNSUPPORTED_SERIALIZATION;

+ (PSHandshakeError_Code * __nonnull)UNSUPPORTED_ENCRYPTION;

+ (PSHandshakeError_Code * __nonnull)INVALID_ENCRYPTION;

+ (PSHandshakeError_Code * __nonnull)INVALID_CHECKSUM;

#pragma mark Public

+ (PSHandshakeError_Code *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

+ (PSHandshakeError_Code *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PSHandshakeError_Code_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PSHandshakeError_Code)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PSHandshakeError_Code *PSHandshakeError_Code_values_[];

inline PSHandshakeError_Code *PSHandshakeError_Code_get_UNKNOWN(void);
J2OBJC_ENUM_CONSTANT(PSHandshakeError_Code, UNKNOWN)

inline PSHandshakeError_Code *PSHandshakeError_Code_get_UNSUPPORTED_COMPRESSION(void);
J2OBJC_ENUM_CONSTANT(PSHandshakeError_Code, UNSUPPORTED_COMPRESSION)

inline PSHandshakeError_Code *PSHandshakeError_Code_get_UNSUPPORTED_SERIALIZATION(void);
J2OBJC_ENUM_CONSTANT(PSHandshakeError_Code, UNSUPPORTED_SERIALIZATION)

inline PSHandshakeError_Code *PSHandshakeError_Code_get_UNSUPPORTED_ENCRYPTION(void);
J2OBJC_ENUM_CONSTANT(PSHandshakeError_Code, UNSUPPORTED_ENCRYPTION)

inline PSHandshakeError_Code *PSHandshakeError_Code_get_INVALID_ENCRYPTION(void);
J2OBJC_ENUM_CONSTANT(PSHandshakeError_Code, INVALID_ENCRYPTION)

inline PSHandshakeError_Code *PSHandshakeError_Code_get_INVALID_CHECKSUM(void);
J2OBJC_ENUM_CONSTANT(PSHandshakeError_Code, INVALID_CHECKSUM)

FOUNDATION_EXPORT PSHandshakeError_Code *PSHandshakeError_Code_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

FOUNDATION_EXPORT IOSObjectArray *PSHandshakeError_Code_values(void);

FOUNDATION_EXPORT PSHandshakeError_Code *PSHandshakeError_Code_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSHandshakeError_Code *PSHandshakeError_Code_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PSHandshakeError_Code)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeError")
