
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultRectangleChartPalette_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette || defined(INCLUDE_DXMARKETDefaultRectangleChartPalette))
#define DXMARKETDefaultRectangleChartPalette_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartPalette 1
#define INCLUDE_DXMARKETChartPalette 1
#include "DXMARKETChartPalette.h"

@interface DXMARKETDefaultRectangleChartPalette : NSObject < DXMARKETChartPalette >

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)composeColorIndexWithInt:(jint)position;

- (jint)getColorByCodeWithInt:(jint)code;

- (jint)getColorIndexWithInt:(jint)color;

- (jint)height;

- (jint)normalizeIndexWithInt:(jint)index;

- (jint)width;

@end

J2OBJC_STATIC_INIT(DXMARKETDefaultRectangleChartPalette)

FOUNDATION_EXPORT void DXMARKETDefaultRectangleChartPalette_init(DXMARKETDefaultRectangleChartPalette *self);

FOUNDATION_EXPORT DXMARKETDefaultRectangleChartPalette *new_DXMARKETDefaultRectangleChartPalette_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultRectangleChartPalette *create_DXMARKETDefaultRectangleChartPalette_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultRectangleChartPalette)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette DXMARKETDefaultRectangleChartPalette;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplDefaultRectangleChartPalette")
