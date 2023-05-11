
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuoteTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteTO || defined(INCLUDE_DXQuoteTO))
#define DXQuoteTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentTO;
@class DXQuoteDirection;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSDecimalMapTO;
@protocol PSTransferObject;

@interface DXQuoteTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuoteTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuoteTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXQuoteTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXQuoteTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getAsk;

- (DXQuoteDirection *)getAskDirection;

- (jlong)getAskTimestamp;

- (jlong)getAskVolume;

- (jlong)getBid;

- (DXQuoteDirection *)getBidDirection;

- (jlong)getBidTimestamp;

- (jlong)getBidVolume;

- (jlong)getClosePrice;

- (jlong)getDailyHigh;

- (jlong)getDailyLow;

- (jlong)getDayClosePrice;

- (jlong)getDayTurnover;

- (jlong)getDayVolume;

- (jlong)getHighLimitPrice;

- (DXInstrumentTO *)getInstrument;

- (jlong)getLast;

- (DXQuoteDirection *)getLastDirection;

- (jlong)getLastTimestamp;

- (jlong)getLastVolume;

- (jlong)getLowLimitPrice;

- (jlong)getMidPrice;

- (jlong)getNetChange;

- (jlong)getOpenPrice;

- (jlong)getPercentChange;

- (PSDecimalMapTO *)getPriceChanges;

- (jlong)getSettlementPrice;

- (jlong)getSpread;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAskWithLong:(jlong)ask;

- (void)setAskDirectionWithDXQuoteDirection:(DXQuoteDirection *)askDirection;

- (void)setAskTimestampWithLong:(jlong)askTimestamp;

- (void)setAskVolumeWithLong:(jlong)askVolume;

- (void)setBidWithLong:(jlong)bid;

- (void)setBidDirectionWithDXQuoteDirection:(DXQuoteDirection *)bidDirection;

- (void)setBidTimestampWithLong:(jlong)bidTimestamp;

- (void)setBidVolumeWithLong:(jlong)bidVolume;

- (void)setClosePriceWithLong:(jlong)closePrice;

- (void)setDailyHighWithLong:(jlong)dailyHigh;

- (void)setDailyLowWithLong:(jlong)dailyLow;

- (void)setDayClosePriceWithLong:(jlong)dayClosePrice;

- (void)setDayTurnoverWithLong:(jlong)dayTurnover;

- (void)setDayVolumeWithLong:(jlong)dayVolume;

- (void)setHighLimitPriceWithLong:(jlong)highLimitPrice;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setLastWithLong:(jlong)last;

- (void)setLastDirectionWithDXQuoteDirection:(DXQuoteDirection *)lastDirection;

- (void)setLastTimestampWithLong:(jlong)lastTimestamp;

- (void)setLastVolumeWithLong:(jlong)lastVolume;

- (void)setLowLimitPriceWithLong:(jlong)lowLimitPrice;

- (void)setMidPriceWithLong:(jlong)midPrice;

- (void)setNetChangeWithLong:(jlong)netChange;

- (void)setOpenPriceWithLong:(jlong)openPrice;

- (void)setPercentChangeWithLong:(jlong)percentChange;

- (void)setPriceChangesWithPSDecimalMapTO:(PSDecimalMapTO *)priceChanges;

- (void)setSettlementPriceWithLong:(jlong)settlementPrice;

- (void)setSpreadWithLong:(jlong)spread;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXQuoteTO)

inline DXQuoteTO *DXQuoteTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuoteTO *DXQuoteTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuoteTO, EMPTY, DXQuoteTO *)

FOUNDATION_EXPORT void DXQuoteTO_init(DXQuoteTO *self);

FOUNDATION_EXPORT DXQuoteTO *new_DXQuoteTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuoteTO *create_DXQuoteTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuoteTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuoteTO DXQuoteTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteTO")
