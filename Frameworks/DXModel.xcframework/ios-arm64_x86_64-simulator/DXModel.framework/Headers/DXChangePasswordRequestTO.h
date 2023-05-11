
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXChangePasswordRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO || defined(INCLUDE_DXChangePasswordRequestTO))
#define DXChangePasswordRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXChangePasswordRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXChangePasswordRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXChangePasswordRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)login
                              withNSString:(NSString *)currentPassword
                              withNSString:(NSString *)newPassword;

- (DXChangePasswordRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXChangePasswordRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getCurrentPassword;

- (NSString *)getLogin;

- (NSString *)getNewPassword;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrentPasswordWithNSString:(NSString *)currentPassword;

- (void)setLoginWithNSString:(NSString *)login;

- (void)setNewPasswordWithNSString:(NSString *)newPassword;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXChangePasswordRequestTO)

inline DXChangePasswordRequestTO *DXChangePasswordRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChangePasswordRequestTO *DXChangePasswordRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChangePasswordRequestTO, EMPTY, DXChangePasswordRequestTO *)

FOUNDATION_EXPORT void DXChangePasswordRequestTO_initWithNSString_withNSString_withNSString_(DXChangePasswordRequestTO *self, NSString *login, NSString *currentPassword, NSString *newPassword);

FOUNDATION_EXPORT DXChangePasswordRequestTO *new_DXChangePasswordRequestTO_initWithNSString_withNSString_withNSString_(NSString *login, NSString *currentPassword, NSString *newPassword) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChangePasswordRequestTO *create_DXChangePasswordRequestTO_initWithNSString_withNSString_withNSString_(NSString *login, NSString *currentPassword, NSString *newPassword);

FOUNDATION_EXPORT void DXChangePasswordRequestTO_init(DXChangePasswordRequestTO *self);

FOUNDATION_EXPORT DXChangePasswordRequestTO *new_DXChangePasswordRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChangePasswordRequestTO *create_DXChangePasswordRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXChangePasswordRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO DXChangePasswordRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordRequestTO")
