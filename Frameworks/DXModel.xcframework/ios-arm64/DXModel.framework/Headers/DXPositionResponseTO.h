
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO || defined(INCLUDE_DXPositionResponseTO))
#define DXPositionResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXPositionResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXPositionResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPositionResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getPositions;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPositionsWithPSListTO:(PSListTO *)positions;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPositionResponseTO)

inline DXPositionResponseTO *DXPositionResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionResponseTO *DXPositionResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionResponseTO, EMPTY, DXPositionResponseTO *)

FOUNDATION_EXPORT void DXPositionResponseTO_init(DXPositionResponseTO *self);

FOUNDATION_EXPORT DXPositionResponseTO *new_DXPositionResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionResponseTO *create_DXPositionResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionPositionResponseTO DXPositionResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionResponseTO")
