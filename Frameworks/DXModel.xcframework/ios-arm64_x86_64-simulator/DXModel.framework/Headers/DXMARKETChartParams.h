
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParams")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParams
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParams 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParams 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParams

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartParams_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParams || defined(INCLUDE_DXMARKETChartParams))
#define DXMARKETChartParams_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsProvider 1
#define INCLUDE_DXMARKETChartParamsProvider 1
#include "DXMARKETChartParamsProvider.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelChartDataIndicatorHolderUpdateListener 1
#define INCLUDE_DXMARKETIndicatorHolderUpdateListener 1
#include "DXMARKETIndicatorHolderUpdateListener.h"

@class DXChartAggregationPeriodEnum;
@class DXChartRangeEnum;
@class DXInstrumentTO;
@class DXMARKETChartMetrics_ChartType;
@class DXMARKETChartParamsPair;
@class DXMARKETChartParams_PortfolioViewMode;
@class DXMARKETIndicatorsHolder;
@protocol DXMARKETChartParamsListener;
@protocol DXMARKETChartParamsSerializer;
@protocol DXMARKETChartParamsStringProvider;
@protocol DXMARKETChartRequester;
@protocol JavaUtilList;

@interface DXMARKETChartParams : NSObject < DXMARKETChartParamsProvider, DXMARKETIndicatorHolderUpdateListener >
@property (readonly, class) jint DATA_UPTODATE NS_SWIFT_NAME(DATA_UPTODATE);
@property (readonly, class) jint DATA_LOADING NS_SWIFT_NAME(DATA_LOADING);
@property (readonly, class) jint DATA_NODATA NS_SWIFT_NAME(DATA_NODATA);
@property (readonly, class) jint VIEWMODE_SMARTPHONE NS_SWIFT_NAME(VIEWMODE_SMARTPHONE);
@property (readonly, class) jint VIEWMODE_STANDALONE NS_SWIFT_NAME(VIEWMODE_STANDALONE);
@property (readonly, class) jint VIEWMODE_EMBEDDED NS_SWIFT_NAME(VIEWMODE_EMBEDDED);

+ (jint)DATA_UPTODATE;

+ (jint)DATA_LOADING;

+ (jint)DATA_NODATA;

+ (jint)VIEWMODE_SMARTPHONE;

+ (jint)VIEWMODE_STANDALONE;

+ (jint)VIEWMODE_EMBEDDED;

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETChartParamsListener:(id<DXMARKETChartParamsListener>)listener
                        withDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)provider;

+ (id<JavaUtilList>)defaultTimescalePairsWithDXMARKETChartParamsStringProvider:(id<DXMARKETChartParamsStringProvider>)stringProvider;

- (DXMARKETChartMetrics_ChartType *)getCandleType;

- (jint)getCandleWidth;

- (DXMARKETChartParamsPair *)getCurrentPair;

- (jint)getDataState;

- (DXMARKETIndicatorsHolder *)getIndicatorsHolder;

- (DXInstrumentTO *)getInstrument;

- (jint)getLastVisibleCandle;

- (DXChartAggregationPeriodEnum *)getPeriod;

- (DXMARKETChartParams_PortfolioViewMode * __nonnull)getPortfolioMode;

- (DXChartRangeEnum *)getRange;

- (jint)getViewMode;

- (void)indicatorHolderDataUpdated;

- (jboolean)isAutoscaleMode;

- (jboolean)isCompactMode;

- (jboolean)isCurrentPairWithDXMARKETChartParamsPair:(DXMARKETChartParamsPair *)pair;

- (jboolean)isFollowNewData;

- (jboolean)isFullscreen;

- (jboolean)isShowIndicators;

- (jboolean)isShowLegend;

- (jboolean)isShowTips;

- (jboolean)isTouchesForbidden;

- (jboolean)isZoomToFit;

- (void)requestChange;

- (void)restoreWithDXMARKETChartParamsSerializer:(id<DXMARKETChartParamsSerializer>)serializer;

- (void)saveWithDXMARKETChartParamsSerializer:(id<DXMARKETChartParamsSerializer>)serializer;

- (void)setAutoscaleModeWithBoolean:(jboolean)autoscaleMode;

- (void)setCandleTypeWithDXMARKETChartMetrics_ChartType:(DXMARKETChartMetrics_ChartType *)type;

- (void)setCandleWidthWithInt:(jint)candleWidth;

- (void)setChartRequesterWithDXMARKETChartRequester:(id<DXMARKETChartRequester>)chartRequester;

- (void)setCompactModeWithBoolean:(jboolean)compactMode;

- (void)setDataStateWithInt:(jint)state;

- (void)setFollowNewDataWithBoolean:(jboolean)followNewData;

- (void)setFullscreenWithBoolean:(jboolean)fullscreen;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setLastVisibleCandleWithInt:(jint)lastVisibleCandle;

- (void)setPeriodWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period;

- (void)setPeriodAndRangeWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period
                                     withDXChartRangeEnum:(DXChartRangeEnum *)range;

- (void)setPortfolioModeWithDXMARKETChartParams_PortfolioViewMode:(DXMARKETChartParams_PortfolioViewMode *)portfolioViewMode;

- (void)setRangeWithDXChartRangeEnum:(DXChartRangeEnum *)range;

- (void)setShowIndicatorsWithBoolean:(jboolean)showIndicators;

- (void)setShowLegendWithBoolean:(jboolean)showLegend;

- (void)setShowTipsWithBoolean:(jboolean)showTips;

