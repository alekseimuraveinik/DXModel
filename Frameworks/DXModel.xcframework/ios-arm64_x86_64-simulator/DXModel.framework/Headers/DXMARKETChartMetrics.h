
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartChartMetrics
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartChartMetrics

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartMetrics_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics || defined(INCLUDE_DXMARKETChartMetrics))
#define DXMARKETChartMetrics_

@class DXMARKETChartMetrics_ValueLabelAlignment;
@protocol DXMARKETChartMetrics_LastLineMetrics;
@protocol DXMARKETChartMetrics_TypeGradientAreaMetrics;
@protocol DXMARKETChartMetrics_TypeLineMetrics;
@protocol DXMARKETChartPalette;

@protocol DXMARKETChartMetrics < JavaObject >

- (jint)getColorRed;

- (jint)getColorGreen;

- (jint)getColorAreaFill;

- (jint)getColorBackground;

- (jint)getColorLabelsBackground;

- (jint)getColorAxis;

- (jint)getColorAxisFont;

- (jint)getColorFrame;

- (jint)getColorNoChart;

- (jint)getDefaultCandleWidth;

- (jint)getMinimumCandleWidth;

- (jint)getMaximumCandleWidth;

- (NSString *)getStringNoChart;

- (NSString *)getStringLoading;

- (DXMARKETChartMetrics_ValueLabelAlignment * __nonnull)getValueLabelVerticalAlignment;

- (id<DXMARKETChartMetrics_LastLineMetrics> __nonnull)getLastLineMetrics;

- (id<DXMARKETChartMetrics_TypeLineMetrics> __nonnull)getTypeLineMetrics;

- (id<DXMARKETChartMetrics_TypeGradientAreaMetrics> __nonnull)getTypeGradientAreaMetrics;

- (jint)getColorVolumeBottom;

- (jint)getColorVolumeTop;

- (jint)getColorVolumeHead;

- (jdouble)getVolumeRatio;

- (jboolean)shouldDrawVolumeHead;

- (jboolean)shouldDrawVolume;

- (jint)getPortfolioDirectionUpColor;

- (jint)getPortfolioDirectionDownColor;

- (jint)getPortfolioBubbleContourColor;

- (jint)getPortfolioBubbleShadowColor;

- (jint)getPortfolioBubbleBackgroundUpColor;

- (jint)getPortfolioBubbleBackgroundDownColor;

- (jint)getPortfolioBubbleBackgroundMixColor;

- (jint)getPortfolioBubbleGapPixels;

- (jint)getPortfolioFontColor;

- (jint)getPortfolioHighlightedBuyBackgroundColor;

- (jint)getPortfolioHighlightedSellBackgroundColor;

- (jint)getPortfolioAttachedLinesBuyColor;

- (jint)getPortfolioAttachedLinesSellColor;

- (id<DXMARKETChartPalette>)getPalette;

- (jint)getPointRadius;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartMetrics)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartMetrics)

#define ComDevexpertsDxmarketClientModelChartChartMetrics DXMARKETChartMetrics

#endif

#if !defined (DXMARKETChartMetrics_LastLineMetrics_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics || defined(INCLUDE_DXMARKETChartMetrics_LastLineMetrics))
#define DXMARKETChartMetrics_LastLineMetrics_

@class DXQuoteDirection;

@protocol DXMARKETChartMetrics_LastLineMetrics < JavaObject >

- (jint)getLastLineColor;

- (jint)getLastLineDotColor;

- (jint)getLastLineDotDirectionColorWithDXQuoteDirection:(DXQuoteDirection * __nonnull)direction;

- (jboolean)isLastLineDotColorDependsOnDirection;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartMetrics_LastLineMetrics)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartMetrics_LastLineMetrics)

#endif

#if !defined (DXMARKETChartMetrics_TypeLineMetrics_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics || defined(INCLUDE_DXMARKETChartMetrics_TypeLineMetrics))
#define DXMARKETChartMetrics_TypeLineMetrics_

@class DXQuoteDirection;

@protocol DXMARKETChartMetrics_TypeLineMetrics < JavaObject >

- (jint)getPositiveColor;

- (jint)getNegativeColor;

- (jint)getLineDirectionColorWithDXQuoteDirection:(DXQuoteDirection * __nonnull)direction;

- (jboolean)isLineColorDependsOnDirection;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartMetrics_TypeLineMetrics)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartMetrics_TypeLineMetrics)

#endif

#if !defined (DXMARKETChartMetrics_TypeGradientAreaMetrics_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics || defined(INCLUDE_DXMARKETChartMetrics_TypeGradientAreaMetrics))
#define DXMARKETChartMetrics_TypeGradientAreaMetrics_

@class DXQuoteDirection;

@protocol DXMARKETChartMetrics_TypeGradientAreaMetrics < JavaObject >

- (jint)getGradientColorStart;

- (jint)getGradientColorEnd;

- (jint)getGradientColorStartDirectionWithDXQuoteDirection:(DXQuoteDirection * __nonnull)direction;

- (jint)getGradientColorEndDirectionWithDXQuoteDirection:(DXQuoteDirection * __nonnull)direction;

- (jint)getLineColor;

- (jint)getLineDirectionColorWithDXQuoteDirection:(DXQuoteDirection * __nonnull)direction;

- (jboolean)isLineColorDependsOnDirection;

- (jboolean)isGradientAreaColorDependsOnDirection;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartMetrics_TypeGradientAreaMetrics)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartMetrics_TypeGradientAreaMetrics)

#endif

