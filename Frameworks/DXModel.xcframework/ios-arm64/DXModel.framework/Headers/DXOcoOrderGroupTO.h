
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOcoOrderGroupTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO || defined(INCLUDE_DXOcoOrderGroupTO))
#define DXOcoOrderGroupTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTO 1
#define INCLUDE_DXOrderGroupTO 1
#include "DXOrderGroupTO.h"

@class DXOrderTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOcoOrderGroupTO : DXOrderGroupTO
@property (readonly, class, strong) DXOcoOrderGroupTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOcoOrderGroupTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOcoOrderGroupTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOcoOrderGroupTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOrderTO *)getOcoOrder1;

- (DXOrderTO *)getOcoOrder2;

- (PSListTO *)getOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOcoOrder1WithDXOrderTO:(DXOrderTO *)ocoOrder1;

- (void)setOcoOrder2WithDXOrderTO:(DXOrderTO *)ocoOrder2;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOcoOrderGroupTO)

inline DXOcoOrderGroupTO *DXOcoOrderGroupTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOcoOrderGroupTO *DXOcoOrderGroupTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOcoOrderGroupTO, EMPTY, DXOcoOrderGroupTO *)

FOUNDATION_EXPORT void DXOcoOrderGroupTO_init(DXOcoOrderGroupTO *self);

FOUNDATION_EXPORT DXOcoOrderGroupTO *new_DXOcoOrderGroupTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOcoOrderGroupTO *create_DXOcoOrderGroupTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOcoOrderGroupTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO DXOcoOrderGroupTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOcoOrderGroupTO")
