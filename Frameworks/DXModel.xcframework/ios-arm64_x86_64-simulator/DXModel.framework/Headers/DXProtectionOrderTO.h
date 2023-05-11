
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXProtectionOrderTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO || defined(INCLUDE_DXProtectionOrderTO))
#define DXProtectionOrderTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXProtectionOrderTO : PSBaseTransferObject
@property (readonly, class, strong) DXProtectionOrderTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXProtectionOrderTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXProtectionOrderTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXProtectionOrderTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getCreateTime;

- (jlong)getOffset;

- (NSString *)getOrderGroupId;

- (NSString *)getOrderId;

- (jlong)getPrice;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCreateTimeWithLong:(jlong)createTime;

- (void)setOffsetWithLong:(jlong)offset;

- (void)setOrderGroupIdWithNSString:(NSString *)orderGroupId;

- (void)setOrderIdWithNSString:(NSString *)orderId;

- (void)setPriceWithLong:(jlong)price;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXProtectionOrderTO)

inline DXProtectionOrderTO *DXProtectionOrderTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXProtectionOrderTO *DXProtectionOrderTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXProtectionOrderTO, EMPTY, DXProtectionOrderTO *)

FOUNDATION_EXPORT void DXProtectionOrderTO_init(DXProtectionOrderTO *self);

FOUNDATION_EXPORT DXProtectionOrderTO *new_DXProtectionOrderTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXProtectionOrderTO *create_DXProtectionOrderTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXProtectionOrderTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO DXProtectionOrderTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderProtectionOrderTO")
