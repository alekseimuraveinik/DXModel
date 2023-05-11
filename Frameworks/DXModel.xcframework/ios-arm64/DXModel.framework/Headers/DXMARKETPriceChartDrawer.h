
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPriceChartDrawer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPriceChartDrawer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPriceChartDrawer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPriceChartDrawer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPriceChartDrawer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceChartDrawer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPriceChartDrawer || defined(INCLUDE_DXMARKETPriceChartDrawer))
#define DXMARKETPriceChartDrawer_

@class DXMARKETDrawChartContext;
@protocol DXMARKETChartGraphics;
@protocol DXMARKETChartMetrics;
@protocol DXMARKETChartParamsProvider;

@protocol DXMARKETPriceChartDrawer < JavaObject >

- (void)drawPriceChartWithDXMARKETChartParamsProvider:(id<DXMARKETChartParamsProvider> __nonnull)params
                            withDXMARKETChartGraphics:(id<DXMARKETChartGraphics> __nonnull)graphics
                         withDXMARKETDrawChartContext:(DXMARKETDrawChartContext * __nonnull)chartContext
                             withDXMARKETChartMetrics:(id<DXMARKETChartMetrics> __nonnull)metrics
                                              withInt:(jint)candleWidth
                                              withInt:(jint)topOffset
                                              withInt:(jint)candleAreaHeight
                                              withInt:(jint)bottomOffset;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceChartDrawer)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceChartDrawer)

#define ComDevexpertsDxmarketClientModelChartPriceChartDrawer DXMARKETPriceChartDrawer

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPriceChartDrawer")
