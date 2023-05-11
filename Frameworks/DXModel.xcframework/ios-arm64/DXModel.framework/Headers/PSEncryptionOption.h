
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptionOption_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption || defined(INCLUDE_PSEncryptionOption))
#define PSEncryptionOption_

@class IOSByteArray;
@class PSCompactInputStream;
@class PSCompactOutputStream;
@class PSEncryptionType;

@interface PSEncryptionOption : NSObject
@property (readonly, class, strong) PSEncryptionOption *NONE NS_SWIFT_NAME(NONE);

+ (PSEncryptionOption *)NONE;

#pragma mark Public

- (instancetype __nonnull)initWithPSEncryptionType:(PSEncryptionType *)type
                                     withByteArray:(IOSByteArray *)sessionKey;

- (jboolean)isEqual:(id)o;

- (IOSByteArray *)getSessionKey;

- (PSEncryptionType *)getType;

- (NSUInteger)hash;

+ (PSEncryptionOption *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

- (NSString *)description;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSEncryptionOption)

inline PSEncryptionOption *PSEncryptionOption_get_NONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSEncryptionOption *PSEncryptionOption_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSEncryptionOption, NONE, PSEncryptionOption *)

FOUNDATION_EXPORT void PSEncryptionOption_initWithPSEncryptionType_withByteArray_(PSEncryptionOption *self, PSEncryptionType *type, IOSByteArray *sessionKey);

FOUNDATION_EXPORT PSEncryptionOption *new_PSEncryptionOption_initWithPSEncryptionType_withByteArray_(PSEncryptionType *type, IOSByteArray *sessionKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEncryptionOption *create_PSEncryptionOption_initWithPSEncryptionType_withByteArray_(PSEncryptionType *type, IOSByteArray *sessionKey);

FOUNDATION_EXPORT PSEncryptionOption *PSEncryptionOption_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptionOption)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption PSEncryptionOption;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionOption")
