
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedPositionsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO || defined(INCLUDE_DXAggregatedPositionsRequestTO))
#define DXAggregatedPositionsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXAggregatedPositionsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAggregatedPositionsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAggregatedPositionsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAggregatedPositionsRequestTO *)change;

- (DXAggregatedPositionsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXAggregatedPositionsRequestTO)

inline DXAggregatedPositionsRequestTO *DXAggregatedPositionsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedPositionsRequestTO *DXAggregatedPositionsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedPositionsRequestTO, EMPTY, DXAggregatedPositionsRequestTO *)

FOUNDATION_EXPORT void DXAggregatedPositionsRequestTO_init(DXAggregatedPositionsRequestTO *self);

FOUNDATION_EXPORT DXAggregatedPositionsRequestTO *new_DXAggregatedPositionsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedPositionsRequestTO *create_DXAggregatedPositionsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedPositionsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO DXAggregatedPositionsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionsRequestTO")
