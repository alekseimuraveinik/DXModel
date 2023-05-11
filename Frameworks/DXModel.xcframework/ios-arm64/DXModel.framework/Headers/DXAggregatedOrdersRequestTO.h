
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedOrdersRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO || defined(INCLUDE_DXAggregatedOrdersRequestTO))
#define DXAggregatedOrdersRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAggregatedOrdersRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAggregatedOrdersRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAggregatedOrdersRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAggregatedOrdersRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAggregatedOrdersRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXAggregatedOrdersRequestTO)

inline DXAggregatedOrdersRequestTO *DXAggregatedOrdersRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedOrdersRequestTO *DXAggregatedOrdersRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedOrdersRequestTO, EMPTY, DXAggregatedOrdersRequestTO *)

FOUNDATION_EXPORT void DXAggregatedOrdersRequestTO_init(DXAggregatedOrdersRequestTO *self);

FOUNDATION_EXPORT DXAggregatedOrdersRequestTO *new_DXAggregatedOrdersRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedOrdersRequestTO *create_DXAggregatedOrdersRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedOrdersRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO DXAggregatedOrdersRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersRequestTO")
