
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLimitOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO || defined(INCLUDE_DXLimitOrderValidationParamsTO))
#define DXLimitOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 1
#define INCLUDE_DXPricedOrderValidationParamsTO 1
#include "DXPricedOrderValidationParamsTO.h"

@protocol PSTransferObject;

@interface DXLimitOrderValidationParamsTO : DXPricedOrderValidationParamsTO
@property (readonly, class, strong) DXLimitOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLimitOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXLimitOrderValidationParamsTO *)change;

- (DXLimitOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXLimitOrderValidationParamsTO)

inline DXLimitOrderValidationParamsTO *DXLimitOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLimitOrderValidationParamsTO *DXLimitOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLimitOrderValidationParamsTO, EMPTY, DXLimitOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXLimitOrderValidationParamsTO_init(DXLimitOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXLimitOrderValidationParamsTO *new_DXLimitOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLimitOrderValidationParamsTO *create_DXLimitOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLimitOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO DXLimitOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitOrderValidationParamsTO")
