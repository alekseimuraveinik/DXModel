
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLegendContext")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartLegendContext
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLegendContext 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLegendContext 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartLegendContext

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLegendContext_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLegendContext || defined(INCLUDE_DXMARKETLegendContext))
#define DXMARKETLegendContext_

@class IOSObjectArray;
@protocol DXMARKETChartGraphics;
@protocol DXMARKETChartMetrics;

@interface DXMARKETLegendContext : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (IOSObjectArray *)getData;

- (id<DXMARKETChartGraphics>)getDrawer;

- (jint)getGridWidth;

- (id<DXMARKETChartMetrics>)getMetrics;

- (void)setDataWithDXMARKETChartStudyDataArray:(IOSObjectArray *)data;

- (void)setDrawerWithDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer;

- (void)setGridWidthWithInt:(jint)gridWidth;

- (void)setMetricsWithDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLegendContext)

FOUNDATION_EXPORT void DXMARKETLegendContext_init(DXMARKETLegendContext *self);

FOUNDATION_EXPORT DXMARKETLegendContext *new_DXMARKETLegendContext_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETLegendContext *create_DXMARKETLegendContext_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLegendContext)

@compatibility_alias ComDevexpertsDxmarketClientModelChartLegendContext DXMARKETLegendContext;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartLegendContext")
