
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionCloseByResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO || defined(INCLUDE_DXPositionCloseByResponseTO))
#define DXPositionCloseByResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXPositionTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@class PSLongListTO;
@protocol PSTransferObject;

@interface DXPositionCloseByResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXPositionCloseByResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionCloseByResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXPositionTO:(DXPositionTO *)targetPosition
                                  withPSListTO:(PSListTO *)positions
                              withPSLongListTO:(PSLongListTO *)marginImpacts;

- (DXPositionCloseByResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionCloseByResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSLongListTO *)getMarginImpacts;

- (PSListTO *)getPositions;

- (DXPositionTO *)getTargetPosition;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMarginImpactsWithPSLongListTO:(PSLongListTO *)marginImpacts;

- (void)setPositionsWithPSListTO:(PSListTO *)positions;

- (void)setTargetPositionWithDXPositionTO:(DXPositionTO *)targetPosition;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPositionCloseByResponseTO)

inline DXPositionCloseByResponseTO *DXPositionCloseByResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionCloseByResponseTO *DXPositionCloseByResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionCloseByResponseTO, EMPTY, DXPositionCloseByResponseTO *)

FOUNDATION_EXPORT void DXPositionCloseByResponseTO_initWithDXPositionTO_withPSListTO_withPSLongListTO_(DXPositionCloseByResponseTO *self, DXPositionTO *targetPosition, PSListTO *positions, PSLongListTO *marginImpacts);

FOUNDATION_EXPORT DXPositionCloseByResponseTO *new_DXPositionCloseByResponseTO_initWithDXPositionTO_withPSListTO_withPSLongListTO_(DXPositionTO *targetPosition, PSListTO *positions, PSLongListTO *marginImpacts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionCloseByResponseTO *create_DXPositionCloseByResponseTO_initWithDXPositionTO_withPSListTO_withPSLongListTO_(DXPositionTO *targetPosition, PSListTO *positions, PSLongListTO *marginImpacts);

FOUNDATION_EXPORT void DXPositionCloseByResponseTO_init(DXPositionCloseByResponseTO *self);

FOUNDATION_EXPORT DXPositionCloseByResponseTO *new_DXPositionCloseByResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionCloseByResponseTO *create_DXPositionCloseByResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionCloseByResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO DXPositionCloseByResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByResponseTO")
