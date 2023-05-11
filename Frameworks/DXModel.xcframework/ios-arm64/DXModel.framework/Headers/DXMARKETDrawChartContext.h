
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDrawChartContext")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDrawChartContext
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDrawChartContext 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDrawChartContext 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDrawChartContext

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDrawChartContext_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDrawChartContext || defined(INCLUDE_DXMARKETDrawChartContext))
#define DXMARKETDrawChartContext_

@class DXMARKETValueRange;
@class DXMARKETVolumeRange;
@protocol DXMARKETChartDataSource;
@protocol DXMARKETPortfolioDataSource;

@interface DXMARKETDrawChartContext : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETChartDataSource:(id<DXMARKETChartDataSource>)source;

- (id<DXMARKETChartDataSource>)dataSource;

- (jboolean)isEqual:(id)o;

- (jint)firstIndex;

- (id<DXMARKETPortfolioDataSource>)getPortfolioDataSource;

- (DXMARKETValueRange *)getPriceRange;

- (DXMARKETValueRange *)getStudyRangeWithInt:(jint)k;

- (jint)getStudyRangeCount;

- (DXMARKETVolumeRange *)getVolumeRange;

- (NSUInteger)hash;

- (jint)highIndex;

- (jint)lastIndex;

- (jint)lowIndex;

- (void)setIndexRangeWithInt:(jint)firstIndex
                     withInt:(jint)lastIndex;

- (void)setPortfolioDataSourceWithDXMARKETPortfolioDataSource:(id<DXMARKETPortfolioDataSource>)source;

- (jboolean)setRespectCurrentZoomWithBoolean:(jboolean)respectCurrentZoom;

- (void)setRespectIndicatorsWithBoolean:(jboolean)respectIndicators;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDrawChartContext)

FOUNDATION_EXPORT void DXMARKETDrawChartContext_initWithDXMARKETChartDataSource_(DXMARKETDrawChartContext *self, id<DXMARKETChartDataSource> source);

FOUNDATION_EXPORT DXMARKETDrawChartContext *new_DXMARKETDrawChartContext_initWithDXMARKETChartDataSource_(id<DXMARKETChartDataSource> source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDrawChartContext *create_DXMARKETDrawChartContext_initWithDXMARKETChartDataSource_(id<DXMARKETChartDataSource> source);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDrawChartContext)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDrawChartContext DXMARKETDrawChartContext;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDrawChartContext")
