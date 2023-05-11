
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderHistoryTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO || defined(INCLUDE_DXOrderHistoryTO))
#define DXOrderHistoryTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXInstrumentTO;
@class DXOrderExpirationEnum;
@class DXOrderHistoryStatusEnum;
@class DXOrderOperationEnum;
@class DXOrderTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOrderHistoryTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderHistoryTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderHistoryTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderHistoryTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderHistoryTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (jlong)getClosePL;

- (jlong)getCommission;

- (PSListTO *)getCommissions;

- (jint)getExecutionKeyId;

- (jlong)getExpireAt;

- (jlong)getFilledQuantity;

- (jlong)getFillPrice;

- (NSString *)getId;

- (DXInstrumentTO *)getInstrument;

- (jlong)getLastStatusChange;

- (jint)getOrderChainId;

- (jlong)getPrice;

- (jlong)getQuantity;

- (jlong)getQuantityInLots;

- (PSErrorTO *)getRejectReason;

- (DXOrderOperationEnum *)getSide;

- (jlong)getSize;

- (DXOrderHistoryStatusEnum *)getStatus;

- (jlong)getStopLossPrice;

- (jlong)getTakeProfitPrice;

- (DXOrderExpirationEnum *)getTimeInForce;

- (jlong)getTriggerPrice;

- (DXOrderTypeEnum *)getType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setClosePLWithLong:(jlong)closePL;

- (void)setCommissionWithLong:(jlong)commission;

- (void)setCommissionsWithPSListTO:(PSListTO *)commissions;

- (void)setExecutionKeyIdWithInt:(jint)executionKeyId;

- (void)setExpireAtWithLong:(jlong)expireAt;

- (void)setFilledQuantityWithLong:(jlong)filledQuantity;

- (void)setFillPriceWithLong:(jlong)fillPrice;

- (void)setIdWithNSString:(NSString *)id_;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setLastStatusChangeWithLong:(jlong)lastStatusChange;

- (void)setOrderChainIdWithInt:(jint)orderChainId;

- (void)setPriceWithLong:(jlong)price;

- (void)setQuantityWithLong:(jlong)quantity;

- (void)setQuantityInLotsWithLong:(jlong)quantityInLots;

- (void)setRejectReasonWithPSErrorTO:(PSErrorTO *)rejectReason;

- (void)setSideWithDXOrderOperationEnum:(DXOrderOperationEnum *)side;

- (void)setSizeWithLong:(jlong)size;

- (void)setStatusWithDXOrderHistoryStatusEnum:(DXOrderHistoryStatusEnum *)status;

- (void)setStopLossPriceWithLong:(jlong)stopLossPrice;

- (void)setTakeProfitPriceWithLong:(jlong)takeProfitPrice;

- (void)setTimeInForceWithDXOrderExpirationEnum:(DXOrderExpirationEnum *)timeInForce;

- (void)setTriggerPriceWithLong:(jlong)triggerPrice;

- (void)setTypeWithDXOrderTypeEnum:(DXOrderTypeEnum *)type;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderHistoryTO)

inline DXOrderHistoryTO *DXOrderHistoryTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryTO *DXOrderHistoryTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryTO, EMPTY, DXOrderHistoryTO *)

FOUNDATION_EXPORT void DXOrderHistoryTO_init(DXOrderHistoryTO *self);

FOUNDATION_EXPORT DXOrderHistoryTO *new_DXOrderHistoryTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderHistoryTO *create_DXOrderHistoryTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderHistoryTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO DXOrderHistoryTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryTO")
