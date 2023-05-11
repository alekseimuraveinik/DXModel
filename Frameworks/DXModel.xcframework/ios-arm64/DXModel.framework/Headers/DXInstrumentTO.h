
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO || defined(INCLUDE_DXInstrumentTO))
#define DXInstrumentTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentTradingStatusEnum;
@class DXInstrumentTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getBaseCurrencyPrecision;

- (jint)getCloseTimestamp;

- (NSString *)getDescription;

- (jlong)getLotSize;

- (jdouble)getMarginRate;

- (PSListTO *)getMarginRates;

- (jlong)getMultiplier;

- (NSString *)getName;

- (jint)getNextOpenTimestamp;

- (NSString *)getPath;

- (jint)getPipCount;

- (jint)getPrecision;

- (NSString *)getSubType;

- (NSString *)getSymbol;

- (DXInstrumentTradingStatusEnum *)getTradingStatus;

- (DXInstrumentTypeEnum *)getType;

- (NSString *)getUnderlyingSymbol;

- (NSUInteger)hash;

- (jboolean)isDelayed;

- (jboolean)isQtyInCurrency;

- (jboolean)isTradingOpened;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setBaseCurrencyPrecisionWithInt:(jint)baseCurrencyPrecision;

- (void)setCloseTimestampWithInt:(jint)closeTimestamp;

- (void)setDelayedWithBoolean:(jboolean)isDelayed;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setLotSizeWithLong:(jlong)lotSize;

- (void)setMarginRateWithDouble:(jdouble)marginRate;

- (void)setMarginRatesWithPSListTO:(PSListTO *)marginRates;

- (void)setMultiplierWithLong:(jlong)multiplier;

- (void)setNameWithNSString:(NSString *)name;

- (void)setNextOpenTimestampWithInt:(jint)nextOpenTimestamp;

- (void)setPathWithNSString:(NSString *)path;

- (void)setPipCountWithInt:(jint)pipCount;

- (void)setPrecisionWithInt:(jint)precision;

- (void)setQtyInCurrencyWithBoolean:(jboolean)qtyInCurrency;

- (void)setSubTypeWithNSString:(NSString *)subType;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (void)setTradingOpenedWithBoolean:(jboolean)tradingOpened;

- (void)setTradingStatusWithDXInstrumentTradingStatusEnum:(DXInstrumentTradingStatusEnum *)tradingStatus;

- (void)setTypeWithDXInstrumentTypeEnum:(DXInstrumentTypeEnum *)type;

- (void)setUnderlyingSymbolWithNSString:(NSString *)underlyingSymbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentTO)

inline DXInstrumentTO *DXInstrumentTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTO *DXInstrumentTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTO, EMPTY, DXInstrumentTO *)

FOUNDATION_EXPORT void DXInstrumentTO_init(DXInstrumentTO *self);

FOUNDATION_EXPORT DXInstrumentTO *new_DXInstrumentTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTO *create_DXInstrumentTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO DXInstrumentTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTO")
