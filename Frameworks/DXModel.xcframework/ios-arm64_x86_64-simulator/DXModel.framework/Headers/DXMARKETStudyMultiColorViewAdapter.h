
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStudyMultiColorViewAdapter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter || defined(INCLUDE_DXMARKETStudyMultiColorViewAdapter))
#define DXMARKETStudyMultiColorViewAdapter_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartMultiColorViewAdapter 1
#define INCLUDE_DXMARKETMultiColorViewAdapter 1
#include "DXMARKETMultiColorViewAdapter.h"

@class DXStudyDescriptionTO;
@protocol DXMARKETChartPalette;

@interface DXMARKETStudyMultiColorViewAdapter : NSObject < DXMARKETMultiColorViewAdapter >

#pragma mark Public

- (instancetype __nonnull)initWithDXStudyDescriptionTO:(DXStudyDescriptionTO *)study
                              withDXMARKETChartPalette:(id<DXMARKETChartPalette>)palette;

- (jint)getColorWithInt:(jint)i;

- (jint)getColorsCount;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStudyMultiColorViewAdapter)

FOUNDATION_EXPORT void DXMARKETStudyMultiColorViewAdapter_initWithDXStudyDescriptionTO_withDXMARKETChartPalette_(DXMARKETStudyMultiColorViewAdapter *self, DXStudyDescriptionTO *study, id<DXMARKETChartPalette> palette);

FOUNDATION_EXPORT DXMARKETStudyMultiColorViewAdapter *new_DXMARKETStudyMultiColorViewAdapter_initWithDXStudyDescriptionTO_withDXMARKETChartPalette_(DXStudyDescriptionTO *study, id<DXMARKETChartPalette> palette) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStudyMultiColorViewAdapter *create_DXMARKETStudyMultiColorViewAdapter_initWithDXStudyDescriptionTO_withDXMARKETChartPalette_(DXStudyDescriptionTO *study, id<DXMARKETChartPalette> palette);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStudyMultiColorViewAdapter)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter DXMARKETStudyMultiColorViewAdapter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyMultiColorViewAdapter")
