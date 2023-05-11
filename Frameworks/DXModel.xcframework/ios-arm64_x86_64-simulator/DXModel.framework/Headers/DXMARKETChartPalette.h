
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartPalette")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartChartPalette
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartPalette 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartPalette 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartChartPalette

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartPalette_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartPalette || defined(INCLUDE_DXMARKETChartPalette))
#define DXMARKETChartPalette_

@protocol DXMARKETChartPalette < JavaObject >

- (jint)getColorByCodeWithInt:(jint)code;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartPalette)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartPalette)

#define ComDevexpertsDxmarketClientModelChartChartPalette DXMARKETChartPalette

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartPalette")
