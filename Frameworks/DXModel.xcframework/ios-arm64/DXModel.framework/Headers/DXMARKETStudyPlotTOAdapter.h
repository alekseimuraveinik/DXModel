
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStudyPlotTOAdapter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter || defined(INCLUDE_DXMARKETStudyPlotTOAdapter))
#define DXMARKETStudyPlotTOAdapter_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartIStudyPlotTO 1
#define INCLUDE_DXMARKETIStudyPlotTO 1
#include "DXMARKETIStudyPlotTO.h"

@class DXStudyPlotTO;
@class DXStudyPlotTypeEnum;

@interface DXMARKETStudyPlotTOAdapter : NSObject < DXMARKETIStudyPlotTO > {
 @public
  DXStudyPlotTO *study_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXStudyPlotTO:(DXStudyPlotTO *)study;

- (jint)getColorIndex;

- (NSString *)getName;

- (jint)getShift;

- (DXStudyPlotTypeEnum *)getType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStudyPlotTOAdapter)

J2OBJC_FIELD_SETTER(DXMARKETStudyPlotTOAdapter, study_, DXStudyPlotTO *)

FOUNDATION_EXPORT void DXMARKETStudyPlotTOAdapter_initWithDXStudyPlotTO_(DXMARKETStudyPlotTOAdapter *self, DXStudyPlotTO *study);

FOUNDATION_EXPORT DXMARKETStudyPlotTOAdapter *new_DXMARKETStudyPlotTOAdapter_initWithDXStudyPlotTO_(DXStudyPlotTO *study) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStudyPlotTOAdapter *create_DXMARKETStudyPlotTOAdapter_initWithDXStudyPlotTO_(DXStudyPlotTO *study);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStudyPlotTOAdapter)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter DXMARKETStudyPlotTOAdapter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyPlotTOAdapter")
