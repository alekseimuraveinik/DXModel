
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETHeatMapRect_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect || defined(INCLUDE_DXMARKETHeatMapRect))
#define DXMARKETHeatMapRect_

@interface DXMARKETHeatMapRect : NSObject {
 @public
  jfloat top_;
  jfloat bottom_;
  jfloat left_;
  jfloat right_;
}

#pragma mark Public

- (instancetype __nonnull)initWithFloat:(jfloat)left
                              withFloat:(jfloat)top
                              withFloat:(jfloat)right
                              withFloat:(jfloat)bottom;

- (instancetype __nonnull)initWithDXMARKETHeatMapRect:(DXMARKETHeatMapRect *)rect;

+ (DXMARKETHeatMapRect *)createAndroidStyleWithFloat:(jfloat)left
                                           withFloat:(jfloat)top
                                           withFloat:(jfloat)right
                                           withFloat:(jfloat)bottom;

+ (DXMARKETHeatMapRect *)createIOSStyleWithFloat:(jfloat)x
                                       withFloat:(jfloat)y
                                       withFloat:(jfloat)width
                                       withFloat:(jfloat)height;

- (jfloat)height;

- (jfloat)originX;

- (jfloat)originY;

- (jfloat)width;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETHeatMapRect)

FOUNDATION_EXPORT DXMARKETHeatMapRect *DXMARKETHeatMapRect_createIOSStyleWithFloat_withFloat_withFloat_withFloat_(jfloat x, jfloat y, jfloat width, jfloat height);

FOUNDATION_EXPORT DXMARKETHeatMapRect *DXMARKETHeatMapRect_createAndroidStyleWithFloat_withFloat_withFloat_withFloat_(jfloat left, jfloat top, jfloat right, jfloat bottom);

FOUNDATION_EXPORT void DXMARKETHeatMapRect_initWithFloat_withFloat_withFloat_withFloat_(DXMARKETHeatMapRect *self, jfloat left, jfloat top, jfloat right, jfloat bottom);

FOUNDATION_EXPORT DXMARKETHeatMapRect *new_DXMARKETHeatMapRect_initWithFloat_withFloat_withFloat_withFloat_(jfloat left, jfloat top, jfloat right, jfloat bottom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETHeatMapRect *create_DXMARKETHeatMapRect_initWithFloat_withFloat_withFloat_withFloat_(jfloat left, jfloat top, jfloat right, jfloat bottom);

FOUNDATION_EXPORT void DXMARKETHeatMapRect_initWithDXMARKETHeatMapRect_(DXMARKETHeatMapRect *self, DXMARKETHeatMapRect *rect);

FOUNDATION_EXPORT DXMARKETHeatMapRect *new_DXMARKETHeatMapRect_initWithDXMARKETHeatMapRect_(DXMARKETHeatMapRect *rect) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETHeatMapRect *create_DXMARKETHeatMapRect_initWithDXMARKETHeatMapRect_(DXMARKETHeatMapRect *rect);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETHeatMapRect)

@compatibility_alias ComDevexpertsDxmarketClientModelHeatmapHeatMapRect DXMARKETHeatMapRect;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelHeatmapHeatMapRect")
