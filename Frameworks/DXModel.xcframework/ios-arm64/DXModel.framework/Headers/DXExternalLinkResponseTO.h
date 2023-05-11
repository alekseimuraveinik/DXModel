
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXExternalLinkResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO || defined(INCLUDE_DXExternalLinkResponseTO))
#define DXExternalLinkResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXKeyValuesTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXExternalLinkResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXExternalLinkResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXExternalLinkResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXKeyValuesTO:(DXKeyValuesTO *)params;

- (DXExternalLinkResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXExternalLinkResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXKeyValuesTO *)getParams;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setParamsWithDXKeyValuesTO:(DXKeyValuesTO *)params;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXExternalLinkResponseTO)

inline DXExternalLinkResponseTO *DXExternalLinkResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXExternalLinkResponseTO *DXExternalLinkResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXExternalLinkResponseTO, EMPTY, DXExternalLinkResponseTO *)

FOUNDATION_EXPORT void DXExternalLinkResponseTO_initWithDXKeyValuesTO_(DXExternalLinkResponseTO *self, DXKeyValuesTO *params);

FOUNDATION_EXPORT DXExternalLinkResponseTO *new_DXExternalLinkResponseTO_initWithDXKeyValuesTO_(DXKeyValuesTO *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXExternalLinkResponseTO *create_DXExternalLinkResponseTO_initWithDXKeyValuesTO_(DXKeyValuesTO *params);

FOUNDATION_EXPORT void DXExternalLinkResponseTO_init(DXExternalLinkResponseTO *self);

FOUNDATION_EXPORT DXExternalLinkResponseTO *new_DXExternalLinkResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXExternalLinkResponseTO *create_DXExternalLinkResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXExternalLinkResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO DXExternalLinkResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkResponseTO")
