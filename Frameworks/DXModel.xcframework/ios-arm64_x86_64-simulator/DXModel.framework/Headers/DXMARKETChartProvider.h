
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartProvider || defined(INCLUDE_DXMARKETChartProvider))
#define DXMARKETChartProvider_

@class DXChartAggregationPeriodEnum;
@class DXChartTO;
@class DXQuoteDirection;

@protocol DXMARKETChartProvider < JavaObject >

- (DXChartTO *)getChart;

- (DXChartAggregationPeriodEnum *)getAggregationPeriod;

- (jdouble)getLast;

- (DXQuoteDirection *)getLastDirection;

- (jint)getInstrumentPrecision;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartProvider)

#define ComDevexpertsDxmarketClientModelChartImplChartProvider DXMARKETChartProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartProvider")
