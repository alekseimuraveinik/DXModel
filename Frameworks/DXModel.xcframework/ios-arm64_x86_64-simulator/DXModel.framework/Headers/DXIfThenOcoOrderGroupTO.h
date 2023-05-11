
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXIfThenOcoOrderGroupTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO || defined(INCLUDE_DXIfThenOcoOrderGroupTO))
#define DXIfThenOcoOrderGroupTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO 1
#define INCLUDE_DXOrderGroupTO 1
#include "DXOrderGroupTO.h"

@class DXOcoOrderGroupTO;
@class DXOrderTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXIfThenOcoOrderGroupTO : DXOrderGroupTO
@property (readonly, class, strong) DXIfThenOcoOrderGroupTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXIfThenOcoOrderGroupTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXIfThenOcoOrderGroupTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXIfThenOcoOrderGroupTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOrderTO *)getIfOrder;

- (DXOcoOrderGroupTO *)getOcoOrderGroup;

- (PSListTO *)getOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setIfOrderWithDXOrderTO:(DXOrderTO *)ifOrder;

- (void)setOcoOrderGroupWithDXOcoOrderGroupTO:(DXOcoOrderGroupTO *)ocoOrderGroup;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXIfThenOcoOrderGroupTO)

inline DXIfThenOcoOrderGroupTO *DXIfThenOcoOrderGroupTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXIfThenOcoOrderGroupTO *DXIfThenOcoOrderGroupTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXIfThenOcoOrderGroupTO, EMPTY, DXIfThenOcoOrderGroupTO *)

FOUNDATION_EXPORT void DXIfThenOcoOrderGroupTO_init(DXIfThenOcoOrderGroupTO *self);

FOUNDATION_EXPORT DXIfThenOcoOrderGroupTO *new_DXIfThenOcoOrderGroupTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXIfThenOcoOrderGroupTO *create_DXIfThenOcoOrderGroupTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXIfThenOcoOrderGroupTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO DXIfThenOcoOrderGroupTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsIfThenOcoOrderGroupTO")
