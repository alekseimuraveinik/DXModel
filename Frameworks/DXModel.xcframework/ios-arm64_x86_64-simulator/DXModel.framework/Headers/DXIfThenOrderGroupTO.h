
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXIfThenOrderGroupTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO || defined(INCLUDE_DXIfThenOrderGroupTO))
#define DXIfThenOrderGroupTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO 1
#define INCLUDE_DXOrderGroupTO 1
#include "DXOrderGroupTO.h"

@class DXOrderTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXIfThenOrderGroupTO : DXOrderGroupTO
@property (readonly, class, strong) DXIfThenOrderGroupTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXIfThenOrderGroupTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXIfThenOrderGroupTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXIfThenOrderGroupTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOrderTO *)getIfOrder;

- (PSListTO *)getOrders;

- (PSListTO *)getThenOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setIfOrderWithDXOrderTO:(DXOrderTO *)ifOrder;

- (void)setThenOrdersWithPSListTO:(PSListTO *)thenOrders;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXIfThenOrderGroupTO)

inline DXIfThenOrderGroupTO *DXIfThenOrderGroupTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXIfThenOrderGroupTO *DXIfThenOrderGroupTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXIfThenOrderGroupTO, EMPTY, DXIfThenOrderGroupTO *)

FOUNDATION_EXPORT void DXIfThenOrderGroupTO_init(DXIfThenOrderGroupTO *self);

FOUNDATION_EXPORT DXIfThenOrderGroupTO *new_DXIfThenOrderGroupTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXIfThenOrderGroupTO *create_DXIfThenOrderGroupTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXIfThenOrderGroupTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO DXIfThenOrderGroupTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOrderGroupTO")
