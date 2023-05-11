
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCloseAllPositionResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO || defined(INCLUDE_DXCloseAllPositionResponseTO))
#define DXCloseAllPositionResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXCloseAllPositionResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXCloseAllPositionResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCloseAllPositionResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXCloseAllPositionResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCloseAllPositionResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getErrorTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCloseAllPositionResponseTO)

inline DXCloseAllPositionResponseTO *DXCloseAllPositionResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCloseAllPositionResponseTO *DXCloseAllPositionResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCloseAllPositionResponseTO, EMPTY, DXCloseAllPositionResponseTO *)

FOUNDATION_EXPORT void DXCloseAllPositionResponseTO_initWithPSErrorTO_(DXCloseAllPositionResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXCloseAllPositionResponseTO *new_DXCloseAllPositionResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseAllPositionResponseTO *create_DXCloseAllPositionResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXCloseAllPositionResponseTO_init(DXCloseAllPositionResponseTO *self);

FOUNDATION_EXPORT DXCloseAllPositionResponseTO *new_DXCloseAllPositionResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseAllPositionResponseTO *create_DXCloseAllPositionResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCloseAllPositionResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO DXCloseAllPositionResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionResponseTO")
