
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultPriceChartDrawer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer || defined(INCLUDE_DXMARKETDefaultPriceChartDrawer))
#define DXMARKETDefaultPriceChartDrawer_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPriceChartDrawer 1
#define INCLUDE_DXMARKETPriceChartDrawer 1
#include "DXMARKETPriceChartDrawer.h"

@class DXMARKETDrawChartContext;
@protocol DXMARKETChartGraphics;
@protocol DXMARKETChartMetrics;
@protocol DXMARKETChartParamsProvider;

@interface DXMARKETDefaultPriceChartDrawer : NSObject < DXMARKETPriceChartDrawer >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)drawPriceChartWithDXMARKETChartParamsProvider:(id<DXMARKETChartParamsProvider> __nonnull)params
                            withDXMARKETChartGraphics:(id<DXMARKETChartGraphics> __nonnull)graphics
                         withDXMARKETDrawChartContext:(DXMARKETDrawChartContext * __nonnull)chartContext
                             withDXMARKETChartMetrics:(id<DXMARKETChartMetrics> __nonnull)metrics
                                              withInt:(jint)candleWidth
                                              withInt:(jint)topOffset
                                              withInt:(jint)candleAreaHeight
                                              withInt:(jint)bottomOffset;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultPriceChartDrawer)

FOUNDATION_EXPORT void DXMARKETDefaultPriceChartDrawer_init(DXMARKETDefaultPriceChartDrawer *self);

FOUNDATION_EXPORT DXMARKETDefaultPriceChartDrawer *new_DXMARKETDefaultPriceChartDrawer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultPriceChartDrawer *create_DXMARKETDefaultPriceChartDrawer_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultPriceChartDrawer)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer DXMARKETDefaultPriceChartDrawer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultPriceChartDrawer")
