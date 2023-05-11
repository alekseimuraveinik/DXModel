
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTO || defined(INCLUDE_DXOrderTO))
#define DXOrderTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXInstrumentTO;
@class DXOrderExpirationEnum;
@class DXOrderStatusEnum;
@class DXOrderTypeEnum;
@class DXProtectionOrderTO;
@class DXStopTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (jlong)getChangedTime;

- (jlong)getClosedTime;

- (jlong)getCreatedTime;

- (DXOrderExpirationEnum *)getExpirationEnum;

- (jlong)getExpireAt;

- (NSString *)getExternalId;

- (jlong)getFilledPrice;

- (jlong)getFilledSize;

- (DXInstrumentTO *)getInstrument;

- (NSString *)getOrderChainId;

- (NSString *)getOrderGroupId;

- (NSString *)getOrderId;

- (NSString *)getPositionCode;

- (jlong)getPrice;

- (jlong)getPriceOffset;

- (jdouble)getQuantity;

- (jlong)getRemainingSize;

- (jlong)getSize;

- (DXOrderStatusEnum *)getStatus;

- (DXProtectionOrderTO *)getStopLoss;

- (DXStopTypeEnum *)getStopTypeEnum;

- (DXProtectionOrderTO *)getTakeProfit;

- (jlong)getTrailingPips;

- (DXOrderTypeEnum *)getType;

- (NSUInteger)hash;

- (jboolean)isCanHaveAttachedOrders;

- (jboolean)isClosed;

- (jboolean)isEditable;

- (jboolean)isOffsetOrder;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setCanHaveAttachedOrdersWithBoolean:(jboolean)canHaveAttachedOrders;

- (void)setChangedTimeWithLong:(jlong)changedTime;

- (void)setClosedWithBoolean:(jboolean)closed;

- (void)setClosedTimeWithLong:(jlong)closedTime;

- (void)setCreatedTimeWithLong:(jlong)createdTime;

- (void)setEditableWithBoolean:(jboolean)editable;

- (void)setExpirationEnumWithDXOrderExpirationEnum:(DXOrderExpirationEnum *)expirationEnum;

- (void)setExpireAtWithLong:(jlong)expireAt;

- (void)setExternalIdWithNSString:(NSString *)externalId;

- (void)setFilledPriceWithLong:(jlong)filledPrice;

- (void)setFilledSizeWithLong:(jlong)filledSize;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setOffsetOrderWithBoolean:(jboolean)offsetOrder;

- (void)setOrderChainIdWithNSString:(NSString *)orderChainId;

- (void)setOrderGroupIdWithNSString:(NSString *)orderGroupId;

- (void)setOrderIdWithNSString:(NSString *)orderId;

- (void)setPositionCodeWithNSString:(NSString *)positionCode;

- (void)setPriceWithLong:(jlong)price;

- (void)setPriceOffsetWithLong:(jlong)priceOffset;

- (void)setQuantityWithDouble:(jdouble)quantity;

- (void)setRemainingSizeWithLong:(jlong)remainingSize;

- (void)setSizeWithLong:(jlong)size;

- (void)setStatusWithDXOrderStatusEnum:(DXOrderStatusEnum *)status;

- (void)setStopLossWithDXProtectionOrderTO:(DXProtectionOrderTO *)stopLoss;

- (void)setStopTypeEnumWithDXStopTypeEnum:(DXStopTypeEnum *)stopTypeEnum;

- (void)setTakeProfitWithDXProtectionOrderTO:(DXProtectionOrderTO *)takeProfit;

- (void)setTrailingPipsWithLong:(jlong)trailingPips;

- (void)setTypeWithDXOrderTypeEnum:(DXOrderTypeEnum *)type;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderTO)

inline DXOrderTO *DXOrderTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTO *DXOrderTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTO, EMPTY, DXOrderTO *)

FOUNDATION_EXPORT void DXOrderTO_init(DXOrderTO *self);

FOUNDATION_EXPORT DXOrderTO *new_DXOrderTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderTO *create_DXOrderTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderTO DXOrderTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTO")
