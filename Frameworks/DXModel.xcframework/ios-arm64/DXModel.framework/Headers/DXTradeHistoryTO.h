
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTradeHistoryTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO || defined(INCLUDE_DXTradeHistoryTO))
#define DXTradeHistoryTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCurrencyTO;
@class DXInstrumentTO;
@class DXPositionEffectEnum;
@class DXTradeSideEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXTradeHistoryTO : PSBaseTransferObject
@property (readonly, class, strong) DXTradeHistoryTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXTradeHistoryTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXTradeHistoryTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXTradeHistoryTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getAccountId;

- (jlong)getCommission;

- (DXCurrencyTO *)getCommissionCurrency;

- (PSListTO *)getCommissions;

- (jlong)getFillPrice;

- (jlong)getFullCost;

- (DXCurrencyTO *)getFullCostCurrency;

- (DXInstrumentTO *)getInstrument;

- (jint)getOrderChainId;

- (DXPositionEffectEnum *)getPositionEffect;

- (jlong)getQuantity;

- (jlong)getSettledPL;

- (jlong)getSettledPlPips;

- (jlong)getSize;

- (NSString *)getSymbol;

- (jlong)getTime;

- (NSString *)getTradeCode;

- (jint)getTradeId;

- (DXTradeSideEnum *)getTradeSide;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountIdWithInt:(jint)accountId;

- (void)setCommissionWithLong:(jlong)commission;

- (void)setCommissionCurrencyWithDXCurrencyTO:(DXCurrencyTO *)commissionCurrency;

- (void)setCommissionsWithPSListTO:(PSListTO *)commissions;

- (void)setFillPriceWithLong:(jlong)fillPrice;

- (void)setFullCostWithLong:(jlong)fullCost;

- (void)setFullCostCurrencyWithDXCurrencyTO:(DXCurrencyTO *)fullCostCurrency;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setOrderChainIdWithInt:(jint)orderChainId;

- (void)setPositionEffectWithDXPositionEffectEnum:(DXPositionEffectEnum *)positionEffect;

- (void)setQuantityWithLong:(jlong)quantity;

- (void)setSettledPLWithLong:(jlong)settledPL;

- (void)setSettledPlPipsWithLong:(jlong)settledPlPips;

- (void)setSizeWithLong:(jlong)size;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (void)setTimeWithLong:(jlong)time;

- (void)setTradeCodeWithNSString:(NSString *)tradeCode;

- (void)setTradeIdWithInt:(jint)tradeId;

- (void)setTradeSideWithDXTradeSideEnum:(DXTradeSideEnum *)tradeSide;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXTradeHistoryTO)

inline DXTradeHistoryTO *DXTradeHistoryTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeHistoryTO *DXTradeHistoryTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeHistoryTO, EMPTY, DXTradeHistoryTO *)

FOUNDATION_EXPORT void DXTradeHistoryTO_init(DXTradeHistoryTO *self);

FOUNDATION_EXPORT DXTradeHistoryTO *new_DXTradeHistoryTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTradeHistoryTO *create_DXTradeHistoryTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXTradeHistoryTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO DXTradeHistoryTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryTO")
