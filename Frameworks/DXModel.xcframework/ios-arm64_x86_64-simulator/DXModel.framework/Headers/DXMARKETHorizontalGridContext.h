
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartHorizontalGridContext")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartHorizontalGridContext
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartHorizontalGridContext 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartHorizontalGridContext 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartHorizontalGridContext

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETHorizontalGridContext_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartHorizontalGridContext || defined(INCLUDE_DXMARKETHorizontalGridContext))
#define DXMARKETHorizontalGridContext_

@class DXMARKETValueRange;
@protocol DXDecimalFormatter;
@protocol DXMARKETChartDataSource;
@protocol DXMARKETChartGraphics;
@protocol DXMARKETChartMetrics;

@interface DXMARKETHorizontalGridContext : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXDecimalFormatter:(id<DXDecimalFormatter> __nonnull)labelTextFormatter;

- (jint)getBottomOffset;

- (jint)getCandleWidth;

- (id<DXMARKETChartGraphics>)getDrawer;

- (jint)getGridHeight;

- (jint)getGridOffset;

- (jint)getGridWidth;

- (jint)getLabelAreaWidth;

- (NSString *)getLabelTextWithDouble:(jdouble)labelValue;

- (id<DXMARKETChartMetrics>)getMetrics;

- (DXMARKETValueRange *)getRange;

- (id<DXMARKETChartDataSource>)getSource;

- (jint)getTopOffset;

- (jboolean)isDrawLabels;

- (jboolean)isGridLinesDashed;

- (jboolean)isUseInstrumentPrecision;

- (void)setBottomOffsetWithInt:(jint)bottomOffset;

- (void)setCandleWidthWithInt:(jint)candleWidth;

- (void)setDrawerWithDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer;

- (void)setDrawLabelsWithBoolean:(jboolean)drawLabels;

- (void)setGridHeightWithInt:(jint)gridHeight;

- (void)setGridLinesDashedWithBoolean:(jboolean)gridLinesDashed;

- (void)setGridOffsetWithInt:(jint)gridOffset;

- (void)setGridWidthWithInt:(jint)gridWidth;

- (void)setLabelAreaWidthWithInt:(jint)labelAreaWidth;

- (void)setMetricsWithDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics;

- (void)setRangeWithDXMARKETValueRange:(DXMARKETValueRange *)range;

- (void)setSourceWithDXMARKETChartDataSource:(id<DXMARKETChartDataSource>)source;

- (void)setTopOffsetWithInt:(jint)topOffset;

- (void)setUseInstrumentPrecisionWithBoolean:(jboolean)useInstrumentPrecision;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETHorizontalGridContext)

FOUNDATION_EXPORT void DXMARKETHorizontalGridContext_init(DXMARKETHorizontalGridContext *self);

FOUNDATION_EXPORT DXMARKETHorizontalGridContext *new_DXMARKETHorizontalGridContext_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETHorizontalGridContext *create_DXMARKETHorizontalGridContext_init(void);

FOUNDATION_EXPORT void DXMARKETHorizontalGridContext_initWithDXDecimalFormatter_(DXMARKETHorizontalGridContext *self, id<DXDecimalFormatter> labelTextFormatter);

FOUNDATION_EXPORT DXMARKETHorizontalGridContext *new_DXMARKETHorizontalGridContext_initWithDXDecimalFormatter_(id<DXDecimalFormatter> labelTextFormatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETHorizontalGridContext *create_DXMARKETHorizontalGridContext_initWithDXDecimalFormatter_(id<DXDecimalFormatter> labelTextFormatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETHorizontalGridContext)

@compatibility_alias ComDevexpertsDxmarketClientModelChartHorizontalGridContext DXMARKETHorizontalGridContext;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartHorizontalGridContext")
