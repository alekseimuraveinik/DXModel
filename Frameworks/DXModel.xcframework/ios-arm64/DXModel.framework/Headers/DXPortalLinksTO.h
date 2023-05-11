
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPortalLinksTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO || defined(INCLUDE_DXPortalLinksTO))
#define DXPortalLinksTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPortalLinksTO : PSBaseTransferObject
@property (readonly, class, strong) DXPortalLinksTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPortalLinksTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPortalLinksTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPortalLinksTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getPasswordResetLink;

- (NSString *)getSignInLink;

- (NSString *)getSignUpLink;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPasswordResetLinkWithNSString:(NSString *)passwordResetLink;

- (void)setSignInLinkWithNSString:(NSString *)signInLink;

- (void)setSignUpLinkWithNSString:(NSString *)signUpLink;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPortalLinksTO)

inline DXPortalLinksTO *DXPortalLinksTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPortalLinksTO *DXPortalLinksTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPortalLinksTO, EMPTY, DXPortalLinksTO *)

FOUNDATION_EXPORT void DXPortalLinksTO_init(DXPortalLinksTO *self);

FOUNDATION_EXPORT DXPortalLinksTO *new_DXPortalLinksTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPortalLinksTO *create_DXPortalLinksTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPortalLinksTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO DXPortalLinksTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksTO")