- (void)setViewModeWithInt:(jint)viewMode;

- (void)setZoomToFitWithBoolean:(jboolean)zoomToFit;

#pragma mark Protected

- (DXChartAggregationPeriodEnum *)getValidPeriodWithDXChartRangeEnum:(DXChartRangeEnum *)range;

- (DXChartRangeEnum *)getValidRangeWithDXChartAggregationPeriodEnum:(DXChartAggregationPeriodEnum *)period;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartParams)

inline jint DXMARKETChartParams_get_DATA_UPTODATE(void);
#define DXMARKETChartParams_DATA_UPTODATE 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartParams, DATA_UPTODATE, jint)

inline jint DXMARKETChartParams_get_DATA_LOADING(void);
#define DXMARKETChartParams_DATA_LOADING 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartParams, DATA_LOADING, jint)

inline jint DXMARKETChartParams_get_DATA_NODATA(void);
#define DXMARKETChartParams_DATA_NODATA 3
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartParams, DATA_NODATA, jint)

inline jint DXMARKETChartParams_get_VIEWMODE_SMARTPHONE(void);
#define DXMARKETChartParams_VIEWMODE_SMARTPHONE 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartParams, VIEWMODE_SMARTPHONE, jint)

inline jint DXMARKETChartParams_get_VIEWMODE_STANDALONE(void);
#define DXMARKETChartParams_VIEWMODE_STANDALONE 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartParams, VIEWMODE_STANDALONE, jint)

inline jint DXMARKETChartParams_get_VIEWMODE_EMBEDDED(void);
#define DXMARKETChartParams_VIEWMODE_EMBEDDED 3
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartParams, VIEWMODE_EMBEDDED, jint)

FOUNDATION_EXPORT void DXMARKETChartParams_initWithDXMARKETChartParamsListener_withDXMARKETChartParamsStringProvider_(DXMARKETChartParams *self, id<DXMARKETChartParamsListener> listener, id<DXMARKETChartParamsStringProvider> provider);

FOUNDATION_EXPORT DXMARKETChartParams *new_DXMARKETChartParams_initWithDXMARKETChartParamsListener_withDXMARKETChartParamsStringProvider_(id<DXMARKETChartParamsListener> listener, id<DXMARKETChartParamsStringProvider> provider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETChartParams *create_DXMARKETChartParams_initWithDXMARKETChartParamsListener_withDXMARKETChartParamsStringProvider_(id<DXMARKETChartParamsListener> listener, id<DXMARKETChartParamsStringProvider> provider);

FOUNDATION_EXPORT id<JavaUtilList> DXMARKETChartParams_defaultTimescalePairsWithDXMARKETChartParamsStringProvider_(id<DXMARKETChartParamsStringProvider> stringProvider);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParams)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataChartParams DXMARKETChartParams;

#endif

#if !defined (DXMARKETChartParams_PortfolioViewMode_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParams || defined(INCLUDE_DXMARKETChartParams_PortfolioViewMode))
#define DXMARKETChartParams_PortfolioViewMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, DXMARKETChartParams_PortfolioViewMode_Enum) {
  DXMARKETChartParams_PortfolioViewMode_Enum_ORDERS = 0,
  DXMARKETChartParams_PortfolioViewMode_Enum_POSITIONS = 1,
  DXMARKETChartParams_PortfolioViewMode_Enum_NONE = 2,
  DXMARKETChartParams_PortfolioViewMode_Enum_ORDER_AND_POSITIONS = 3,
};

@interface DXMARKETChartParams_PortfolioViewMode : JavaLangEnum

@property (readonly, class, nonnull) DXMARKETChartParams_PortfolioViewMode *ORDERS NS_SWIFT_NAME(ORDERS);
@property (readonly, class, nonnull) DXMARKETChartParams_PortfolioViewMode *POSITIONS NS_SWIFT_NAME(POSITIONS);
@property (readonly, class, nonnull) DXMARKETChartParams_PortfolioViewMode *NONE NS_SWIFT_NAME(NONE);
@property (readonly, class, nonnull) DXMARKETChartParams_PortfolioViewMode *ORDER_AND_POSITIONS NS_SWIFT_NAME(ORDER_AND_POSITIONS);
+ (DXMARKETChartParams_PortfolioViewMode * __nonnull)ORDERS;

+ (DXMARKETChartParams_PortfolioViewMode * __nonnull)POSITIONS;

+ (DXMARKETChartParams_PortfolioViewMode * __nonnull)NONE;

+ (DXMARKETChartParams_PortfolioViewMode * __nonnull)ORDER_AND_POSITIONS;

#pragma mark Public

+ (DXMARKETChartParams_PortfolioViewMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (DXMARKETChartParams_PortfolioViewMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(DXMARKETChartParams_PortfolioViewMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_values_[];

inline DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_get_ORDERS(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartParams_PortfolioViewMode, ORDERS)

inline DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_get_POSITIONS(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartParams_PortfolioViewMode, POSITIONS)

inline DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_get_NONE(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartParams_PortfolioViewMode, NONE)

inline DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_get_ORDER_AND_POSITIONS(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartParams_PortfolioViewMode, ORDER_AND_POSITIONS)

FOUNDATION_EXPORT IOSObjectArray *DXMARKETChartParams_PortfolioViewMode_values(void);

FOUNDATION_EXPORT DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMARKETChartParams_PortfolioViewMode *DXMARKETChartParams_PortfolioViewMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParams_PortfolioViewMode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParams")
