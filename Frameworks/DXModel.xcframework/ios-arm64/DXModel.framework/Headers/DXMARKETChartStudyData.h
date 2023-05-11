
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartStudyData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartChartStudyData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartStudyData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartStudyData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartChartStudyData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartStudyData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartStudyData || defined(INCLUDE_DXMARKETChartStudyData))
#define DXMARKETChartStudyData_

@protocol DXMARKETIStudyCloudTO;
@protocol DXMARKETIStudyParameterTO;
@protocol DXMARKETIStudyPlotTO;

@protocol DXMARKETChartStudyData < JavaObject >

- (NSString *)getName;

- (jboolean)isOverlaying;

- (jint)getPlotCount;

- (id<DXMARKETIStudyPlotTO>)getPlotWithInt:(jint)i;

- (jint)getCloudCount;

- (id<DXMARKETIStudyCloudTO>)getCloudWithInt:(jint)i;

- (jint)getParameterCount;

- (id<DXMARKETIStudyParameterTO>)getParameterWithInt:(jint)i;

- (jboolean)isEmpty;

- (jdouble)getPlotValueWithInt:(jint)plot
                       withInt:(jint)i;

- (jint)getStudyScale;

- (jint)getPlotWidth;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartStudyData)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartStudyData)

#define ComDevexpertsDxmarketClientModelChartChartStudyData DXMARKETChartStudyData

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartStudyData")
