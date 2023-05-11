
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXRestorePasswordRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO || defined(INCLUDE_DXRestorePasswordRequestTO))
#define DXRestorePasswordRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXRestorePasswordRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXRestorePasswordRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXRestorePasswordRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)email
                              withNSString:(NSString *)phone
                              withNSString:(NSString *)newPassword
                              withNSString:(NSString *)verificationCode;

- (DXRestorePasswordRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXRestorePasswordRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getEmail;

- (NSString *)getNewPassword;

- (NSString *)getPhone;

- (NSString *)getVerificationCode;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setEmailWithNSString:(NSString *)email;

- (void)setNewPasswordWithNSString:(NSString *)newPassword;

- (void)setPhoneWithNSString:(NSString *)phone;

- (void)setVerificationCodeWithNSString:(NSString *)verificationCode;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXRestorePasswordRequestTO)

inline DXRestorePasswordRequestTO *DXRestorePasswordRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXRestorePasswordRequestTO *DXRestorePasswordRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXRestorePasswordRequestTO, EMPTY, DXRestorePasswordRequestTO *)

FOUNDATION_EXPORT void DXRestorePasswordRequestTO_initWithNSString_withNSString_withNSString_withNSString_(DXRestorePasswordRequestTO *self, NSString *email, NSString *phone, NSString *newPassword, NSString *verificationCode);

FOUNDATION_EXPORT DXRestorePasswordRequestTO *new_DXRestorePasswordRequestTO_initWithNSString_withNSString_withNSString_withNSString_(NSString *email, NSString *phone, NSString *newPassword, NSString *verificationCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRestorePasswordRequestTO *create_DXRestorePasswordRequestTO_initWithNSString_withNSString_withNSString_withNSString_(NSString *email, NSString *phone, NSString *newPassword, NSString *verificationCode);

FOUNDATION_EXPORT void DXRestorePasswordRequestTO_init(DXRestorePasswordRequestTO *self);

FOUNDATION_EXPORT DXRestorePasswordRequestTO *new_DXRestorePasswordRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRestorePasswordRequestTO *create_DXRestorePasswordRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXRestorePasswordRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO DXRestorePasswordRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordRequestTO")
