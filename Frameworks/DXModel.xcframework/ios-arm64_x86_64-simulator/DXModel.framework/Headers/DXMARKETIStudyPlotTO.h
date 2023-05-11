
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyPlotTO")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartIStudyPlotTO
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyPlotTO 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyPlotTO 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartIStudyPlotTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIStudyPlotTO_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyPlotTO || defined(INCLUDE_DXMARKETIStudyPlotTO))
#define DXMARKETIStudyPlotTO_

@class DXStudyPlotTypeEnum;

@protocol DXMARKETIStudyPlotTO < JavaObject >

- (NSString *)getName;

- (DXStudyPlotTypeEnum *)getType;

- (jint)getColorIndex;

- (jint)getShift;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIStudyPlotTO)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIStudyPlotTO)

#define ComDevexpertsDxmarketClientModelChartIStudyPlotTO DXMARKETIStudyPlotTO

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyPlotTO")
