
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBubbleDescriptor_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor || defined(INCLUDE_DXMARKETBubbleDescriptor))
#define DXMARKETBubbleDescriptor_

@protocol DXMARKETChartGraphics;

@interface DXMARKETBubbleDescriptor : NSObject

#pragma mark Public

- (jint)getBgColor;

- (jint)getBgColorGradient;

- (NSString *)getDescription;

- (id<DXMARKETChartGraphics>)getDrawer;

- (jint)getFontColor;

- (jint)getGapSize;

- (jint)getLabelHeight;

- (jint)getLineColor;

- (jint)getShadowColor;

- (jint)getType;

- (jint)getWidth;

- (jint)getWidthShift;

- (jint)getY;

- (void)setBgColorWithInt:(jint)bgColor;

- (void)setBgColorGradientWithInt:(jint)bgColorGradient;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setTypeWithInt:(jint)type;

- (void)setWidthShiftWithInt:(jint)widthShift;

- (void)setYWithInt:(jint)y;

#pragma mark Package-Private

- (instancetype __nonnull)initWithDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                                                withInt:(jint)width
                                                withInt:(jint)labelHeight
                                                withInt:(jint)gapSize
                                                withInt:(jint)fontColor
                                                withInt:(jint)shadowColor
                                                withInt:(jint)bubbleContour;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBubbleDescriptor)

FOUNDATION_EXPORT void DXMARKETBubbleDescriptor_initWithDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_withInt_(DXMARKETBubbleDescriptor *self, id<DXMARKETChartGraphics> drawer, jint width, jint labelHeight, jint gapSize, jint fontColor, jint shadowColor, jint bubbleContour);

FOUNDATION_EXPORT DXMARKETBubbleDescriptor *new_DXMARKETBubbleDescriptor_initWithDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_withInt_(id<DXMARKETChartGraphics> drawer, jint width, jint labelHeight, jint gapSize, jint fontColor, jint shadowColor, jint bubbleContour) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBubbleDescriptor *create_DXMARKETBubbleDescriptor_initWithDXMARKETChartGraphics_withInt_withInt_withInt_withInt_withInt_withInt_(id<DXMARKETChartGraphics> drawer, jint width, jint labelHeight, jint gapSize, jint fontColor, jint shadowColor, jint bubbleContour);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBubbleDescriptor)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor DXMARKETBubbleDescriptor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioBubbleDescriptor")
