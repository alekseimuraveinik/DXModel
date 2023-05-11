
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeRange")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartVolumeRange
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeRange 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeRange 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartVolumeRange

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETVolumeRange_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeRange || defined(INCLUDE_DXMARKETVolumeRange))
#define DXMARKETVolumeRange_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartValueRange 1
#define INCLUDE_DXMARKETValueRange 1
#include "DXMARKETValueRange.h"

@interface DXMARKETVolumeRange : DXMARKETValueRange

#pragma mark Public

- (instancetype __nonnull)init;

- (void)setRangeWithDouble:(jdouble)min
                withDouble:(jdouble)max;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETVolumeRange)

FOUNDATION_EXPORT void DXMARKETVolumeRange_init(DXMARKETVolumeRange *self);

FOUNDATION_EXPORT DXMARKETVolumeRange *new_DXMARKETVolumeRange_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETVolumeRange *create_DXMARKETVolumeRange_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETVolumeRange)

@compatibility_alias ComDevexpertsDxmarketClientModelChartVolumeRange DXMARKETVolumeRange;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartVolumeRange")
