
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSymbolDetailsResultTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO || defined(INCLUDE_DXSymbolDetailsResultTO))
#define DXSymbolDetailsResultTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCandlePriceEnum;
@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@class DXInstrumentDetailsTO;
@class DXOptimizedChartTO;
@class DXQuoteTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXSymbolDetailsResultTO : PSBaseTransferObject
@property (readonly, class, strong) DXSymbolDetailsResultTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSymbolDetailsResultTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXSymbolDetailsResultTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSymbolDetailsResultTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXChartAggregationPeriodEnum *)getAggregation;

- (DXCandlePriceEnum *)getCandlePrice;

- (DXOptimizedChartTO *)getChart;

- (DXInstrumentDetailsTO *)getInstrumentDetails;

- (DXQuoteTO *)getQuote;

- (DXChartRangeEnum *)getRange;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAggregationWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)aggregation;

- (void)setCandlePriceWithDXCandlePriceEnum:(DXCandlePriceEnum *)candlePrice;

- (void)setChartWithDXOptimizedChartTO:(DXOptimizedChartTO *)chart;

- (void)setInstrumentDetailsWithDXInstrumentDetailsTO:(DXInstrumentDetailsTO *)instrumentDetails;

- (void)setQuoteWithDXQuoteTO:(DXQuoteTO *)quote;

- (void)setRangeWithDXChartRangeEnum:(DXChartRangeEnum *)range;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSymbolDetailsResultTO)

inline DXSymbolDetailsResultTO *DXSymbolDetailsResultTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSymbolDetailsResultTO *DXSymbolDetailsResultTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSymbolDetailsResultTO, EMPTY, DXSymbolDetailsResultTO *)

FOUNDATION_EXPORT void DXSymbolDetailsResultTO_init(DXSymbolDetailsResultTO *self);

FOUNDATION_EXPORT DXSymbolDetailsResultTO *new_DXSymbolDetailsResultTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSymbolDetailsResultTO *create_DXSymbolDetailsResultTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSymbolDetailsResultTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO DXSymbolDetailsResultTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsResultTO")
