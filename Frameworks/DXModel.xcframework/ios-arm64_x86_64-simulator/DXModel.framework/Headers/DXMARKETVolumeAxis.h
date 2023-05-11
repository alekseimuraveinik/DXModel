
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeAxis")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartVolumeAxis
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeAxis 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeAxis 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartVolumeAxis

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETVolumeAxis_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeAxis || defined(INCLUDE_DXMARKETVolumeAxis))
#define DXMARKETVolumeAxis_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartValueAxis 1
#define INCLUDE_DXMARKETValueAxis 1
#include "DXMARKETValueAxis.h"

@interface DXMARKETVolumeAxis : DXMARKETValueAxis

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Package-Private

- (void)setRangeWithDouble:(jdouble)min_y
                withDouble:(jdouble)max_y;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETVolumeAxis)

FOUNDATION_EXPORT void DXMARKETVolumeAxis_init(DXMARKETVolumeAxis *self);

FOUNDATION_EXPORT DXMARKETVolumeAxis *new_DXMARKETVolumeAxis_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETVolumeAxis *create_DXMARKETVolumeAxis_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETVolumeAxis)

@compatibility_alias ComDevexpertsDxmarketClientModelChartVolumeAxis DXMARKETVolumeAxis;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeAxis")
