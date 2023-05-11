
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPortalLinksRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO || defined(INCLUDE_DXPortalLinksRequestTO))
#define DXPortalLinksRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPortalLinksRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXPortalLinksRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPortalLinksRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPortalLinksRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPortalLinksRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXPortalLinksRequestTO)

inline DXPortalLinksRequestTO *DXPortalLinksRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPortalLinksRequestTO *DXPortalLinksRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPortalLinksRequestTO, EMPTY, DXPortalLinksRequestTO *)

FOUNDATION_EXPORT void DXPortalLinksRequestTO_init(DXPortalLinksRequestTO *self);

FOUNDATION_EXPORT DXPortalLinksRequestTO *new_DXPortalLinksRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPortalLinksRequestTO *create_DXPortalLinksRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPortalLinksRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO DXPortalLinksRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksRequestTO")