#if !defined (DXMARKETChartMetrics_ChartType_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics || defined(INCLUDE_DXMARKETChartMetrics_ChartType))
#define DXMARKETChartMetrics_ChartType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, DXMARKETChartMetrics_ChartType_Enum) {
  DXMARKETChartMetrics_ChartType_Enum_TYPE_BAR = 0,
  DXMARKETChartMetrics_ChartType_Enum_TYPE_CANDLE = 1,
  DXMARKETChartMetrics_ChartType_Enum_TYPE_LINE = 2,
  DXMARKETChartMetrics_ChartType_Enum_TYPE_AREA = 3,
  DXMARKETChartMetrics_ChartType_Enum_TYPE_GRADIENT_AREA = 4,
};

@interface DXMARKETChartMetrics_ChartType : JavaLangEnum

@property (readonly, class, nonnull) DXMARKETChartMetrics_ChartType *TYPE_BAR NS_SWIFT_NAME(TYPE_BAR);
@property (readonly, class, nonnull) DXMARKETChartMetrics_ChartType *TYPE_CANDLE NS_SWIFT_NAME(TYPE_CANDLE);
@property (readonly, class, nonnull) DXMARKETChartMetrics_ChartType *TYPE_LINE NS_SWIFT_NAME(TYPE_LINE);
@property (readonly, class, nonnull) DXMARKETChartMetrics_ChartType *TYPE_AREA NS_SWIFT_NAME(TYPE_AREA);
@property (readonly, class, nonnull) DXMARKETChartMetrics_ChartType *TYPE_GRADIENT_AREA NS_SWIFT_NAME(TYPE_GRADIENT_AREA);
+ (DXMARKETChartMetrics_ChartType * __nonnull)TYPE_BAR;

+ (DXMARKETChartMetrics_ChartType * __nonnull)TYPE_CANDLE;

+ (DXMARKETChartMetrics_ChartType * __nonnull)TYPE_LINE;

+ (DXMARKETChartMetrics_ChartType * __nonnull)TYPE_AREA;

+ (DXMARKETChartMetrics_ChartType * __nonnull)TYPE_GRADIENT_AREA;

#pragma mark Public

+ (DXMARKETChartMetrics_ChartType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (DXMARKETChartMetrics_ChartType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(DXMARKETChartMetrics_ChartType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_values_[];

inline DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_get_TYPE_BAR(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ChartType, TYPE_BAR)

inline DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_get_TYPE_CANDLE(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ChartType, TYPE_CANDLE)

inline DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_get_TYPE_LINE(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ChartType, TYPE_LINE)

inline DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_get_TYPE_AREA(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ChartType, TYPE_AREA)

inline DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_get_TYPE_GRADIENT_AREA(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ChartType, TYPE_GRADIENT_AREA)

FOUNDATION_EXPORT IOSObjectArray *DXMARKETChartMetrics_ChartType_values(void);

FOUNDATION_EXPORT DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMARKETChartMetrics_ChartType *DXMARKETChartMetrics_ChartType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartMetrics_ChartType)

#endif

#if !defined (DXMARKETChartMetrics_ValueLabelAlignment_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics || defined(INCLUDE_DXMARKETChartMetrics_ValueLabelAlignment))
#define DXMARKETChartMetrics_ValueLabelAlignment_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, DXMARKETChartMetrics_ValueLabelAlignment_Enum) {
  DXMARKETChartMetrics_ValueLabelAlignment_Enum_VERTICAL_ALIGN_TOP = 0,
  DXMARKETChartMetrics_ValueLabelAlignment_Enum_VERTICAL_ALIGN_CENTER = 1,
};

@interface DXMARKETChartMetrics_ValueLabelAlignment : JavaLangEnum

@property (readonly, class, nonnull) DXMARKETChartMetrics_ValueLabelAlignment *VERTICAL_ALIGN_TOP NS_SWIFT_NAME(VERTICAL_ALIGN_TOP);
@property (readonly, class, nonnull) DXMARKETChartMetrics_ValueLabelAlignment *VERTICAL_ALIGN_CENTER NS_SWIFT_NAME(VERTICAL_ALIGN_CENTER);
+ (DXMARKETChartMetrics_ValueLabelAlignment * __nonnull)VERTICAL_ALIGN_TOP;

+ (DXMARKETChartMetrics_ValueLabelAlignment * __nonnull)VERTICAL_ALIGN_CENTER;

#pragma mark Public

+ (DXMARKETChartMetrics_ValueLabelAlignment *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (DXMARKETChartMetrics_ValueLabelAlignment_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(DXMARKETChartMetrics_ValueLabelAlignment)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT DXMARKETChartMetrics_ValueLabelAlignment *DXMARKETChartMetrics_ValueLabelAlignment_values_[];

inline DXMARKETChartMetrics_ValueLabelAlignment *DXMARKETChartMetrics_ValueLabelAlignment_get_VERTICAL_ALIGN_TOP(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ValueLabelAlignment, VERTICAL_ALIGN_TOP)

inline DXMARKETChartMetrics_ValueLabelAlignment *DXMARKETChartMetrics_ValueLabelAlignment_get_VERTICAL_ALIGN_CENTER(void);
J2OBJC_ENUM_CONSTANT(DXMARKETChartMetrics_ValueLabelAlignment, VERTICAL_ALIGN_CENTER)

FOUNDATION_EXPORT IOSObjectArray *DXMARKETChartMetrics_ValueLabelAlignment_values(void);

FOUNDATION_EXPORT DXMARKETChartMetrics_ValueLabelAlignment *DXMARKETChartMetrics_ValueLabelAlignment_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMARKETChartMetrics_ValueLabelAlignment *DXMARKETChartMetrics_ValueLabelAlignment_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartMetrics_ValueLabelAlignment)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartMetrics")
