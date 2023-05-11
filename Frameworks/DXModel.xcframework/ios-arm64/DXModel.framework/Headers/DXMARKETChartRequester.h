
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartRequester")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartRequester
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartRequester 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartRequester 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartRequester

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartRequester_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartRequester || defined(INCLUDE_DXMARKETChartRequester))
#define DXMARKETChartRequester_

@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@class DXInstrumentTO;
@class PSListTO;

@protocol DXMARKETChartRequester < JavaObject >

- (void)requestWithDXInstrumentTO:(DXInstrumentTO *)instrument
             withDXChartRangeEnum:(DXChartRangeEnum *)range
 withDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period
                     withPSListTO:(PSListTO *)studies;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartRequester)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartRequester)

#define ComDevexpertsDxmarketClientModelChartDataChartRequester DXMARKETChartRequester

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartRequester")
