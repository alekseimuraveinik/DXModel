
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLoginRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO || defined(INCLUDE_DXLoginRequestTO))
#define DXLoginRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAbstractAuthorizationDataTO;
@class DXAccountKeyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXLoginRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXLoginRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLoginRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXAbstractAuthorizationDataTO:(DXAbstractAuthorizationDataTO *)authorizationData
                                             withDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (DXLoginRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXLoginRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (DXAbstractAuthorizationDataTO *)getAuthorizationData;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setAuthorizationDataWithDXAbstractAuthorizationDataTO:(DXAbstractAuthorizationDataTO *)authorizationData;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXLoginRequestTO)

inline DXLoginRequestTO *DXLoginRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLoginRequestTO *DXLoginRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLoginRequestTO, EMPTY, DXLoginRequestTO *)

FOUNDATION_EXPORT void DXLoginRequestTO_initWithDXAbstractAuthorizationDataTO_withDXAccountKeyTO_(DXLoginRequestTO *self, DXAbstractAuthorizationDataTO *authorizationData, DXAccountKeyTO *accountKey);

FOUNDATION_EXPORT DXLoginRequestTO *new_DXLoginRequestTO_initWithDXAbstractAuthorizationDataTO_withDXAccountKeyTO_(DXAbstractAuthorizationDataTO *authorizationData, DXAccountKeyTO *accountKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLoginRequestTO *create_DXLoginRequestTO_initWithDXAbstractAuthorizationDataTO_withDXAccountKeyTO_(DXAbstractAuthorizationDataTO *authorizationData, DXAccountKeyTO *accountKey);

FOUNDATION_EXPORT void DXLoginRequestTO_init(DXLoginRequestTO *self);

FOUNDATION_EXPORT DXLoginRequestTO *new_DXLoginRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLoginRequestTO *create_DXLoginRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLoginRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO DXLoginRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginRequestTO")
