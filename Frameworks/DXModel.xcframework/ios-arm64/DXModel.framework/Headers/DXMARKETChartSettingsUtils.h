
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartSettingsUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils || defined(INCLUDE_DXMARKETChartSettingsUtils))
#define DXMARKETChartSettingsUtils_

@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@class JavaUtilArrayList;
@protocol DXMARKETChartParamsStringProvider;

@interface DXMARKETChartSettingsUtils : NSObject
@property (readonly, class) jint FAVORITES_MAX_SIZE NS_SWIFT_NAME(FAVORITES_MAX_SIZE);

+ (jint)FAVORITES_MAX_SIZE;

#pragma mark Public

+ (JavaUtilArrayList *)getDefaultFavoritesWithDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

+ (JavaUtilArrayList *)getPeriods;

+ (JavaUtilArrayList *)getRanges;

+ (DXChartAggregationPeriodEnum *)getValidPeriodWithDXChartRangeEnum:(DXChartRangeEnum *)range
                                    withDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)currentPeriod;

+ (DXChartRangeEnum *)getValidRangeWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period
                                               withDXChartRangeEnum:(DXChartRangeEnum *)currentRange;

+ (jboolean)isValidPairWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period
                                   withDXChartRangeEnum:(DXChartRangeEnum *)range;

@end

J2OBJC_STATIC_INIT(DXMARKETChartSettingsUtils)

inline jint DXMARKETChartSettingsUtils_get_FAVORITES_MAX_SIZE(void);
#define DXMARKETChartSettingsUtils_FAVORITES_MAX_SIZE 20
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartSettingsUtils, FAVORITES_MAX_SIZE, jint)

FOUNDATION_EXPORT jboolean DXMARKETChartSettingsUtils_isValidPairWithDXChartAggregationPeriodEnum_withDXChartRangeEnum_(DXChartAggregationPeriodEnum *period, DXChartRangeEnum *range);

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXMARKETChartSettingsUtils_getValidPeriodWithDXChartRangeEnum_withDXChartAggregationPeriodEnum_(DXChartRangeEnum *range, DXChartAggregationPeriodEnum *currentPeriod);

FOUNDATION_EXPORT DXChartRangeEnum *DXMARKETChartSettingsUtils_getValidRangeWithDXChartAggregationPeriodEnum_withDXChartRangeEnum_(DXChartAggregationPeriodEnum *period, DXChartRangeEnum *currentRange);

FOUNDATION_EXPORT JavaUtilArrayList *DXMARKETChartSettingsUtils_getDefaultFavoritesWithDXMARKETChartParamsStringProvider_(id<DXMARKETChartParamsStringProvider> stringProvider);

FOUNDATION_EXPORT JavaUtilArrayList *DXMARKETChartSettingsUtils_getRanges(void);

FOUNDATION_EXPORT JavaUtilArrayList *DXMARKETChartSettingsUtils_getPeriods(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartSettingsUtils)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils DXMARKETChartSettingsUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartSettingsUtils")
