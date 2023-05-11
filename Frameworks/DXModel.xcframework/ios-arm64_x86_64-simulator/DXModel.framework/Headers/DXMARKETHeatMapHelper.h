
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETHeatMapHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper || defined(INCLUDE_DXMARKETHeatMapHelper))
#define DXMARKETHeatMapHelper_

@class DXHeatMapParameterDataTO;
@class DXHeatMapParametersEnum;
@class DXHeatMapResponseTO;
@class JavaUtilArrayList;
@class PSListTO;
@class PSLongListTO;

@interface DXMARKETHeatMapHelper : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (DXHeatMapParameterDataTO *)getColorParameterWithDXHeatMapResponseTO:(DXHeatMapResponseTO *)data;

+ (PSLongListTO *)getColorsWithDXHeatMapParameterDataTO:(DXHeatMapParameterDataTO *)data
                                                withInt:(jint)neutralColor
                                                withInt:(jint)greenColor
                                                withInt:(jint)redColor;

+ (jint)getHexColorValueWithInt:(jint)color1
                        withInt:(jint)color2
                      withFloat:(jfloat)factor;

+ (JavaUtilArrayList *)getLayoutRectsWithDXHeatMapParameterDataTO:(DXHeatMapParameterDataTO *)data;

+ (PSListTO *)getParameterListWithDXHeatMapParametersEnum:(DXHeatMapParametersEnum *)sizeParam
                              withDXHeatMapParametersEnum:(DXHeatMapParametersEnum *)colorParam;

+ (DXHeatMapParameterDataTO *)getSizeParameterWithDXHeatMapResponseTO:(DXHeatMapResponseTO *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETHeatMapHelper)

FOUNDATION_EXPORT void DXMARKETHeatMapHelper_init(DXMARKETHeatMapHelper *self);

FOUNDATION_EXPORT DXMARKETHeatMapHelper *new_DXMARKETHeatMapHelper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETHeatMapHelper *create_DXMARKETHeatMapHelper_init(void);

FOUNDATION_EXPORT jint DXMARKETHeatMapHelper_getHexColorValueWithInt_withInt_withFloat_(jint color1, jint color2, jfloat factor);

FOUNDATION_EXPORT JavaUtilArrayList *DXMARKETHeatMapHelper_getLayoutRectsWithDXHeatMapParameterDataTO_(DXHeatMapParameterDataTO *data);

FOUNDATION_EXPORT PSLongListTO *DXMARKETHeatMapHelper_getColorsWithDXHeatMapParameterDataTO_withInt_withInt_withInt_(DXHeatMapParameterDataTO *data, jint neutralColor, jint greenColor, jint redColor);

FOUNDATION_EXPORT DXHeatMapParameterDataTO *DXMARKETHeatMapHelper_getSizeParameterWithDXHeatMapResponseTO_(DXHeatMapResponseTO *data);

FOUNDATION_EXPORT DXHeatMapParameterDataTO *DXMARKETHeatMapHelper_getColorParameterWithDXHeatMapResponseTO_(DXHeatMapResponseTO *data);

FOUNDATION_EXPORT PSListTO *DXMARKETHeatMapHelper_getParameterListWithDXHeatMapParametersEnum_withDXHeatMapParametersEnum_(DXHeatMapParametersEnum *sizeParam, DXHeatMapParametersEnum *colorParam);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETHeatMapHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper DXMARKETHeatMapHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapHelper")
