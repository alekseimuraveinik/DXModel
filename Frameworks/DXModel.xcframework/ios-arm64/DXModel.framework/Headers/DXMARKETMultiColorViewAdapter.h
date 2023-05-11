
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMultiColorViewAdapter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter || defined(INCLUDE_DXMARKETMultiColorViewAdapter))
#define DXMARKETMultiColorViewAdapter_

@protocol DXMARKETMultiColorViewAdapter < JavaObject >

- (jint)getColorsCount;

- (jint)getColorWithInt:(jint)i;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMultiColorViewAdapter)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMultiColorViewAdapter)

#define ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter DXMARKETMultiColorViewAdapter

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter")
