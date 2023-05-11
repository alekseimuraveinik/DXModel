
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMockChartStudyData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData || defined(INCLUDE_DXMARKETMockChartStudyData))
#define DXMARKETMockChartStudyData_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartStudyData 1
#define INCLUDE_DXMARKETChartStudyData 1
#include "DXMARKETChartStudyData.h"

@class JavaUtilArrayList;
@protocol DXMARKETIStudyCloudTO;
@protocol DXMARKETIStudyParameterTO;
@protocol DXMARKETIStudyPlotTO;

@interface DXMARKETMockChartStudyData : NSObject < DXMARKETChartStudyData >

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilArrayList:(JavaUtilArrayList *)plotTOs
                                            withInt:(jint)size;

- (id<DXMARKETIStudyCloudTO>)getCloudWithInt:(jint)i;

- (jint)getCloudCount;

- (NSString *)getName;

- (id<DXMARKETIStudyParameterTO>)getParameterWithInt:(jint)i;

- (jint)getParameterCount;

- (id<DXMARKETIStudyPlotTO>)getPlotWithInt:(jint)i;

- (jint)getPlotCount;

- (jdouble)getPlotValueWithInt:(jint)plotNumber
                       withInt:(jint)index;

- (jint)getPlotWidth;

- (jint)getStudyScale;

- (jboolean)isEmpty;

- (jboolean)isOverlaying;

- (void)setPlotWithDXMARKETIStudyPlotTO:(id<DXMARKETIStudyPlotTO>)plotTO
                                withInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMockChartStudyData)

FOUNDATION_EXPORT void DXMARKETMockChartStudyData_initWithJavaUtilArrayList_withInt_(DXMARKETMockChartStudyData *self, JavaUtilArrayList *plotTOs, jint size);

FOUNDATION_EXPORT DXMARKETMockChartStudyData *new_DXMARKETMockChartStudyData_initWithJavaUtilArrayList_withInt_(JavaUtilArrayList *plotTOs, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMockChartStudyData *create_DXMARKETMockChartStudyData_initWithJavaUtilArrayList_withInt_(JavaUtilArrayList *plotTOs, jint size);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMockChartStudyData)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplMockChartStudyData DXMARKETMockChartStudyData;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockChartStudyData")
