
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSingleColorAdapter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter || defined(INCLUDE_DXMARKETSingleColorAdapter))
#define DXMARKETSingleColorAdapter_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter 1
#define INCLUDE_DXMARKETMultiColorViewAdapter 1
#include "DXMARKETMultiColorViewAdapter.h"

@interface DXMARKETSingleColorAdapter : NSObject < DXMARKETMultiColorViewAdapter >

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)color;

- (jint)getColorWithInt:(jint)i;

- (jint)getColorsCount;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSingleColorAdapter)

FOUNDATION_EXPORT void DXMARKETSingleColorAdapter_initWithInt_(DXMARKETSingleColorAdapter *self, jint color);

FOUNDATION_EXPORT DXMARKETSingleColorAdapter *new_DXMARKETSingleColorAdapter_initWithInt_(jint color) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSingleColorAdapter *create_DXMARKETSingleColorAdapter_initWithInt_(jint color);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSingleColorAdapter)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter DXMARKETSingleColorAdapter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplSingleColorAdapter")
