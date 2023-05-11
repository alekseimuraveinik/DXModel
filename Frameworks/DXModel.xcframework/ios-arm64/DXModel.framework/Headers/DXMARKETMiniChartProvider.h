
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMiniChartProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider || defined(INCLUDE_DXMARKETMiniChartProvider))
#define DXMARKETMiniChartProvider_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartProvider 1
#define INCLUDE_DXMARKETChartProvider 1
#include "DXMARKETChartProvider.h"

@class DXChartAggregationPeriodEnum;
@class DXChartTO;
@class DXQuoteDirection;
@class DXQuoteTO;

@interface DXMARKETMiniChartProvider : NSObject < DXMARKETChartProvider >

#pragma mark Public

- (instancetype __nonnull)init;

- (DXChartAggregationPeriodEnum *)getAggregationPeriod;

- (DXChartTO *)getChart;

- (jint)getInstrumentPrecision;

- (jdouble)getLast;

- (DXQuoteDirection *)getLastDirection;

- (void)setChartWithDXChartTO:(DXChartTO *)chart;

- (void)setQuoteWithDXQuoteTO:(DXQuoteTO *)quote;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMiniChartProvider)

FOUNDATION_EXPORT void DXMARKETMiniChartProvider_init(DXMARKETMiniChartProvider *self);

FOUNDATION_EXPORT DXMARKETMiniChartProvider *new_DXMARKETMiniChartProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMiniChartProvider *create_DXMARKETMiniChartProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMiniChartProvider)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplMiniChartProvider DXMARKETMiniChartProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartProvider")
