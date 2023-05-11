
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartGraphics")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartChartGraphics
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartGraphics 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartGraphics 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartChartGraphics

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartGraphics_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartGraphics || defined(INCLUDE_DXMARKETChartGraphics))
#define DXMARKETChartGraphics_

@class IOSFloatArray;

@protocol DXMARKETChartGraphics < JavaObject >

- (void)startDraw;

- (void)endDraw;

- (jint)getWidth;

- (jint)getHeight;

- (void)drawLineWithInt:(jint)x0
                withInt:(jint)y0
                withInt:(jint)x1
                withInt:(jint)y1;

- (void)drawLastLineEndpointWithInt:(jint)cx
                            withInt:(jint)cy;

- (jboolean)isDrawMultipleLinesSupported;

- (void)drawLinesWithFloatArray:(IOSFloatArray *)points;

- (void)drawRectWithInt:(jint)x0
                withInt:(jint)y0
                withInt:(jint)x1
                withInt:(jint)y1;

- (void)fillRectWithInt:(jint)x0
                withInt:(jint)y0
                withInt:(jint)x1
                withInt:(jint)y1;

- (void)drawRoundedRectWithInt:(jint)x0
                       withInt:(jint)y0
                       withInt:(jint)x1
                       withInt:(jint)y1
                       withInt:(jint)r;

- (void)fillGradientRectWithInt:(jint)x0
                        withInt:(jint)y0
                        withInt:(jint)x1
                        withInt:(jint)y1;

- (void)fillRoundedRectWithInt:(jint)x0
                       withInt:(jint)y0
                       withInt:(jint)x1
                       withInt:(jint)y1
                       withInt:(jint)r;

- (void)fillTriangleWithInt:(jint)x1
                    withInt:(jint)y1
                    withInt:(jint)x2
                    withInt:(jint)y2
                    withInt:(jint)x3
                    withInt:(jint)y3;

- (void)drawStringWithInt:(jint)x
                  withInt:(jint)y
             withNSString:(NSString *)text;

- (jint)getStringWidthWithNSString:(NSString *)text;

- (jint)getStringHeightWithNSString:(NSString *)text;

- (void)setColorWithInt:(jint)color;

- (void)setGradientWithInt:(jint)startColor
                   withInt:(jint)endColor;

- (void)translateWithInt:(jint)x
                 withInt:(jint)y;

- (void)drawDashedLineWithInt:(jint)x1
                      withInt:(jint)y1
                      withInt:(jint)x2
                      withInt:(jint)y2;

- (void)fillGradientRoundedRectWithInt:(jint)x0
                               withInt:(jint)y0
                               withInt:(jint)x1
                               withInt:(jint)y1
                               withInt:(jint)r;

- (void)reversedRoundedRectWithInt:(jint)type
                           withInt:(jint)x1
                           withInt:(jint)y1
                           withInt:(jint)x2
                           withInt:(jint)y2
                           withInt:(jint)r;

- (void)horizontalMixedRoundedRectWithInt:(jint)type
                                  withInt:(jint)x1
                                  withInt:(jint)y1
                                  withInt:(jint)x2
                                  withInt:(jint)y2
                                  withInt:(jint)r;

- (void)fillQuadrangleWithInt:(jint)x1
                      withInt:(jint)y1
                      withInt:(jint)x2
                      withInt:(jint)y2
                      withInt:(jint)x3
                      withInt:(jint)y3
                      withInt:(jint)x4
                      withInt:(jint)y4;

- (void)fillGradientQuadrangleWithInt:(jint)x1
                              withInt:(jint)y1
                              withInt:(jint)x2
                              withInt:(jint)y2
                              withInt:(jint)x3
                              withInt:(jint)y3
                              withInt:(jint)x4
                              withInt:(jint)y4;

@end

@interface DXMARKETChartGraphics : NSObject
@property (readonly, class) jint TYPE_DRAW NS_SWIFT_NAME(TYPE_DRAW);
@property (readonly, class) jint TYPE_FILL NS_SWIFT_NAME(TYPE_FILL);
@property (readonly, class) jint TYPE_GRADIENT NS_SWIFT_NAME(TYPE_GRADIENT);

+ (jint)TYPE_DRAW;

+ (jint)TYPE_FILL;

+ (jint)TYPE_GRADIENT;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartGraphics)

inline jint DXMARKETChartGraphics_get_TYPE_DRAW(void);
#define DXMARKETChartGraphics_TYPE_DRAW 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartGraphics, TYPE_DRAW, jint)

inline jint DXMARKETChartGraphics_get_TYPE_FILL(void);
#define DXMARKETChartGraphics_TYPE_FILL 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartGraphics, TYPE_FILL, jint)

inline jint DXMARKETChartGraphics_get_TYPE_GRADIENT(void);
#define DXMARKETChartGraphics_TYPE_GRADIENT 3
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartGraphics, TYPE_GRADIENT, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartGraphics)

#define ComDevexpertsDxmarketClientModelChartChartGraphics DXMARKETChartGraphics

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartGraphics")
