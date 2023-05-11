
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO || defined(INCLUDE_DXPositionOrderValidationParamsTO))
#define DXPositionOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 1
#define INCLUDE_DXPricedOrderValidationParamsTO 1
#include "DXPricedOrderValidationParamsTO.h"

@protocol PSTransferObject;

@interface DXPositionOrderValidationParamsTO : DXPricedOrderValidationParamsTO
@property (readonly, class, strong) DXPositionOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPositionOrderValidationParamsTO *)change;

- (DXPositionOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXPositionOrderValidationParamsTO)

inline DXPositionOrderValidationParamsTO *DXPositionOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionOrderValidationParamsTO *DXPositionOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionOrderValidationParamsTO, EMPTY, DXPositionOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXPositionOrderValidationParamsTO_init(DXPositionOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXPositionOrderValidationParamsTO *new_DXPositionOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionOrderValidationParamsTO *create_DXPositionOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO DXPositionOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPositionOrderValidationParamsTO")
