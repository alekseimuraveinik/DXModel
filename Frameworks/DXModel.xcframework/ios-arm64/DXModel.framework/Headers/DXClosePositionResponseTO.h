
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXClosePositionResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO || defined(INCLUDE_DXClosePositionResponseTO))
#define DXClosePositionResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXClosePositionResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXClosePositionResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXClosePositionResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXClosePositionResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXClosePositionResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXClosePositionResponseTO)

inline DXClosePositionResponseTO *DXClosePositionResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXClosePositionResponseTO *DXClosePositionResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXClosePositionResponseTO, EMPTY, DXClosePositionResponseTO *)

FOUNDATION_EXPORT void DXClosePositionResponseTO_initWithPSErrorTO_(DXClosePositionResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXClosePositionResponseTO *new_DXClosePositionResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXClosePositionResponseTO *create_DXClosePositionResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXClosePositionResponseTO_init(DXClosePositionResponseTO *self);

FOUNDATION_EXPORT DXClosePositionResponseTO *new_DXClosePositionResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXClosePositionResponseTO *create_DXClosePositionResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXClosePositionResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO DXClosePositionResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionResponseTO")
