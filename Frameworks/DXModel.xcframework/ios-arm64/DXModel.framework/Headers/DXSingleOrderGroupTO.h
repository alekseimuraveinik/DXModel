
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSingleOrderGroupTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO || defined(INCLUDE_DXSingleOrderGroupTO))
#define DXSingleOrderGroupTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO 1
#define INCLUDE_DXOrderGroupTO 1
#include "DXOrderGroupTO.h"

@class DXOrderTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXSingleOrderGroupTO : DXOrderGroupTO
@property (readonly, class, strong) DXSingleOrderGroupTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSingleOrderGroupTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXSingleOrderGroupTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSingleOrderGroupTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOrderTO *)getOrder;

- (PSListTO *)getOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOrderWithDXOrderTO:(DXOrderTO *)order;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSingleOrderGroupTO)

inline DXSingleOrderGroupTO *DXSingleOrderGroupTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSingleOrderGroupTO *DXSingleOrderGroupTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSingleOrderGroupTO, EMPTY, DXSingleOrderGroupTO *)

FOUNDATION_EXPORT void DXSingleOrderGroupTO_init(DXSingleOrderGroupTO *self);

FOUNDATION_EXPORT DXSingleOrderGroupTO *new_DXSingleOrderGroupTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleOrderGroupTO *create_DXSingleOrderGroupTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSingleOrderGroupTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO DXSingleOrderGroupTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsSingleOrderGroupTO")
