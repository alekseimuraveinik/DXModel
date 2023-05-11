
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentDetailsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO || defined(INCLUDE_DXInstrumentDetailsTO))
#define DXInstrumentDetailsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXExDividendsTO;
@class DXInstrumentDailyFinancingTO;
@class DXInstrumentTradingHoursTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXInstrumentDetailsTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentDetailsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentDetailsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentDetailsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentDetailsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getCurrency;

- (DXInstrumentDailyFinancingTO *)getDailyFinancingTO;

- (DXExDividendsTO *)getExDividendsTO;

- (jlong)getMaxTradeSize;

- (jlong)getMinIncrement;

- (jlong)getMinTradeSize;

- (DXInstrumentTradingHoursTO *)getTradingHoursTO;

- (NSString *)getType;

- (jlong)getVisualPrecision;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrencyWithNSString:(NSString *)currency;

- (void)setDailyFinancingTOWithDXInstrumentDailyFinancingTO:(DXInstrumentDailyFinancingTO *)dailyFinancingTO;

- (void)setExDividendsTOWithDXExDividendsTO:(DXExDividendsTO *)exDividendsTO;

- (void)setMaxTradeSizeWithLong:(jlong)maxTradeSize;

- (void)setMinIncrementWithLong:(jlong)minIncrement;

- (void)setMinTradeSizeWithLong:(jlong)minTradeSize;

- (void)setTradingHoursTOWithDXInstrumentTradingHoursTO:(DXInstrumentTradingHoursTO *)tradingHoursTO;

- (void)setTypeWithNSString:(NSString *)type;

- (void)setVisualPrecisionWithLong:(jlong)visualPrecision;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentDetailsTO)

inline DXInstrumentDetailsTO *DXInstrumentDetailsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentDetailsTO *DXInstrumentDetailsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentDetailsTO, EMPTY, DXInstrumentDetailsTO *)

FOUNDATION_EXPORT void DXInstrumentDetailsTO_init(DXInstrumentDetailsTO *self);

FOUNDATION_EXPORT DXInstrumentDetailsTO *new_DXInstrumentDetailsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentDetailsTO *create_DXInstrumentDetailsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentDetailsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO DXInstrumentDetailsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentDetailsTO")
