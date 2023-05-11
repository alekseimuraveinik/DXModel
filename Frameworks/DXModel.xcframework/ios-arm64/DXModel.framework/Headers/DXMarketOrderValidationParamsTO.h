
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO || defined(INCLUDE_DXMarketOrderValidationParamsTO))
#define DXMarketOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 1
#define INCLUDE_DXPricedOrderValidationParamsTO 1
#include "DXPricedOrderValidationParamsTO.h"

@protocol PSTransferObject;

@interface DXMarketOrderValidationParamsTO : DXPricedOrderValidationParamsTO
@property (readonly, class, strong) DXMarketOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketOrderValidationParamsTO *)change;

- (DXMarketOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXMarketOrderValidationParamsTO)

inline DXMarketOrderValidationParamsTO *DXMarketOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketOrderValidationParamsTO *DXMarketOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketOrderValidationParamsTO, EMPTY, DXMarketOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXMarketOrderValidationParamsTO_init(DXMarketOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXMarketOrderValidationParamsTO *new_DXMarketOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketOrderValidationParamsTO *create_DXMarketOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO DXMarketOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationMarketOrderValidationParamsTO")
