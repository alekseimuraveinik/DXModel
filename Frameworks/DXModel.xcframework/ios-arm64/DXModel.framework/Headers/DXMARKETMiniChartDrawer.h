
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMiniChartDrawer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer || defined(INCLUDE_DXMARKETMiniChartDrawer))
#define DXMARKETMiniChartDrawer_

@protocol DXMARKETChartDataSource;
@protocol DXMARKETChartGraphics;
@protocol DXMARKETChartMetrics;

@interface DXMARKETMiniChartDrawer : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (void)drawInContextWithDXMARKETChartGraphics:(id<DXMARKETChartGraphics> __nonnull)graphics;

- (id<DXMARKETChartMetrics>)getMetrics;

- (id<DXMARKETChartDataSource>)getSource;

- (jboolean)isLoading;

- (NSString *)loadingStr;

- (void)setLoadingWithBoolean:(jboolean)b;

- (void)setLoadingStrWithNSString:(NSString *)s;

- (void)setMetricsWithDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics;

- (void)setSourceWithDXMARKETChartDataSource:(id<DXMARKETChartDataSource>)source;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMiniChartDrawer)

FOUNDATION_EXPORT void DXMARKETMiniChartDrawer_init(DXMARKETMiniChartDrawer *self);

FOUNDATION_EXPORT DXMARKETMiniChartDrawer *new_DXMARKETMiniChartDrawer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMiniChartDrawer *create_DXMARKETMiniChartDrawer_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMiniChartDrawer)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer DXMARKETMiniChartDrawer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMiniChartDrawer")
