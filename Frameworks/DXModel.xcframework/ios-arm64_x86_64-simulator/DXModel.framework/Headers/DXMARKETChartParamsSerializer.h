
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartParamsSerializer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer || defined(INCLUDE_DXMARKETChartParamsSerializer))
#define DXMARKETChartParamsSerializer_

@protocol JavaUtilList;

@protocol DXMARKETChartParamsSerializer < JavaObject >

- (void)saveInstrumentWithNSString:(NSString *)val;

- (void)saveCompactModeWithNSString:(NSString *)val;

- (void)saveRangeWithNSString:(NSString *)val;

- (void)savePeriodWithNSString:(NSString *)val;

- (void)saveIndicatorsWithJavaUtilList:(id<JavaUtilList>)indicators;

- (void)saveCandleTypeWithNSString:(NSString *)val;

- (void)saveCandleWidthWithNSString:(NSString *)val;

- (void)savePortfolioViewModeWithNSString:(NSString *)val;

- (void)saveZoomToFitWithNSString:(NSString *)val;

- (void)saveShowIndicatorsWithNSString:(NSString *)val;

- (void)saveShowLegendWithNSString:(NSString *)val;

- (void)saveShowTipsWithNSString:(NSString *)val;

- (void)saveLastVisibleCandleWithNSString:(NSString *)val;

- (void)saveAutopositionModeWithNSString:(NSString *)val;

- (void)saveAutoscaleModeWithNSString:(NSString *)val;

- (void)saveDataStateWithNSString:(NSString *)val;

- (void)saveEditIndicatorIndexWithNSString:(NSString *)val;

- (NSString *)loadInstrumentWithNSString:(NSString *)def;

- (NSString *)loadCompactModeWithNSString:(NSString *)def;

- (NSString *)loadRangeWithNSString:(NSString *)def;

- (NSString *)loadPeriodWithNSString:(NSString *)def;

- (NSString *)loadPortfolioViewModeWithNSString:(NSString *)def;

- (NSString *)loadShowLegendWithNSString:(NSString *)def;

- (NSString *)loadZoomToFitWithNSString:(NSString *)def;

- (NSString *)loadShowIndicatorsWithNSString:(NSString *)def;

- (NSString *)loadShowTipsWithNSString:(NSString *)def;

- (id<JavaUtilList>)loadIndicators;

- (NSString *)loadCandleTypeWithNSString:(NSString *)def;

- (NSString *)loadCandleWidthWithNSString:(NSString *)def;

- (NSString *)loadAutopositionModeWithNSString:(NSString *)def;

- (NSString *)loadLastVisibleCandleWithNSString:(NSString *)def;

- (NSString *)loadAutoscaleModeWithNSString:(NSString *)def;

- (NSString *)loadDataStateWithNSString:(NSString *)def;

- (NSString *)loadEditIndicatorIndexWithNSString:(NSString *)def;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartParamsSerializer)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParamsSerializer)

#define ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer DXMARKETChartParamsSerializer

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsSerializer")
