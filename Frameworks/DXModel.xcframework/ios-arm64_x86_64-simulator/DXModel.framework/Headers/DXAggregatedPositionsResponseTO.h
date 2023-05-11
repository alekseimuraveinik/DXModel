
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedPositionsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO || defined(INCLUDE_DXAggregatedPositionsResponseTO))
#define DXAggregatedPositionsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAggregatedPositionsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAggregatedPositionsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAggregatedPositionsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAggregatedPositionsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAggregatedPositionsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getAggregatedPositions;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAggregatedPositionsWithPSListTO:(PSListTO *)aggregatedPositions;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAggregatedPositionsResponseTO)

inline DXAggregatedPositionsResponseTO *DXAggregatedPositionsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedPositionsResponseTO *DXAggregatedPositionsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedPositionsResponseTO, EMPTY, DXAggregatedPositionsResponseTO *)

FOUNDATION_EXPORT void DXAggregatedPositionsResponseTO_init(DXAggregatedPositionsResponseTO *self);

FOUNDATION_EXPORT DXAggregatedPositionsResponseTO *new_DXAggregatedPositionsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedPositionsResponseTO *create_DXAggregatedPositionsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedPositionsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO DXAggregatedPositionsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsResponseTO")
