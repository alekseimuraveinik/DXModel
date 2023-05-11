
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSymbolDetailsParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO || defined(INCLUDE_DXSymbolDetailsParamsTO))
#define DXSymbolDetailsParamsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXSymbolDetailsParamsTO : PSBaseTransferObject
@property (readonly, class, strong) DXSymbolDetailsParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSymbolDetailsParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXSymbolDetailsParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSymbolDetailsParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXChartAggregationPeriodEnum *)getPeriod;

- (jdouble)getQtySize;

- (DXChartRangeEnum *)getRange;

- (PSListTO *)getStudies;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPeriodWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period;

- (void)setQtySizeWithDouble:(jdouble)qtySize;

- (void)setRangeWithDXChartRangeEnum:(DXChartRangeEnum *)range;

- (void)setStudiesWithPSListTO:(PSListTO *)studies;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSymbolDetailsParamsTO)

inline DXSymbolDetailsParamsTO *DXSymbolDetailsParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSymbolDetailsParamsTO *DXSymbolDetailsParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSymbolDetailsParamsTO, EMPTY, DXSymbolDetailsParamsTO *)

FOUNDATION_EXPORT void DXSymbolDetailsParamsTO_init(DXSymbolDetailsParamsTO *self);

FOUNDATION_EXPORT DXSymbolDetailsParamsTO *new_DXSymbolDetailsParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSymbolDetailsParamsTO *create_DXSymbolDetailsParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSymbolDetailsParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO DXSymbolDetailsParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailsParamsTO")
