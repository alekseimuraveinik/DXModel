
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptionParams_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams || defined(INCLUDE_PSEncryptionParams))
#define PSEncryptionParams_

@class PSEncryptionType;

@interface PSEncryptionParams : NSObject {
 @public
  PSEncryptionType *type_;
  NSString *publicKey_;
  jint keyStrength_;
}
@property (readonly, class, strong) PSEncryptionParams *NONE NS_SWIFT_NAME(NONE);

+ (PSEncryptionParams *)NONE;

#pragma mark Public

- (instancetype __nonnull)initWithPSEncryptionType:(PSEncryptionType *)type
                                      withNSString:(NSString *)publicKey
                                           withInt:(jint)sessionKeyStrength;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSEncryptionParams)

J2OBJC_FIELD_SETTER(PSEncryptionParams, type_, PSEncryptionType *)
J2OBJC_FIELD_SETTER(PSEncryptionParams, publicKey_, NSString *)

inline PSEncryptionParams *PSEncryptionParams_get_NONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSEncryptionParams *PSEncryptionParams_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSEncryptionParams, NONE, PSEncryptionParams *)

FOUNDATION_EXPORT void PSEncryptionParams_initWithPSEncryptionType_withNSString_withInt_(PSEncryptionParams *self, PSEncryptionType *type, NSString *publicKey, jint sessionKeyStrength);

FOUNDATION_EXPORT PSEncryptionParams *new_PSEncryptionParams_initWithPSEncryptionType_withNSString_withInt_(PSEncryptionType *type, NSString *publicKey, jint sessionKeyStrength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEncryptionParams *create_PSEncryptionParams_initWithPSEncryptionType_withNSString_withInt_(PSEncryptionType *type, NSString *publicKey, jint sessionKeyStrength);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptionParams)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams PSEncryptionParams;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionParams")
