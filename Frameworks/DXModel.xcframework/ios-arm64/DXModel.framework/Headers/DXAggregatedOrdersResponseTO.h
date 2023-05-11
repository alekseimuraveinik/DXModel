
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedOrdersResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO || defined(INCLUDE_DXAggregatedOrdersResponseTO))
#define DXAggregatedOrdersResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAggregatedOrdersResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAggregatedOrdersResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAggregatedOrdersResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAggregatedOrdersResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAggregatedOrdersResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getAggregatedOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAggregatedOrdersWithPSListTO:(PSListTO *)aggregatedOrders;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAggregatedOrdersResponseTO)

inline DXAggregatedOrdersResponseTO *DXAggregatedOrdersResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedOrdersResponseTO *DXAggregatedOrdersResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedOrdersResponseTO, EMPTY, DXAggregatedOrdersResponseTO *)

FOUNDATION_EXPORT void DXAggregatedOrdersResponseTO_init(DXAggregatedOrdersResponseTO *self);

FOUNDATION_EXPORT DXAggregatedOrdersResponseTO *new_DXAggregatedOrdersResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedOrdersResponseTO *create_DXAggregatedOrdersResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedOrdersResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO DXAggregatedOrdersResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrdersResponseTO")
