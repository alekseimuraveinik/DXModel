
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartCore")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartChartCore
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartCore 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartCore 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartChartCore

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartCore_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartCore || defined(INCLUDE_DXMARKETChartCore))
#define DXMARKETChartCore_

@class DXMARKETDrawChartContext;
@class DXMARKETHorizontalGridContext;
@class DXMARKETLegendContext;
@class DXMARKETValueRange;
@class IOSIntArray;
@class JavaUtilArrayList;
@protocol DXMARKETChartGraphics;
@protocol DXMARKETChartMetrics;
@protocol DXMARKETChartStudyData;

@interface DXMARKETChartCore : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (void)drawAreaPriceDataWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)context
                            withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                              withInt:(jint)fillColor
                                              withInt:(jint)candleWidth
                                              withInt:(jint)topOffset
                                              withInt:(jint)effectiveHeight
                                              withInt:(jint)bottomOffset;

+ (void)drawBarPriceDataWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)context
                           withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                             withInt:(jint)greenColor
                                             withInt:(jint)redColor
                                             withInt:(jint)candleWidth
                                             withInt:(jint)topOffset
                                             withInt:(jint)effectiveHeight;

+ (void)drawCandlePriceDataWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)context
                              withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                                withInt:(jint)greenColor
                                                withInt:(jint)redColor
                                                withInt:(jint)candleWidth
                                                withInt:(jint)topOffset
                                                withInt:(jint)effectiveHeight;

+ (void)drawGradientAreaPriceDataWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext * __nonnull)context
                                    withDXMARKETChartGraphics:(id<DXMARKETChartGraphics> __nonnull)drawer
                                                      withInt:(jint)startGradientColor
                                                      withInt:(jint)endGradientColor
                                                      withInt:(jint)lineColor
                                                      withInt:(jint)candleWidth
                                                      withInt:(jint)topOffset
                                                      withInt:(jint)effectiveHeight
                                                      withInt:(jint)bottomOffset;

+ (void)drawHorizontalGridWithDXMARKETHorizontalGridContext:(DXMARKETHorizontalGridContext *)context;

+ (void)drawHorizontalLabelsWithDXMARKETHorizontalGridContext:(DXMARKETHorizontalGridContext *)context;

+ (void)drawLegendWithDXMARKETLegendContext:(DXMARKETLegendContext *)context;

+ (void)drawLegendWithDXMARKETLegendContext:(DXMARKETLegendContext *)context
                                    withInt:(jint)left
                                    withInt:(jint)top;

+ (void)drawLinearPriceDataWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)context
                              withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                                withInt:(jint)greenColor
                                                withInt:(jint)redColor
                                                withInt:(jint)candleWidth
                                                withInt:(jint)topOffset
                                                withInt:(jint)effectiveHeight
                                                withInt:(jint)step;

+ (void)drawStudyWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)modelContext
                    withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                      withInt:(jint)translateX
                                      withInt:(jint)translateY
                   withDXMARKETChartStudyData:(id<DXMARKETChartStudyData>)study
                       withDXMARKETValueRange:(DXMARKETValueRange *)range
                                      withInt:(jint)height
                                      withInt:(jint)size
                     withDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics
                                      withInt:(jint)candleWidth;

+ (void)drawVolumeWithGradientWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)context
                                 withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                  withDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)chartMetrics
                                                   withInt:(jint)candleWidth
                                                   withInt:(jint)height;

+ (IOSIntArray *)getCandleMetricsWithInt:(jint)candleWidth;

+ (JavaUtilArrayList *)getStudyPlotLabelsWithDXMARKETChartStudyData:(id<DXMARKETChartStudyData>)study
                                           withDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartCore)

FOUNDATION_EXPORT void DXMARKETChartCore_init(DXMARKETChartCore *self);

FOUNDATION_EXPORT DXMARKETChartCore *new_DXMARKETChartCore_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETChartCore *create_DXMARKETChartCore_init(void);

FOUNDATION_EXPORT void DXMARKETChartCore_drawStudyWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withInt_withInt_withDXMARKETChartStudyData_withDXMARKETValueRange_withInt_withInt_withDXMARKETChartMetrics_withInt_(DXMARKETDrawChartContext *modelContext, id<DXMARKETChartGraphics> drawer, jint translateX, jint translateY, id<DXMARKETChartStudyData> study, DXMARKETValueRange *range, jint height, jint size, id<DXMARKETChartMetrics> metrics, jint candleWidth);

FOUNDATION_EXPORT JavaUtilArrayList *DXMARKETChartCore_getStudyPlotLabelsWithDXMARKETChartStudyData_withDXMARKETChartMetrics_(id<DXMARKETChartStudyData> study, id<DXMARKETChartMetrics> metrics);

FOUNDATION_EXPORT void DXMARKETChartCore_drawLegendWithDXMARKETLegendContext_(DXMARKETLegendContext *context);

FOUNDATION_EXPORT void DXMARKETChartCore_drawLegendWithDXMARKETLegendContext_withInt_withInt_(DXMARKETLegendContext *context, jint left, jint top);

FOUNDATION_EXPORT IOSIntArray *DXMARKETChartCore_getCandleMetricsWithInt_(jint candleWidth);

FOUNDATION_EXPORT void DXMARKETChartCore_drawLinearPriceDataWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_withInt_(DXMARKETDrawChartContext *context, id<DXMARKETChartGraphics> drawer, jint greenColor, jint redColor, jint candleWidth, jint topOffset, jint effectiveHeight, jint step);

FOUNDATION_EXPORT void DXMARKETChartCore_drawCandlePriceDataWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_(DXMARKETDrawChartContext *context, id<DXMARKETChartGraphics> drawer, jint greenColor, jint redColor, jint candleWidth, jint topOffset, jint effectiveHeight);

FOUNDATION_EXPORT void DXMARKETChartCore_drawBarPriceDataWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_(DXMARKETDrawChartContext *context, id<DXMARKETChartGraphics> drawer, jint greenColor, jint redColor, jint candleWidth, jint topOffset, jint effectiveHeight);

FOUNDATION_EXPORT void DXMARKETChartCore_drawAreaPriceDataWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_(DXMARKETDrawChartContext *context, id<DXMARKETChartGraphics> drawer, jint fillColor, jint candleWidth, jint topOffset, jint effectiveHeight, jint bottomOffset);

FOUNDATION_EXPORT void DXMARKETChartCore_drawGradientAreaPriceDataWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(DXMARKETDrawChartContext *context, id<DXMARKETChartGraphics> drawer, jint startGradientColor, jint endGradientColor, jint lineColor, jint candleWidth, jint topOffset, jint effectiveHeight, jint bottomOffset);

FOUNDATION_EXPORT void DXMARKETChartCore_drawVolumeWithGradientWithDXMARKETDrawChartContext_withDXMARKETChartGraphics_withDXMARKETChartMetrics_withInt_withInt_(DXMARKETDrawChartContext *context, id<DXMARKETChartGraphics> drawer, id<DXMARKETChartMetrics> chartMetrics, jint candleWidth, jint height);

FOUNDATION_EXPORT void DXMARKETChartCore_drawHorizontalGridWithDXMARKETHorizontalGridContext_(DXMARKETHorizontalGridContext *context);

FOUNDATION_EXPORT void DXMARKETChartCore_drawHorizontalLabelsWithDXMARKETHorizontalGridContext_(DXMARKETHorizontalGridContext *context);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartCore)

@compatibility_alias ComDevexpertsDxmarketClientModelChartChartCore DXMARKETChartCore;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartCore")
