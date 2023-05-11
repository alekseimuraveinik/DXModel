
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartParamsProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider || defined(INCLUDE_DXMARKETChartParamsProvider))
#define DXMARKETChartParamsProvider_

@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@class DXInstrumentTO;
@class DXMARKETChartMetrics_ChartType;
@class DXMARKETChartParamsPair;
@class DXMARKETChartParams_PortfolioViewMode;

@protocol DXMARKETChartParamsProvider < JavaObject >

- (jboolean)isFullscreen;

- (jboolean)isTouchesForbidden;

- (jint)getViewMode;

- (DXInstrumentTO *)getInstrument;

- (DXChartRangeEnum *)getRange;

- (DXMARKETChartParamsPair *)getCurrentPair;

- (DXChartAggregationPeriodEnum *)getPeriod;

- (DXMARKETChartMetrics_ChartType *)getCandleType;

- (jboolean)isShowIndicators;

- (jboolean)isShowLegend;

- (jboolean)isZoomToFit;

- (DXMARKETChartParams_PortfolioViewMode * __nonnull)getPortfolioMode;

- (jint)getCandleWidth;

- (jboolean)isFollowNewData;

- (jboolean)isAutoscaleMode;

- (jint)getLastVisibleCandle;

- (jint)getDataState;

- (jboolean)isCompactMode;

- (jboolean)isShowTips;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartParamsProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParamsProvider)

#define ComDevexpertsDxmarketClientModelChartDataChartParamsProvider DXMARKETChartParamsProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider")
