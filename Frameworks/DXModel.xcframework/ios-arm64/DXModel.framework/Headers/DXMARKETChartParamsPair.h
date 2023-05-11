
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsPair")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsPair
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsPair 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsPair 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsPair

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartParamsPair_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsPair || defined(INCLUDE_DXMARKETChartParamsPair))
#define DXMARKETChartParamsPair_

@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@protocol DXMARKETChartParamsStringProvider;

@interface DXMARKETChartParamsPair : NSObject
@property (readonly, copy, class) NSString *DIVIDER NS_SWIFT_NAME(DIVIDER);

+ (NSString *)DIVIDER;

#pragma mark Public

- (instancetype __nonnull)initWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)candlePeriod
                                          withDXChartRangeEnum:(DXChartRangeEnum *)chartRange
                         withDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

- (jboolean)isEqual:(id)o;

- (DXChartAggregationPeriodEnum *)getCandlePeriod;

- (DXChartRangeEnum *)getChartRange;

- (NSUInteger)hash;

- (NSString *)toFullStringWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period;

+ (NSString *)toFullStringWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period
                     withDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

- (NSString *)toFullStringWithDXChartRangeEnum:(DXChartRangeEnum *)rangeEnum;

+ (NSString *)toFullStringWithDXChartRangeEnum:(DXChartRangeEnum *)rangeEnum
         withDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

- (NSString *)description;

- (NSString *)toStringWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period;

+ (NSString *)toStringWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period
                 withDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

- (NSString *)toStringWithDXChartRangeEnum:(DXChartRangeEnum *)rangeEnum;

+ (NSString *)toStringWithDXChartRangeEnum:(DXChartRangeEnum *)rangeEnum
     withDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

- (NSString *)toStringWithId:(id)obj;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartParamsPair)

inline NSString *DXMARKETChartParamsPair_get_DIVIDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETChartParamsPair_DIVIDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETChartParamsPair, DIVIDER, NSString *)

FOUNDATION_EXPORT void DXMARKETChartParamsPair_initWithDXChartAggregationPeriodEnum_withDXChartRangeEnum_withDXMARKETChartParamsStringProvider_(DXMARKETChartParamsPair *self, DXChartAggregationPeriodEnum *candlePeriod, DXChartRangeEnum *chartRange, id<DXMARKETChartParamsStringProvider> stringProvider);

FOUNDATION_EXPORT DXMARKETChartParamsPair *new_DXMARKETChartParamsPair_initWithDXChartAggregationPeriodEnum_withDXChartRangeEnum_withDXMARKETChartParamsStringProvider_(DXChartAggregationPeriodEnum *candlePeriod, DXChartRangeEnum *chartRange, id<DXMARKETChartParamsStringProvider> stringProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETChartParamsPair *create_DXMARKETChartParamsPair_initWithDXChartAggregationPeriodEnum_withDXChartRangeEnum_withDXMARKETChartParamsStringProvider_(DXChartAggregationPeriodEnum *candlePeriod, DXChartRangeEnum *chartRange, id<DXMARKETChartParamsStringProvider> stringProvider);

FOUNDATION_EXPORT NSString *DXMARKETChartParamsPair_toStringWithDXChartRangeEnum_withDXMARKETChartParamsStringProvider_(DXChartRangeEnum *rangeEnum, id<DXMARKETChartParamsStringProvider> stringProvider);

FOUNDATION_EXPORT NSString *DXMARKETChartParamsPair_toFullStringWithDXChartRangeEnum_withDXMARKETChartParamsStringProvider_(DXChartRangeEnum *rangeEnum, id<DXMARKETChartParamsStringProvider> stringProvider);

FOUNDATION_EXPORT NSString *DXMARKETChartParamsPair_toStringWithDXChartAggregationPeriodEnum_withDXMARKETChartParamsStringProvider_(DXChartAggregationPeriodEnum *period, id<DXMARKETChartParamsStringProvider> stringProvider);

FOUNDATION_EXPORT NSString *DXMARKETChartParamsPair_toFullStringWithDXChartAggregationPeriodEnum_withDXMARKETChartParamsStringProvider_(DXChartAggregationPeriodEnum *period, id<DXMARKETChartParamsStringProvider> stringProvider);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParamsPair)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataChartParamsPair DXMARKETChartParamsPair;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsPair")
