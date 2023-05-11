
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPortalLinksResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO || defined(INCLUDE_DXPortalLinksResponseTO))
#define DXPortalLinksResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXPortalLinksTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPortalLinksResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXPortalLinksResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPortalLinksResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPortalLinksResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPortalLinksResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXPortalLinksTO *)getLinks;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLinksWithDXPortalLinksTO:(DXPortalLinksTO *)links;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPortalLinksResponseTO)

inline DXPortalLinksResponseTO *DXPortalLinksResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPortalLinksResponseTO *DXPortalLinksResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPortalLinksResponseTO, EMPTY, DXPortalLinksResponseTO *)

FOUNDATION_EXPORT void DXPortalLinksResponseTO_init(DXPortalLinksResponseTO *self);

FOUNDATION_EXPORT DXPortalLinksResponseTO *new_DXPortalLinksResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPortalLinksResponseTO *create_DXPortalLinksResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPortalLinksResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO DXPortalLinksResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksResponseTO")
