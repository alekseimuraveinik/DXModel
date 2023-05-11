
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartInfoProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider || defined(INCLUDE_DXMARKETChartInfoProvider))
#define DXMARKETChartInfoProvider_

@class DXChartAggregationPeriodEnum;
@class DXChartTO;

@protocol DXMARKETChartInfoProvider < JavaObject >

- (DXChartTO *)getChartWithNSString:(NSString *)id_;

- (DXChartAggregationPeriodEnum *)getAggregationPeriodWithNSString:(NSString *)id_;

- (jdouble)getLastWithNSString:(NSString *)id_;

- (jint)getLastDirectionWithNSString:(NSString *)id_;

- (jint)getInstrumentPrecisionWithNSString:(NSString *)id_;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartInfoProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartInfoProvider)

#define ComDevexpertsDxmarketClientModelChartImplChartInfoProvider DXMARKETChartInfoProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartInfoProvider")
